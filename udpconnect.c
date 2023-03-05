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

void udpconnect(struct node *node, char *buffer,struct addrinfo *res, int net)
{
    
fd_UDP=socket (AF_INET, SOCK_DGRAM, 0)
    if (fd == -1)
        exit(1);

    memset(&hints, 0, sizeof hints);
    hints.ai_family = AF_INET;
    hints.ai_socktype = SOCK_DGRAM;

    errcode = getaddrinfo(buffer, regUDP, &hints, &res);
    if (errcode != 0)
        exit(1);

    

    n = sendto(fd_UDP,"REG %d %d %s %s", net, node-> id, res-> ai_adrr, res-> ai_addrlen);
    if (n==-1) exit(1);

    addrlen=sizeof(addr);
    n= recvfrom(fd_UDP, buffer, 128, 0, (struct sockaddr*)&addr, &addrlen);
    if (n==-1) exit(1);

    write(1, "echo: ", 6);
    write(1,buffer,n);
}