#include <stdio.h> 
#include <sys/socket.h> 
#include <arpa/inet.h> 
#include <unistd.h> 
#include <string.h> 
#define PORT 8080 
   
int main(int argc, char const *argv[]) 
{ 
    int sock = 0, valread; 
    struct sockaddr_in serv_addr; 
    if ((sock = socket(AF_INET, SOCK_STREAM, 0)) < 0) 
    { 
        printf("\n Socket creation error \n"); 
        return -1; 
    } 
   
    serv_addr.sin_family = AF_INET; 
    serv_addr.sin_port = htons(PORT); 
       
    // Convert IPv4 and IPv6 addresses from text to binary form 
    if(inet_pton(AF_INET, "127.0.0.1", &serv_addr.sin_addr)<=0)  
    { 
        printf("\nInvalid address/ Address not supported \n"); 
        return -1; 
    } 
   
    if (connect(sock, (struct sockaddr *)&serv_addr, sizeof(serv_addr)) < 0) 
    { 
        printf("\nConnection Failed \n"); 
        return -1; 
    } 


    printf("Enter the text : ");
    char stri[1024];
    scanf("%s", stri);

    send(sock , stri , sizeof(stri), 0); 
    printf("Text sent\n");
    
    char res[1024];
    valread = read( sock , res, sizeof(res)); 
    printf("The text recieved : %s\n", res);

    int i=0;
    if(strlen(stri)!=strlen(res))
    {
	printf("Echo Unuccessful!!\n");
    }
    else
    {
	int flag = 1;        
	for(i=0;i<strlen(res);i++)
        {
	    if(res[i]!=stri[i])
	    {
		flag=0;
		break;
	    }
        }
        if(flag)
        {
	    printf("Echo Successful!!\n");
        }
        else
        {
	    printf("Echo Unuccessful!!\n");
        }
    }
    return 0; 
} 
