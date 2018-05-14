//Author name: Bhavesh Gupta
//Question link: https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/bear-and-medals/

#include<stdio.h>
int main()
{
int t,i,n,j,a[1000],b[1000],c[1000],k,max;
scanf("%d",&t);
for(i=0;i<=t-1;i++)
{int a1=0,b1=0,c1=0;
scanf("%d",&n);
for(j=0;j<=n-1;j++)
{
scanf("%d %d %d",&a[j],&b[j],&c[j]);
a1=a1+a[j];
b1=b1+b[j];
c1=c1+c[j];
}
for(j=0;j<=n-1;j++)
{
{
for(k=0;k<=n-1;k++)
{
a[k]=a[k]+b[k]+c[k];
}
max=a[0];
for(k=1;k<=n-1;k++)
{
if(max<a[k])
{
max=a[k];
}
}
break;
}
}
int f=600000;
while(1)
{
if(f==max || f==a1 || f==b1 || f==c1)
{
printf("%d\n",f);
break;
}
f--;
}
}
return 0;
}
