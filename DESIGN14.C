#include<stdio.h>
void main()
{
 int i,j,k,n;
 clrscr();
 printf("\n enter a number");
 scanf("%d",&n);
  for(i=n;i>=1;i--)
 {
  for(j=1;j<=i;j++)
  {
   printf("%d",j);
  }
  for(k=1;k<=n-i;k++)
  {
   printf("%d",k);
  }
  printf("\n");
  }
  getch();
 }