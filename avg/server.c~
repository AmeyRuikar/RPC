#include<stdio.h>
#include<rpc/rpc.h>
#include "avg.h"

double *
cal_avg_1_svc(numbers * x, struct svc_req * req)
{

	static	double	result;
	int	p;
	int	i;
	
	p = x->vals;
	
	for(i = 0; i < p; i++){
	
		result += x->nos[i];
	
	}
	
	result /= p;
	
	return(&result);


}


