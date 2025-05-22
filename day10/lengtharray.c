#include<stdio.h>
int main()
{
   int s[]={1,2,3,4,5,6};
   int *str=s;
   int n=6;
   int c=0;
   for(int i=0;i<=5;i++)
   {
       c++;
       str++;
   }
   printf("%d",c);
}