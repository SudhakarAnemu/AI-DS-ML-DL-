//JS 
// gcc -o js js.c -> compile the program
// ./js --> execute the program. 

#include<stdio.h>
#include<math.h>

void main()
{
    int a;
    printf("\nEnter a number : "); 
    scanf("%d", &a);
    for(int i=0; i<5; i++)
    {
        printf("JS ma - harahara\nGiven number is %d", a);
    }
    
}