/*Given a list of words followed by two words, the task is to find the minimum distance
between the given two words in the list of words.
(Example : s = {“the”,”quick”,”brown”,”fox”,”quick”}
word1 = “the”, word2 = “fox”, OUTPUT : 2 )
*/
#include<stdio.h>
#include<string.h>
 int distance(char *word)
 {
    int count=0;
    
 }
int main()
{
    char str[6][10]={"cat", "is", "sitting", "on", "the", "table"};
    int i,ans=0;
    int d1=-1,d2=-1;
    char s1[10],s2[10];
    printf("Enter first word\n");
    gets(s1);
    printf("Enter second word\n");
    gets(s2);
    for(i=0;i<6;i++)
    {
        if(strcmp(str[i],s1)==0)
        {
            d1=i+1;
        }
        if(strcmp(str[i],s2)==0)
        {
            d2=i;
        }
        if(d1!= -1 && d2 != -1)
        ans=d2-d1;
    }
    printf("Maximum distance is %d\n",ans);

}