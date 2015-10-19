#include<stdio.h>
#include "avg.h"


int main(int argc, char * argv[]){


	CLIENT*	clnt;
	struct	numbers n;
	double*	ptr;
	int	i;
	char*	endptr;
	double	f;
	char*	server;
	
	server = argv[1];
	
	n.vals = argc - 2;
	for(i = 0; i < argc -2; i++){
	
		f = strtod(argv[i+2],&endptr);
	
		n.nos[i] = f;
		
		printf(" %e ", f);
		
	}
	
	clnt = clnt_create(server, AVERAGE, AVG, "udp");
	
	if(clnt == (CLIENT *)NULL){
	
		clnt_pcreateerror(server);
	
	}

	ptr = cal_avg_1(&n, clnt);
	
	if(*ptr == 0.0){
	
		printf("\ncall failed");
		exit(0);
	}
	
	printf("Average = %e", *ptr);

	clnt_destroy(clnt);

	return	0;
}








