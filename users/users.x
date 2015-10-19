
struct	users{

	char	user[400];
	char	logins[400];
	int	total;
	
};

program	USERS{

	version	USE{
	
		users info(double) = 1;
	
	} = 1;


} = 555;
