// scanf

// Header files

#include<stdio.h>
#include<conio.h>
int age;
char myChar;
void main()
{

    printf("\nAre you Male of Female (m/f) : ");
    myChar = getche();
    printf("\nYour gender is : %c", myChar);

    

    printf("\nHey whats your age buddy : ");
    scanf("%d",&age);
    printf("\nThanks, your age is %d ",age);



}