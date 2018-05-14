//Author Name: Bhavesh Gupta
//Question link: https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/the-best-internet-browser-3/

#include <stdio.h>
#include<string.h>
int main()
{
  int t;
  scanf("%d",&t);
  while(t--){
   int l,i,c=0,b1;
   char s[200];
   scanf("%s",s);
   l=strlen(s);
   for(i=4;i<l-4;i++)
   {
       if(s[i]!='a'&&s[i]!='e'&&s[i]!='i'&&s[i]!='o'&&s[i]!='u')
       {
           c++;
       }
   }
   b1=c + 4;
   printf("%d/%d\n",b1,l);
  }
    return 0;
}
