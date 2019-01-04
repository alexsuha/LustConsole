/*
 * server.h
 *
 *  Created on: Dec 21, 2018
 *      Author: lustlord
 */

#ifndef SRC_SERVER_H_
#define SRC_SERVER_H_

typedef struct ClientNode {
	int data;
	struct ClientNode* prev;
	struct ClientNode* link;
	char ip[16];
	char name[31];
} ClientList;

ClientList *newNode(int sockfd, char* ip) {
	ClientList *np = (ClientList *)malloc(sizeof (ClientList));
	np->data = sockfd;
	np->prev = NULL;
	np->link = NULL;
	strncpy(np->ip, ip, 16);
	strncpy(np->name, "NULL", 5);
	return np;
}

#endif /* SRC_SERVER_H_ */
