#include<stdio.h>
#include<string.h>

main(){
	char a[1000];
	int i,length,lwr=0,upr=0,spec=0,num=0;
	printf("Password must contain at least one letter, one digit & one special symbol\n");
	printf("Password must contain at least 6 characters.For example \n\n");
	printf("Enter your password :- ");
	
	gets(a);
	
	length = strlen(a);
	for(i=0; i<=length; i++){
		
		if(a[i]>='A'&& a[i]<='Z')++upr;
		if(a[i]>='a'&& a[i]<='z')++lwr;
		if(a[i]>=0 && a[i]<=9)++num;
		if(a[i]=='@' || a[i]=='#' || a[i]=='$')++spec;
	}
	
	(upr>0 && lwr>0 && num>0 && spec>0)?printf("password is strong.."):printf("password is weak.."); 
}
