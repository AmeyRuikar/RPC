
struct usr_pass{

	char	usr[100];
	char	pass[100];

};

program BANK{

	version SWISS_BANK{
	
		double INIT(usr_pass) = 1;
		double VERIFY(usr_pass) = 2;
		double BALANCE(double) = 3;
	
	} = 1;

}= 666;
