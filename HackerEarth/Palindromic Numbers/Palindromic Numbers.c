//Author Name: Bhavesh Gupta
//Question link: https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/palindromic-numbers-7/

#include <stdio.h>
int check(int);
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {

       int a,b,count=0,i;
        scanf("%d %d",&a,&b);

        for(i=a;i<=b;i++)
        {
            if(check(i)==1)
            count++;
        }
        printf("%d\n",count);
    }
    return 0;
}
int check(int n)
{
   int a[5],i=0,k=n,j;
    while(k!=0)
    {
        a[i]=k%10;
        k=k/10;
        i++;
    }
    for(j=0;j<i/2;j++)
    {
       if( a[j]!=a[i-1-j])
       return 0;
    }
    return 1;
}
