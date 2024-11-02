//js - Calender

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define WEEK 2

//Structure to represent a Day 
typedef struct{
    char *dayName; //Name of the day
    int date; //Date of the day
    char *activity;  //Activity of the day
}Day;

//Declaration of Functions
Day *createCalender(); //Day function. 
void readData(Day *); //Read calender data
void dispCalender(Day *); //Display calender data

int main()
{
    printf("\n********************* Start of the Program *********************");
    //Create the calender : Declare a clander variable. 
    Day *weeklyCalender = createCalender(); 

    //Read data for the Calender
    readData(weeklyCalender); 

    //Display data of the week
    dispCalender(weeklyCalender); 

    //Free allocated memory
    printf("\nClearing Memory (Freeing up memory)");
    for(int i=0; i<WEEK; i++){
        free(weeklyCalender[i].dayName);
        free(weeklyCalender[i].activity);
    }
    free(weeklyCalender);
    printf("\n********************* End for the Program *********************");

    return 0;
}

//Createcalender - Allocate memory

Day *createCalender()
{
    printf("\nSize of Day-structure : %d - ", sizeof(Day));
    Day *calender = (Day *)malloc(WEEK * sizeof(Day)); 
    printf("\nSize of calender structure : %d", sizeof(*calender));
    printf("\nCalender in hexa : %x\nCalender in Int : %d", calender, calender);
    if(calender == NULL){
        printf("\nMemory allocation was failed so we are Exiting");
        exit(0);
    }
    else{
        printf("\nMemory was successfully allocated for Calender");
    }
    //Allocate null values for all Calender values
    for(int i=0; i<WEEK; i++){
        calender[i].dayName=NULL;
        calender[i].date=0;
        calender[i].activity=NULL;
    }
    printf("\nSize of calender structure : %d", sizeof(*calender));
    printf("\nCalender in hexa : %x\nCalender in Int : %d", calender, calender);
    //Display contents of the calender
    for(int i=0; i<WEEK; i++){
        printf("\n %d day data : %s %d %s", i+1,calender[i].dayName, calender[i].date, calender[i].activity);
    }
    return calender;

}// end createCalender

void readData(Day *calender)
{
    char nameBuffer[50], activityBuffer[100];

    for(int i=0; i<WEEK; i++){
        printf("\nEnter details for day %d : ", i+1);
        printf("Day Name : ");
        scanf("%s", nameBuffer);
        calender[i].dayName = strdup(nameBuffer); 
        //printf("\nnameBuffer:--%s--, calender[i].dayName : --%s--", nameBuffer, calender[i].dayName);
        printf("\nDate : "); 
        scanf("%d", &calender[i].date);
        //printf("\n Date :--%d--, calender[i].date : --%d--", calender[i].date,calender[i].date);
        printf("\nActivity : ");
        scanf(" %[^\n]", activityBuffer);
        calender[i].activity=strdup(activityBuffer);
        //printf("\n ActivityBuffer :--%s--, calender[i].activityBuffer : --%s--", activityBuffer,calender[i].activity);
        
    }//for end
}

void dispCalender(Day *calender)
{
    printf("\n*****************Weekly Activity Details*****************\n");
    for (int i = 0; i < WEEK; i++)
    {
        printf("\n---------------------Details of Day %d:\n", i + 1);
        printf(" Day Name: %s\n", calender[i].dayName);
        printf(" Date: %d\n", calender[i].date);
        printf(" Activity: %s\n\n", calender[i].activity);
    }// for end
}// fun end