#include<stdio.h>
#include<string.h>

 main()
{
     char user_name[] = "Hello@gmail.com";
     char user_password[] = "Hey@123";
     char user_name1[20];
     char user_password1[20];
     
     printf("Enter Username =>");
     gets(user_name1);
     
     printf("Enter Password =>");
     gets(user_password1);
     
     if((strcmp(user_name, user_name1) == 0) && (strcmp(user_password, user_password1) ==0 ))
        {
          printf("Success");
        }
        else
        {
          printf("Please type correct user_name or user_password");
        }
}

