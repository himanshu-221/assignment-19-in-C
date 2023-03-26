/*Write a program to search a string in the list of strings.
*/
#include<stdio.h>
#include<string.h>

int main()
{
    char str[5][10]={"roshni","rohan","ajay","palwala","sonipat"};
    int i,j=0;
    char se[10];
    printf("Enter string to search\n");
    gets(se);
    for(i=0;i<5;i++)
    {
        if(strcmp(str[i],se)==0)
        {
            printf("string %d matched with %s\n",i+1,str[i]);
            j=1;
        }
    }
    if(j==0)
    {
        printf("string not found");
    }
    return 0;
}