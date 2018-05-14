#include <stdio.h>

int main()
{
   int n,i,z,max=0;
   scanf("%d",&n);
   int a[n],bmax[100000],bmin[100000];
   for(i=0;i<100001;i++)
   {
       bmax[i]=-1;
        bmin[i]=-1;
   }
   for(i=0;i<n;i++)
   {
      scanf("%d",&a[i]);

    if(bmax[a[i]]!=-1)
    {
        bmax[a[i]]=i;
    }
     if(bmin[a[i]]==-1)
    {
        bmin[a[i]]=i;
        bmax[a[i]]=i;

    }
   }

   for(i=0;i<100001;i++)
   {
       if(bmin[i]!=-1&&bmax[i]!=-1)
       {
           z=bmax[i]-bmin[i];
           if(z>max)
           {
               max=z;
           }
       }
   }
   printf("\n%d",max+1);
    return 0;
}
