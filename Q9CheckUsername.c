/* Write a program that asks the user to enter a username. If the username entered is
one of the names in the list then the user is allowed to calculate the factorial of a
number. Otherwise, an error message is displayed
*/

#include<stdio.h>
#include<string.h>

int main()
{
    char user[5][10]={"rahul","alok","sunil","dilshad","varsha"};
    int i,j,num,fact=1;
    char name[10];
    printf("Enter a username\n");
    gets(name);
    for(i=0;i<5;i++)
    {
        if(strcmp(user[i],name)==0)
        {
            printf("Enter number to calculate factorial\n");
            scanf("%d",&num);
            for(i=1;i<=num;i++)
            {
                fact*=i;
            }
            printf("Factorial of %d is %d\n",num,fact);
            j=1;
            break;
        }
    }
    if(j!=1)
    printf("please enter a valid username\n");
    
    return 0;
}