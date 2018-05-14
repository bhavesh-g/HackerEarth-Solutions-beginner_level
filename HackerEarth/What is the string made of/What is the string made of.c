//Author name: Bhavesh Gupta
//Question Link: https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/what-is-the-string-made-of-2/

#include <stdio.h>
int check(char c);
int main()
{
 int i,k,sum=0,l;
  char s[100];
  scanf("%s",s);
  l=strlen(s);
  for(i=0;i<l;i++)
  {
      k=check(s[i]);
      sum=sum+k;
  }
  printf("%d",sum);
    return 0;
}
int check(char c)
{
    if(c=='2'||c=='3'||c=='5')
    return 5;
    else if(c=='6'||c=='9'||c=='0')
    return 6;
    else if(c=='4')
    return 4;
    else if(c=='7')
    return 3;
    else if(c=='8')
    return 7;
    else if(c=='1')
    return 2;
}