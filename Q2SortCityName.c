/*Write a program to sort 10 city names stored in two dimensional arrays, taken from
the user*/

#include<stdio.h>
#include<string.h>

int main()
{
    char city[10][10],temp[10];
    printf("Enter 10 city names\n");
    int i,j;
    for(i=0;i<10;i++)
    {
        gets(city[i]);
    }
    for(i=0;i<10;i++)
    {
        for(j=i+1;j<10;j++)
        {
            if(strcmp(city[i],city[j])>0)
            {
                strcpy(temp,city[i]);
                strcpy(city[i],city[j]);
                strcpy(city[j],temp);
            }
        }
    }
    for(i=0;i<10;i++)
    {
        printf("%s\t",city[i]);
    }
    return 0;
}