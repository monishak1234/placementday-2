#include<stdio.h>
int main()
{
    int a=7;
    int *p,**p1,***p2,****p3;
    p=&a;
    p1=&p;
    p2=&p1;
    p3=&p2;
    printf("%d %d %d %d",p,p1,p2,p3);
}
#include<stdio.h>
int main()
{
    int a=7;
    int *p;

    printf("%d %d %d %d",a,*p,p,&a);
    *p=8;
    printf("\n%d %d %d %d",a,*p,p,&a);
}
#include<stdio.h>
int main()
{
    int a=7;
    int *p,*q;
   p=&a;
   q=p;
    *q=1;
   printf("%d",a);
}