/*
 * This is sample code generated by rpcgen.
 * These are only templates and you can use them
 * as a guideline for developing your own functions.
 */

#include "bank.h"
#include<stdio.h>
#include<stdlib.h>


typedef struct acc{

	char	name[30];
	char	pass[30];
	int	balance;
}acc;

acc accounts[20];
int index1;
int verified;

double *
init_1_svc(usr_pass *argp, struct svc_req *rqstp)
{
	static double  result;


	strcpy(accounts[index1].name, argp->usr);
	strcpy(accounts[index1].pass, argp->pass);
	accounts[index1].balance = 5000;
	index1++;
	
	/*
	 * insert server code here
	 */

	return &result;
}

double *
verify_1_svc(usr_pass *argp, struct svc_req *rqstp)
{
	static double  result;
	int	i;
	
	result = 0;
	for(i = 0; i < index1; i++){
	
		if(!strcmp(argp->usr, accounts[i].name)){
		
			if(!strcmp(argp->pass, accounts[i].pass)){
			
				result =1;
				verified = i;
			}
		
		}
	
	
	}
	

	/*
	 * insert server code here
	 */

	return &result;
}

double *
balance_1_svc(double *argp, struct svc_req *rqstp)
{
	static double  result;

	result = 0;
	if(accounts[verified].balance > *argp){
	
		result = 1;
		accounts[verified].balance -= *argp;
	
	}
	

	/*
	 * insert server code here
	 */

	return &result;
}
