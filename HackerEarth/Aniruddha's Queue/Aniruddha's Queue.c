//Author Name: Bhavesh Gupta
//Question link: https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/aniruddhas-queue-4/

#include<stdio.h>
int arr[100000];
long long int m,sum=0;
int main()
{
int t,i,j,n;
scanf("%d",&t);
for(i=0;i<=t-1;i++)
{sum=0;
scanf("%d",&n);
for(j=0;j<=n-1;j++)
{
scanf("%d",&arr[j]);
sum=sum+arr[j];
}
scanf("%lld",&m);
m=m%sum;
if(m==0)
{
m=sum;
}
for(j=0;j<=n-1;j++)
{
m-=arr[j];
if(m<=0)
{
printf("%d\n",j+1);
break;
}
if(j==n-1)
{
j=-1;
}
}
}
return 0;
}
