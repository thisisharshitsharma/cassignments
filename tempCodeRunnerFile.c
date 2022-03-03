#include <stdio.h>
int main(){
    //a student marks in 5 subjects and calculate the average and using if else ladder give grades
    int marks[5],i,total=0,a;
    for(i=0;i<5;i++){
        printf("Enter the marks of subject %d: ",i+1);
        scanf("%d",&marks[i]);
        total = total + marks[i];
    }
    a = total/5;
    if(a<50 && a>=0){
        printf("Fail");    }
    else if(a>=50 && a<60) printf("Grade C");
    else if(a>=60 && a<70){
        printf("Grade B");
    }
    else if(a>=70 && a<80){
        printf("Grade B+");
    }
    else if(a>=80 && a<90){
        printf("Grade A");
    }
    else if(a>=90 && a<=100){
        printf("Grade A+");
    }
    else{
        printf("Invalid");
    }
    return 0;

}