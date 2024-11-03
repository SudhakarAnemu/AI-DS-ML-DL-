//js Stack pop, push, dis 

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

#define MAX 4
int stack[MAX], item; 
int ch, top=-1, count=0, status=0;

//Push function
void push(int stack[], int item){
    if(top == (MAX-1)){
        printf("\nSorry no place, Stack is Overflow");
    }
    else{
        stack[++top] = item;
    }//end if
}// end push function

//Pop function
int pop(int stack[]){
    int val;
    if(top == -1){
        printf("\nNo values to remove buddy, Underflow");
    }
    else{
        val = stack[top--];
        printf("\nValue is going to remove : %d", val);
    }//end else
    return val;
}// end pop

// Display all elements
void display(int stack[]){
    printf("\n------------- Top = %d, Elements of the Stack -- ", top);
    if(top == -1)
        printf("\nSorry - Stack is empty");
    else{
        for(int i=0;i<=top;i++){
            printf("\n-------\n| %d|", stack[i]);
        }
    }
}

//Main program
void main()
{
    //clrscr();
    do{
        printf("\n\n --------------- MAIN MENU ---------------");
        printf("\n1. PUSH (Insert) into the Stack");
        printf("\n2. POP (Delete) from the Stack");
        printf("\n3. Exit (End the Execution)");
        printf("\n\nPlease enter you choice ------------ : ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: 
                printf("\nEnter an element to be pushed: ");
                scanf("%d",&item);
                push(stack,item);
                display(stack);
            break;
            case 2:
                item=pop(stack);
                display(stack);
            break;
            case 3:
                exit(0);
            break;
            default:
                printf("\nPlease enter a proper choice(1/2/3)");
        }//end switch
    }while(ch!=3);
    getch();

}//end main