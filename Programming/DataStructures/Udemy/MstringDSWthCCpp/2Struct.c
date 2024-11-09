//js - structure 
#include <stdio.h>
#include <conio.h>

struct Rectangel{
    int len;
    int brdth;
};

int main() {
    struct Rectangel r1;
    r1.len = 20;
    r1.brdth = 30;
    printf("\nLength : %d, Breadth : %d, Area : %d", r1.len, r1.brdth, r1.len*r1.brdth);
    return 0;
}//main end