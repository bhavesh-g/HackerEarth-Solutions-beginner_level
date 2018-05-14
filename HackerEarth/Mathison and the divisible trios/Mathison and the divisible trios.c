// Author: Bhavesh Gupta
//Question Link: https://www.hackerearth.com/practice/data-structures/hash-tables/basics-of-hash-tables/practice-problems/algorithm/mathison-and-the-divisible-trio-a0a169b0/
#include <stdio.h>

int main()
{
long long n,m,i,j,k,sum,count=0;
scanf("%lld %lld",&n,&m);
int a[n];
for(i=0;i<n;i++)
{
    scanf("%lld",&a[i]);
}
for(i=0;i<n;i++)
{
    for(j=i+1;j<n;j++)
    {
        for(k=j+1;k<n;k++)
        {
            sum=a[i]+a[j]+a[k];
            if(sum!=0){
            if(sum%m==0){
                count++;
            }}
            
        }
    }
}
printf("%lld",count);
return 0;
}
