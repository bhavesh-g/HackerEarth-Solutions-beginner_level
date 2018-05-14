#include <stdio.h>

int main()
{
 
 int t;
 scanf("%d",&t);
 while(t--){
  int n,ans,count=0;
  scanf("%d",&n);
 while(n!=1)
 {
     if(n%2==0)
     n=n/2;
     else{
         n=(3*n)+1;
     }
     count++;
 }
 printf("%d\n",count);}
  return 0;
}