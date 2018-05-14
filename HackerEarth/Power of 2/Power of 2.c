#include <stdio.h>

int main()
{

  int t,n,count=0;
  scanf("%d",&t);
  while(t--)
  {
      scanf("%d",&n);
  
      if((n&(n-1))==0){
      count++;

      }
  }
  printf("%d",count);
    return 0;
}
