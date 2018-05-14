//Author: Bhavesh gupta
//Question Link: https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/inverse-list/

#include <stdio.h>

int main()
{
   int t;
   scanf("%d",&t);
   while(t--)
   {
       int n,i,k,j,flag=0;
       scanf("%d",&n);
       int a[n],b[n];
       for(i=0;i<n;i++)
       {
           scanf("%d",&a[i]);
       }
        for(i=0;i<n;i++)
       {
           k=a[i];
           j=a[k-1];
           b[j-1]=a[i];
       }
        for(i=0;i<n;i++)
       {
           if(a[i]!=b[i]){
               flag=1;
           break;}
       }
       if(flag==1)
       {printf("not inverse\n");}
       else{
           printf("inverse\n");
       }
       
   }
    return 0;
}
