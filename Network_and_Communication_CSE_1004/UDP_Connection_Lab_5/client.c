#include <sys/types.h> 
#include <sys/socket.h> 
#include <arpa/inet.h> 
#include <netinet/in.h> 
  
#define PORT 8080 
  
int main() { 
    int sockfd; 
    char msg[1024]; 
    char *hello = "Hello from client"; 
    struct sockaddr_in servaddr; 
  
    sockfd = socket(AF_INET, SOCK_DGRAM, 0); 

    servaddr.sin_family = AF_INET; 
    servaddr.sin_port = htons(PORT); 
    servaddr.sin_addr.s_addr = INADDR_ANY; 
      
    int len, n; 
      
    sendto(sockfd, (const char *)hello, strlen(hello), MSG_CONFIRM, (const struct sockaddr *) &servaddr, 			sizeof(servaddr)); 
    printf("Hello message sent.\n"); 
          
    n = recvfrom(sockfd, (char *)msg, 1024, MSG_WAITALL, (struct sockaddr *) &servaddr, &len); 
    msg[n] = '\0'; 
    printf("Server : %s\n", msg); 
  
    close(sockfd); 
    return 0; 
} 
