//Author name: Bhavesh Gupta
//Question link: https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/bear-and-chocolate/
#include<stdio.h>
#include<string.h>
int main()
{
int t,i,n,j,k,a[2000];
char str[1000][1000];
scanf("%d",&t);
for(i=0;i<=t-1;i++)
{int count1=0,sum=0;
scanf("%d",&n);
for(j=0;j<=n-1;j++)
{int count=0;
scanf("%s",str[j]);
for(k=0;k<=n-1;k++)
{
if(str[j][k]=='#')
{
count++;
}
}
a[j]=count;
sum=sum+a[j];
}
if(sum%2)
{
count1=0;
printf("NO\n");
}
else
{
for(k=0;k<=n-1;k++)
{int count=0;
for(j=0;j<=n-1;j++)
{
if(str[j][k]=='#')
{
count++;
}
}
a[k+n]=count;
}
int sum1=0;
for(j=0;j<n-1;j++)
{
sum1=sum1+a[j];
if(sum1==sum/2)
{
count1++;
break;
}
}
sum1=0;
for(j=n;j<=2*n-1;j++)
{
sum1=sum1+a[j];
if(sum1==sum/2)
{
count1++;
break;
}
}
if(count1>0)
{
printf("YES\n");
}
else
{
printf("NO\n");
}
}
}
return 0;
}
