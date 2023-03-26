/*Write a program to find the number of vowels in each of the 5 strings stored in two
dimensional arrays, taken from the user.*/
#include<stdio.h>
#include<string.h>

int main()

{
    char str[5][10];
    printf("enter stings for 2D string(6)\n");
    int i,j,count;
    for(i=0;i<5;i++)
    {
        gets(str[i]);
    }
    for(i=0;i<5;i++)
    {
        count=0;
        for(j=0;str[i][j]!='\0';j++)
        {
            if(str[i][j]=='a' || str[i][j]=='e' || str[i][j]=='i' || str[i][j]=='o' || str[i][j]=='u')
            {
                count++;
            }
        }
        printf("number of vowels in string %d is %d\n",i+1,count);
    }

    return 0;
    
}