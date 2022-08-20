#include<stdio.h>
void main()
{
int i,j,n;
printf("\n enter a number");
scanf("%d",&n);
clrscr();
for(i=1;i<=n;i++)
{
 for(j=i;j>=1;j--)
 {
  printf("%d",j);
 }
printf("\n");
}
getch();
}