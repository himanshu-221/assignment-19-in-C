/*Write a program to search a string in the list of strings.
*/
#include<stdio.h>
#include<string.h>

int main()
{
   char str[]="123.45.67.89";
   char s[]=".";
   char *token=strtok(str,s);
   
   printf("%s\n",token);
   while(token!= NULL)
   {
    printf("%s\n",token);
    token=strtok(NULL,s);
   }
   return 0;

    return 0;
}