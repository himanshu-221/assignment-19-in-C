/*Suppose we have a list of email addresses, check whether all email addresses have
‘@’ in it. Print the odd email out.*/

#include<stdio.h>
#include<string.h>
int main()
{
    char str[5][20];
    printf(" Enter Email addresses\n");
    int i,j,c;
    for(i=0;i<5;i++)
    {
        gets(str[i]);
    }
    printf("\n...........Odd emails..........\n");
    for(i=0;i<5;i++)
    {
        c=0;
        for(j=0;str[i][j]!='\0';j++)
        {
            if(str[i][j]==64)
            {
                //printf("%s\n",str[i]);
                //continue;
                c=1;
                //break;
            }
        }
            if(c==0)
            {
                printf("%s\n",str[i]);
            }
    }
    return 0;
}