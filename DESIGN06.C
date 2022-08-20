#include<stdio.h>
void main()
{
 int i,j,n;
 clrscr();
 printf("\n enter a number");
 scanf("%d",&n);
 for(i=4;i>=1;i--)
 {
  for(j=i;j>=1;j--)
  {
   printf("%d",j);
  }
 printf("\n");
 }
getch();
}