#include<stdio.h>
#include<rpc/rpc.h>

#include "search.h"

double * searchx_1_svc(char ** msg, struct svc_req *req){

	static double x;
	
	char	buf[50];
	
		FILE *fp;
		
		fp = fopen("procs.txt","r");
		
		
		
		while(!feof(fp)){
		
			fgets(buf, 50 ,fp);	
	
		}
	
	
	x=1;


	return(&x);

}
