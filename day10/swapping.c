#include<stdio.h>
#define z 50
void swap(int a,int b)
{
    a=90;
    b=100;
    printf("\n swpping: %d %d",a,b);
}
int main()
{
    int a=5,b=10;
    printf("%d %d",a,b);
    swap(a,b);
    printf("\n%d %d",a,b);
    return 0;
}