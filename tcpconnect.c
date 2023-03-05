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

void tcpconnect()
fd_TCP=socket(AF_INET,SOCK_STREAM,0);
if (fd==-1) exit(1);

memset(&hints,0,sizeof hints);
hints.ai_family=AF_INET;
hints.ai_socktype=SOCK_STREAM;

errcode=getaddrinfo("tejo.tecnico.ulisboa.pt",PORT,&hints,&res);
if(errcode!=0)/*error*/

n=connect(fd,res->ai_addr,res->ai_addrlen);
if(n==-1)/*error*/exit(1);

n=write(fd,"Hello!\n",7);
if(n==-1)/*error*/exit(1);

n=read(fd,buffer,128);
if(n==-1)/*error*/exit(1);

write(1,"echo: ",6); write(1,buffer,n);

bind(fd_TCP, )
