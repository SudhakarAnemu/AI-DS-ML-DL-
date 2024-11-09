//Arrays

//gcc -o 1Arrays 1Arrays.c --> How to run this c program

#include <stdio.h>
#include <conio.h>

void main(){

    int a[6];
    printf("\nHello Enter 5 numbers at Array \n ");
    for(int i=0; i<5; i++){
        printf("\nEnter %d th number : ", i+1);
        scanf("%d", &a[i]);
    }//end for
    printf("\nAll numbers and their address : ");
    for(int i=0; i<6; i++){
        printf("\n Number : %d, Address : %d", a[i], &a[i]);
    }//end for
    printf("\nCheck the last element since we did not keep a number");
}//end main