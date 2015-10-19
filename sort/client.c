#include<stdio.h>
#include<stdlib.h>

#include"sort.h"
#include<rpc/rpc.h>


int main(int argc, char * argv[]){

	CLIENT * clnt;
	int	i;
	char * server;	
	num n;
	num* res;

	server = argv[1];	
	printf("\nGiven list->\n");
	for(i = 0; i < argc -2 ; i++){
	
		n.arr[i] = atoi(argv[i+2]);
		
		printf("\n%d", n.arr[i]);
	
	}
	
	n.count = argc -2;
	
	clnt = clnt_create(server, SORTS, BUBBLE, "udp");
	
	if(clnt == (CLIENT *)NULL){
	
		clnt_pcreateerror(server);
	}

	res = sort_1(&n, clnt);

	printf("\nsorted list->\n");
	for(i = 0; i < argc -2 ; i++){
		printf("\n%d", res->arr[i]);
	
	}


	clnt_destroy(clnt);
	return 0;
}


