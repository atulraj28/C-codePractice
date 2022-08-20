#include<stdio.h>
void main()
{
 int i,j,n;
 clrscr();
 printf("\n enter the number of line=");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
  for(j=i;j<=n;j++)
  {
   if(j%2==0)
   {
   printf("0");
   }
   else
   {
   printf("1");
   }
  }
 printf("\n");
 }
 getch();
}
