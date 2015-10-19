
struct processes{

	char	proc[400];
	int	pid[40];
	int	total;

};


program	REMOTEPROCS{

	version	PROCS{
	
		processes remotep(double) = 1;
	
	} = 1;


} = 777;
