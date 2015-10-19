#include<stdio.h>
#include<stdlib.h>

#include<rpc/rpc.h>
#include "rev.h"

strg * str_rev_1_svc(char ** str1, struct svc_req *req){

	static strg res1;
	int	len;	
	int i,j;
	char	buf[40];
	//strcpy(res1.s, *str1);
	
	//s = *str1;
	
	strcpy(buf, *str1);
	
	len = strlen(buf);
	
	j =len;
	j--;
	
	for(i = 0; i < len; i++){
	
		res1.s[i] = buf[j];
		
		j--;
		
	}
	
	

	return(&res1);

}
