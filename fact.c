#include<stdio.h>
main()

{
  int i,fact=1,n;
  printf("\n enter a number= ");
  scanf("%d",&n);
  add();
  sub();
  for(i=1;i<=n;i++)
  {
    fact=fact*i;
  }
  printf("\n fact=%d",fact);
}
void add()
{
  int a,b,c;
  printf("\n enter values of a and b= ");
  scanf("%d%d",&a,&b);
  c=a+b;
  printf("\n addition of a and b= ",c);
}
void sub()
  {
  int a,b,c;
  printf("\n enter values of a and b= ");
  scanf("%d%d",&a,&b);
  c=a+b;
  printf("\n substraction of a and b= ",c);
}
