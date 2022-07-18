#include<stdio.h>
#include<stdlib.h>
int main()
{
int a,b,c,d;
system("");
 a=b=c=4;
 d=a++ != ++b && ++b <= c++;
 printf("a=%d, b=%d, c=%d, d=%d", a, b, c, d);
 getch();
 }