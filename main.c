#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <netdb.h>
#include <sys/time.h>
#include <string.h>
#include <arpa/inet.h>
#include "node.h"
#include "getip.h"
#include "udpconnect.h"

#define max(A,B) (A)>=(B)?(A):(B))
#define PORT "59000"

int main(int arg c, *char argv[])
{
    int fd, errcode;
    ssize_t n;
    socklen_t addrlen;
    struct addrinfo hints, *res;
    struct sockaddr_in addr;
    char buffer[128];
    int fd_UDP,newfd,afd=0;
    fd_set rfds;
    enum {idle,busy} state;
    int maxfd,counter;
    struct node *no;

    if (argc != 5)
        printf("nr de argumentos inusificentes");
        exit(); //se o comando nao for na forma cot IP TCP regIP reg UDP, sai
    /*...*/

    regIP = (char*) malloc(15*sizeof(char)); //for server's ip address provided by staff
    regUDP = (char*) malloc(1*sizeof(char)) //for servers's UDP port provided by staff

//reads net input from user and stores in struct node
int net;
printdf("input net number: \n");
scanf("%d", &net);

if (scanf("%d",&net) != 1) exit(1);

//reads id input from user and stores in struct node
int id;
printf("input id number: \n");
scanf("%d", &id);
no->id = id;

//get host name
    gethostname(buffer, 128)
    if(gethostname(buffer,128)==-1)
        fprintf(stderr,"error: %s\n",strerror(errno));
    strcpy(net_node.hostname, buffer);

    strcpy(regIP, argv[3]);
    strcpy(regUDP, argv[4]);

    char *ip = getip(no);
    no-> ip = ip;






/*fd=socket(…);bind(fd,…);listen(fd,…);*/

//UDP connection 
    udpconnect(no, buffer, res, net);



    
    
/* ... */


    
