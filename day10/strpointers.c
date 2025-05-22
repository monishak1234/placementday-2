#include<stdio.h>
int main()
{
    char s[]="HappyCoading";
    char *str=&s;
    int c=0;
    while(*str !='C'){
        c++;
        str++;
    }
    printf("%d",c);
}
