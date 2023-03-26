/*Write a program to print the strings which are palindrome in the list of strings.
*/

#include<stdio.h>
#include<string.h>
int main()
{
    char str[5][10];
    char temp[10];
    int i,j;
    printf("enter Five strings\n");
    for(i=0;i<5;i++)
    {
        gets(str[i]);
    }
    for(i=0;i<5;i++)
    {
        strcpy(temp,str[i]);
        strrev(temp);
        if(strcmp(temp,str[i])==0)
        {
            printf("%s\t",str[i]);
        }
    }
    return 0;
}