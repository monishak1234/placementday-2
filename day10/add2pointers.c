#include<stdio.h>
void swap(int*a,int *b)
{
   int t =*a;
   *a=*b;
   *b=t;
}
int main()
{
    int a=5,b=10;
    int *p=&a, *q=&b;
    int sum=*p+*q;
    printf("%d",*p+*q);
}