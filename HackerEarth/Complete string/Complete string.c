//Author name: Bhavesh Gupta
//Question link: https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/complete-string-4/

#include <stdio.h>
#include <string.h>
int main()
{

   int n;
   scanf("%d",&n);
   while(n--)
   {
      int l,i,flag=0,a[26]={0};
       char s[100];
       scanf("%s",s);
       l=strlen(s);
       if(l>=26){
       for(i=0;i<l;i++)
       {
           a[s[i]-97]++;
       }
        for(i=0;i<26;i++)
        {
            if(a[i]==0)
            {
                printf("NO\n");
                flag=1;
                break;
            }
        }
        if(flag!=1)
        printf("YES\n");}
        else{
            printf("NO\n");
        }
   }
    return 0;
}
