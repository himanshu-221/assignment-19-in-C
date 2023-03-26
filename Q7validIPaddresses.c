/*From the list of IP addresses, check whether all ip addresses are valid.
*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
int check_digit(char *str)
{
    int i;
   while(*str)
   {
    if(!isdigit(*str))
    {
        return 0;
    }
    str++;
   }
    return 1;
}
int valid_ip(char *str)
{
    if(str==NULL)
    return 0;
    int dot=0,flag;
    char *ptr;
    ptr=strtok(str,".");
    if(ptr==NULL)
    {
        return 0;
    }
    int i=0;
    while(ptr)
    {
        if(ptr[i]=='0') // because if any token of ip address start with 0, then it is not a valid ip address.
        return 0;
        if(!check_digit(ptr))
        {
            return 0;
        }
        flag=atoi(ptr);
        if(flag>=0 && flag<=255)
        {
            ptr=strtok(NULL,".");
        }
        else{
            return 0;
        }
        if(ptr!=NULL)
        {
            dot++;
        }
    }
    if(dot!=3)
    {
        return 0;
    }
    else
    return 1;
}

int main()
{
    char str[5][20]={"1a3.45.67.98","34.56.098.32","213.4.45.76","3457.53.","234.78.90.76"};
    // printf("Enter five IP addresses\n");
    //char str[20]="25.45.677.89";
    // char dot[]=".";
    // char *token=strtok(str,dot);
    // int i,j,k=0,vip,count;
        // while(token!='\0')
        // {
        //     //printf("%s\n",token);
        //     vip=atoi(token);
        //     if(vip>=0 && vip<=255)
        //     {
        //         token=strtok(NULL,dot);
        //     }
        //     if(token != NULL)
        //     k++;
        // if(k==3)
        // {
        //     printf("Valid IP \n");
        // }
        // }
    //}
    int i;
    for(i=0;i<5;i++)
    {
        valid_ip(str[i]) ? printf("valid ip\n") : printf("not valid\n");
    }
    return 0;
}