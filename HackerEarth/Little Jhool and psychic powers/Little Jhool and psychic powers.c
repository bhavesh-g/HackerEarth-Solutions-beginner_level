//Author Name: Bhavesh Gupta
//Question link: https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/psychic-powers/

#include <stdio.h>
#include <string.h>
int main()
{
char s[101];
char x[] = "000000";
char y[] = "111111";
int l,i,flag=0;
scanf("%s",s);
l = strlen(s);
if(strstr(s,x)!= NULL)
{
printf("Sorry, sorry!");
}
else if(strstr(s,y)!= NULL)
{
printf("Sorry, sorry!");
}
else
{
printf("Good luck!");
}
return 0;
}
