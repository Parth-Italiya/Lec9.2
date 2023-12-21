#include<stdio.h>
#include<string.h>

main(){
	
	char Remail[100];
	char Rpassword[100];
	char email[100];
	char password[100];
	
	
	printf("Register below\n");
	printf("Enter your Email :- ");

	gets(Remail);

	printf("Enter your password :- ");
	gets(Rpassword);

	printf("\n your registration is successful\n\n");
	system("cls");

	printf("login below\n");
	printf("Enter your Email :- ");
	gets(email);

	printf("Enter your password :- ");
	gets(password);
	
	if(strcmp(Remail,email)==0){
	
		if(strcmp(Rpassword,password)==0){
			printf("Login successfull..");	 
	
		}else{
			printf("wrong password..");
		}	

	}else{
		printf("login is invalid");
	}	
}
