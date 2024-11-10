// Arithimatic 

// Header files

#include<stdio.h>
#include<conio.h>
int a = 9;
int b =10;
void main()
{
    printf("\n ------------------------ Using Arithmetic operators ------------------------ ");
    printf("\n%d < %d = %d", a, b, a<b);
    printf("\n%d <= %d = %d", a, b, a<=b);
    printf("\n%d > %d = %d", a, b, a>b);
    printf("\n%d >= %d = %d", a, b, a>=b);
    printf("\n%d != %d = %d", a, b, a!=b);
    printf("\n%d == %d = %d", a, b, a==b);

    printf("\n ------------------------ Using Logical operators ------------------------ ");
    printf("\n%d < %d && %d > %d %d",a,b,a,b,a<b && a>b);
    printf("\n%d < %d || %d > %d %d",a,b,a,b,a<b || a>b);


}