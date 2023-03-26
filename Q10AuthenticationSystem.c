/*Create an authentication system. It should be menu driven*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int authentication(char *user,char *pass)
{
    int i;
    char ch;
     for(i=0;i<8;i++)
   {
    ch=getchar();
    pass[i]=ch;
    ch='*';
    printf("%c",ch);
   }
   pass[i]='\0';
   return *pass;
}
int main()
{
   char username[10],password[10];
   printf("Enter your username\n");
   int i;
   gets(username);
   printf("Enter password it should be minimum 8 charecter\n");
    authentication(username,password);
//     char ch1;
//    printf("\nDo you want to print your username or password\npress 'y' or 'n'");
//    ch1=getchar();
//     if(ch1=='y')
//     {
//         printf("%s\n%s\n",username,password);
//     }
//     else{
//         printf("Thank you\n");
//     }
    return 0;
}