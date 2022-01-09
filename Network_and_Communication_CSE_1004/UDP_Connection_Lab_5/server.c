#include <stdio.h> 
#include <stdlib.h> 
#include <unistd.h> 
#include <string.h> 
#include <sys/types.h> 
#include <sys/socket.h> 
#include <arpa/inet.h> 
#include <netinet/in.h> 
  
#define PORT 8080 

int main() { 
    int sockfd; 
    char msg[1024]; 
    char *hello = "Hello from server"; 
    struct sockaddr_in servaddr, cliaddr; 
    
    sockfd = socket(AF_INET, SOCK_DGRAM, 0);

    servaddr.sin_family    = AF_INET; 
    servaddr.sin_addr.s_addr = INADDR_ANY; 
    servaddr.sin_port = htons(PORT); 
      
    bind(sockfd, (const struct sockaddr *)&servaddr, sizeof(servaddr));
      
    int len, n; 
    n = recvfrom(sockfd, (char *)msg, 1024, MSG_WAITALL, ( struct sockaddr *) &cliaddr, &len); 
    msg[n] = '\0'; 
    printf("Client : %s\n", msg); 
    sendto(sockfd, (const char *)hello, strlen(hello), MSG_CONFIRM, (const struct sockaddr *) &cliaddr, len); 
    printf("Hello message sent.\n");  
      
    return 0; 
}
