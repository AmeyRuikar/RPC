#include<stdio.h>
#include<stdlib.h>

#include<rpc/rpc.h>
#include "process.h"

int main(int argc, char * argv[]){

	CLIENT*	clnt;
	char*	server;
	proc*	res;
	int	max, i;

	


	server = argv[1];
	
	printf("\nclient started");
	clnt = clnt_create(server, PROCESS, PROC, "udp");
	
	
	
	if(clnt == (CLIENT *)NULL){
	
		clnt_pcreateerror(server);
	}
	
	max =0;
	
	res = remote_procs_1(&max, clnt);
	
	if(res ==NULL)
	{
		printf("error");
	
	}
	
	max = res->no;
	
	printf("\n nos->%d", max);
	printf("\nProcess name\t\tpid\n");
	
	for( i = 0; i < max; i++){
	
		//printf("\n%s\t\t%d", res->processes[i], res->proc_id[i]);
	
	}
	
	
	clnt_destroy(clnt);	

	return	0;

}
