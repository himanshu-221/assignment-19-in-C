/*Write a program to read and display a 2D array of strings in C language.*/
#include<stdio.h>
#include<string.h>

int main()
{
    char str[5][10]={"abc","efg","hij","klm","nop"};
    int i,j;
    // printf("Enter 5 strings\n");
    // for(i=0;i<5;i++)
    // {
    //     gets(str[i]);
    // }
    for(i=0;i<5;i++)
    {
        for(j=0;str[i][j]!='\0';j++)
        {
            printf("%c",str[i][j]);
        }
        printf("\n");
    }
    // for(j=0;j<5;j++)
    //     {
    //         printf("%s\n",str[j]);
    //     }
        return 0;
}