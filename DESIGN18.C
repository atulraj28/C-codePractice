#include<stdio.h>
void main()
{
 int i,j,k,n,p;
 clrscr();
 printf("\n enter a number");
 scanf("%d",&p);
 printf("\n enter another number");
 scanf("%d",&n);
 for(i=1;i<=10;i++)
 {
  for(j=p;j<=n;j++)
   {
    printf(" %d",j*i);
   }
   printf("\n");
  }
 getch();
}