#include<stdio.h>
#include<stdlib.h>

#include<rpc/rpc.h>

#include "rev.h"

int main(int argc, char * argv[]){

	
	CLIENT*	clnt;
	char*	server;
	char*	str;
	
	strg *	res;
	
	
	char	buf[40]="koenigsegg";
	
	server = argv[1];
	str = argv[2];
	
	clnt = clnt_create(server, REVERSE, REV, "udp");

	if(clnt == (CLIENT *)NULL){
	
		clnt_pcreateerror(server);
		exit(1);
	
	}
	
	
	res = str_rev_1(&str, clnt);
	
		printf("\n REversed str:%s\n", res->s);



	clnt_destroy(clnt);


	return	0;
	
}
