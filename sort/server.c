#include<stdio.h>
#include<stdlib.h>
#include"sort.h"
#include<rpc/rpc.h>

num * sort_1_svc(num* x, struct svc_req * req){


	int i,j;
	int 	temp;
	static num n2;
	int 	array[40];
	
	
	
	for(i = 0 ; i< x->count; i++){
	
		array[i]=x->arr[i];
	
	}
	
	for(i = 0; i< x->count ; i++){
	
		for(j = 0 ; j< x->count -1; j++){
		
		
			if(array[j] > array[j + 1] ){
			
				temp = array[j];
				array[j] = array[j+1];
				array[j+1] = temp;
			
			}
		
		
		}
	
	
	
	}


	for(i = 0 ; i< x->count; i++){
	
		n2.arr[i]=array[i];
	
	}

	
	return(&n2);

}
