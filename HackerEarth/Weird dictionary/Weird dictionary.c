//Author: Bhavesh Gupta
//Question Link: https://www.hackerearth.com/problem/algorithm/weird-dictionary-07d234be/
//Note: Last two test cases won't pass with this solution, but you can optimize it as after n=14, start from 2^26 minus, like for 'z'.
//No Problem will occur with same approach in Python 3.

#include <stdio.h>
#include<math.h>
int main()
{
  unsigned long long l,i=0,n,k,sum,z=0,flag=0;
   scanf("%lld",&n);
   char s[n];
   scanf("%s",s);
   k=n;
   while(k--)
   {
      flag=1;
      
       sum=((s[i]-96)-1)*(pow(26,k));
       
       z=z+sum;
       i++;
   }
   if(flag==1)
   printf("%lld",z+1);
   else{
       printf("%d\n",s[0]-96);
   }
   
    return 0;
}
