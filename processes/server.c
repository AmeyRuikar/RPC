#include<stdio.h>
#include<stdlib.h>
#include<rpc/rpc.h>

#include "process.h"

proc * remote_procs_1_svc(int * te, struct svc_req * req){


	FILE*	fp;
	char	buf[300];
	char	str[60][60];
	int	pid;
	
	int	cnt = 0;
	static	proc p;
	
	
	system("ps  > procs.txt");
	
	fp = fopen("procs.txt","r+");
	
	while(!feof(fp)){
	
		fgets(buf, 300, fp);
		
			
		if( cnt != 0 ){
		
			
			sscanf(buf,"%d %s %s %s",&pid, str[0], str[1], str[2]);
	
			//p.proc_id[cnt-1] = pid;
			//strcpy(p.processes[cnt-1], str[2]);
		
		}
		
		cnt ++;
	
	
	}
	
	cnt--;	

	p.no = cnt;
	
	return(&p);


}
