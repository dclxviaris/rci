#ifndef node.h
#define node.h

#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <netdb.h>
#define PORT "58001"

//struct that defines each node
/*Struct para cada node da rede*/
/*typedef struct net_node
{
    char hostname[128]; 
   int id;
   int net; 
   char* Neighboors[50];
   char* Path[50];
}; */

//cena que os prof disseram para usar
typedef struct node
{
    int id;
    int fd;
    char *ip;
    int *port;
} node_t;






#endif