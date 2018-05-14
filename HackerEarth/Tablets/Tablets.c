//Author Name: Bhavesh Gupta
//Question link: https://www.hackerearth.com/practice/algorithms/dynamic-programming/introduction-to-dynamic-programming-1/practice-problems/algorithm/tablets/

#include <stdio.h>

int main()
{
    int n,i,flag,t,count,z=1;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
    scanf("%d",&a[i]);}
    flag=1;
    while(flag==1)
    {
        flag=0;
        for(i=0;i<n-1;i++)
        {
            if(a[i]<a[i+1])
            {
                flag=1;
                t=a[i];
                a[i]=a[i+1];
                a[i+1]=t;
            }
        }
    }
    for(i=0;i<n;i++)
    {
       if(i==0){
           count=1;
       }
       else{
           if(a[i]==a[i-1]){
           count++;
               z++;
           }
           else {
               count=count+z;
           }
       }
    }
    printf("%d",count);
}
