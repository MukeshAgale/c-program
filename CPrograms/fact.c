#include<stdio.h>
main()
  
{
  int i,fact=1,n;
  printf("\n enter a number= ");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    fact=fact*i;
  }
  printf("\n fact=%d",fact);
}
