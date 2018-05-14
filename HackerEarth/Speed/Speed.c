//Author Name: Bhavesh Gupta
//Question link: https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/speed-7/

#include <stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long n,count=0,i;
        scanf("%ld",&n);
        long a[n];
        for(i=0;i<n;i++)
        {
            scanf("%ld",&a[i]);
        }
       for(i=1;i<n;i++)
       {
           if(a[i]<=a[i-1]){
           count++;
           }
           else{
               a[i]=a[i-1];
           }
       }
       printf("%ld\n",count+1);
    }
    return 0;
}
