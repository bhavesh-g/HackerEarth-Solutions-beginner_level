// Author : Bhavesh Gupta
//Question Link: https://www.hackerearth.com/problem/algorithm/-3-b636cbc4/
#include <stdio.h>
int digit(int);
int main()
{
   int t;
   scanf("%d",&t);
   while(t--)
   {
     int n,z,d,i,k,f=0;
     scanf("%d",&n);
     z=n+1;
     while(z--)
     {
       f=0;
        k=z;
         d=digit(k);
         int a[d];
         for(i=0;i<d;i++)
         {
             a[i]=k%10;
             k=k/10;
         }
         for(i=0;i<d-1;i++)
         {
             if(a[i]>=a[i+1])
             continue;
             else{
                 f=1;
                 break;
             }
         }
         if(f==1)
         continue;
         else{
             printf("%d\n",z);
             break;
         }
     }
             
           
   }
   
    return 0;
}
int digit(int x)
{
   int i=0;
   if(x==0){return 1;}
    while(x!=0)
    {
        i++;
        x=x/10;
    }
    return i;
}
