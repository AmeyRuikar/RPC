#include<stdio.h>

int main(){


	FILE *fp;
	char	buf[90];
	char	str1[20],str2[30],str3[20];
	int pid;
	
	fp = fopen("procs.txt","r");


		fgets(buf,90,fp);
		printf("%s",buf);
		fflush(stdout);
		
	while(!feof(fp)){
		
		fgets( buf, 90, fp);
		
		sscanf(buf,"%d%s%s%s",&pid, str1, str2, str3);
		printf("\n%d",pid);
	
	}


	return 0;
}
