#ifndef getip.h
#define getip.h

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netdb.h>
#include <arpa/inet.h>
#include <string.h>
#include "node.h"

//receives node and returns a poiter to a string indicating its ip adress
char *getip(struct net_node *node);

#endif