#include<stdio.h>
#include<string.h>

int main()
{
  char pass[50];
  int i, len ,letter=0,digit=0,symbol=0;
  printf("Enter a password: ");
  scanf("%s", &pass);
  if(strlen(pass)>=6);
  {
    len=strlen(pass);
     for (i = 0; i < len; i++)
     {
       if (pass[i] >= 'a' && pass[i] <= 'z'|| pass[i] >= 'A' && pass[i] <= 'Z')
	     {
	     	letter=1;
		 }
		 else if(pass[i]   >= '0' && pass[i] <= '9')
		 {
		 	digit=1;
		 }
		 else
		 {
		 	symbol=1;
		 }
		 
       
     }
     if(letter == 1 && digit == 1 &&symbol==1)
       {
       	     printf("  Password Sucess! ");

	   } else
	   {
	   	 printf("Try Again..one letter,one digit and one special symbol.");
       }
	   
}}
