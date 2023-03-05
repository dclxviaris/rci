#ifndef udpconnect.h
#define udpconnect.h

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

void udpconnect(struct net_node *node, char *buffer,struct addrinfo *res);
