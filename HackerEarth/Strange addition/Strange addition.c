//Author name: Bhavesh Gupta
//Question link: https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/the-reversed-numbers/

#include<stdio.h>
int rev(int n);
int main()
{
  int t,tc=0;
   scanf("%d",&t);
   while(tc<t){
    int n,m,sum;
    scanf("%d %d",&n,&m);
    n=rev(n);
    m=rev(m);
    sum=n+m;
    sum=rev(sum);
    printf("%d\n",sum);
    tc++;
   }
    return 0;
}
int rev(int n)
{
   int k,r=0;
    while(n!=0)
    {
        k=n%10;
        r=r*10 +k;
        n=n/10;
    }
    return r;
}
