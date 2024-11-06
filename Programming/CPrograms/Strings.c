//js - Replace of Strings

#include <stdio.h>

void main(){
    char Mstr[100], Pat[100], Rep[100], ans[100];
    int i, j, c, m, k, flag=0, sno=1;
    printf("\nEnter Main String : ");
    gets(Mstr);
    printf("\nEnter Pattern String : ");
    gets(Pat);
    printf("\nEnter Replace String : ");
    gets(Rep);
    printf("\nFirst time - Strings : \tMain : --%s--, \tRep : --%s--, \tPat : --%s--, \tAns : --%s--",Mstr, Pat, Rep, ans);
    //Actual logic
    i = j = m = c = 0;
    while(Mstr[c]!='\0'){
        //printf("\n%d char of Mstr : %c", c+1, Mstr[c]);
        //m++;
        //Checking for matching
        printf("\nS.No : %d - Comparing Mstr[m] == Pat[i] - %c %c", sno++, Mstr[m], Pat[i]);
        if(Mstr[m] == Pat[i]){
            printf("\nif 1 - Same chars -  Chars Mstr[m] : %c, Pat[i] : %c, m:%d, i%d ", Mstr[m],Pat[i], m, i);
            i++;
            m++;
            flag = 1;
            if(Pat[i] == '\0'){
                //Copy replace string in ans string. 
                for(k=0; Rep[k]!='\0';k++, j++){
                    ans[j] = Rep[k];
                    printf("\nfor - Chars ans[j] : %c, Rep[k] : %c, j:%d, k%d ", ans[j],Rep[k],j,k);
                    printf("\nRepetition : %d - Strings : \tMain : --%s--, \tRep : --%s--, \tPat : --%s--, \tAns : --%s--",k+1, Mstr, Pat, Rep, ans);
                }
                i=0;
                c=m;
            }//end if
        }// end if
        else { //mismatch
            ans[j] = Mstr[c];
            printf("\nelse - Chars ans[j] : %c, Rep[k] : %c, j-%d, c-%d ", ans[j],Mstr[c], j, c);
            printf("\nelse - Repetition : %d - Strings : \tMain : --%s--, \tRep : --%s--, \tPat : --%s--, \tAns : --%s--",j+1, Mstr, Pat, Rep, ans);
            j++;
            c++;
            m = c;
            i = 0;
            printf("\n Value of m : %d, c : %d", m, c);
        }// else end
    }// end while 
    if(flag == 0) {
        printf("\n------------------- Pattern does not found!!!!! -------------------");
    }
    else {
        ans[j] = '\0';
        printf("\n---------------- Final Result : Success Pattern was found");
        printf("\nStrings : \nMain : --%s--, \nRep : --%s--, \nPat : --%s--, \nAns : --%s--",Mstr, Pat, Rep, ans);
    }

}//end main