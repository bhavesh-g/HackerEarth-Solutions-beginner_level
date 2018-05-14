//Author name: Bhavesh Gupta
//Question link: https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/final-destination-cakewalk/
#include <stdio.h>
int main()
{
    char s[100000];
    scanf("%s",s);
   signed int i=0,l,countu=0,countd=0,countr=0,countl=0;
    while(s[i]!='\0')
    {
        if(s[i]=='L')
        {

            countl++;
        }
        else if(s[i]=='R')
        {

            countr++;
        }
        else if(s[i]=='U')
        {

            countu++;
        }
        else if(s[i]=='D')
        {

            countd++;
        }
        i++;
    }
    printf("%d %d",countr-countl,countu-countd);
    return 0;
}
