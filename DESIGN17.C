#include<stdio.h>
void main()
{
 int i,j,k,n;
 clrscr();
 printf("\n enter a number");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
  for(j=1;j<=10;j++)
   {
    printf(" %d",j*i);
   }
   printf("\n");
  }
 getch();
}