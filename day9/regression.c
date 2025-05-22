#include<stdio.h>
void numbers(int x)
{
    if (x==5) return;
    printf("%d",x);
    numbers(x-1);
}
void numbersdesc(int x)
{
    if(x==0) return;
    numbersdesc(x-1);
    printf("%d",x);
}
int main()
{
    numbersdec(10);
}
void even(int x,int y)
{
    if(x>y)return;
    printf("%d",x);
    even(x+2,y);
} 
int main()
{
    even(30,40)
}