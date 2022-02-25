#include<stdio.h>
#include<stdlib.h>
int main(){
    struct customer{
        int Accountno;
        char name[40];
        int balance;
    };
    struct customer customers[100];
    //write a program to input the details of the 10 customers
    int i;
    for(i=0;i<10;i++){
        printf("Enter the details of customer %d\n",i+1);
        printf("Enter the account number\n");
        scanf("%d",&customers[i].Accountno);
        printf("Enter the name\n");
        scanf("%s",customers[i].name);
        printf("Enter the balance\n");
        scanf("%d",&customers[i].balance);
    }
    //program to print account number and name of customers whose balance is less than 1000
    printf("Account number and name of customers whose balance is less than 1000\n");
    for(i=0;i<10;i++){
        if(customers[i].balance<1000){
            printf("%d %s\n",customers[i].Accountno,customers[i].name);
        }
    }   
    //generate withdrawl and deposit functionality for the customers 
    
    int choice,accountno,amount;
    while(1){
        printf("Enter the account number\n");
        scanf("%d",&accountno);
        //choose you want to withdrawl or deposit the amount using switch case

        printf("Enter 1 to withdrawl and 2 to deposit and 3 to exit \n");
        scanf("%d",&choice);
        for(i=0;i<10;i++){
            if(customers[i].Accountno==accountno){
                 switch(choice){
                    case 1:
                        printf("Enter the amount to withdrawl\n");
                        scanf("%d",&amount);
                        if(amount<=customers[i].balance){
                            customers[i].balance=customers[i].balance-amount;
                            printf("The amount withdrawl is %d\n",amount);
                            printf("The balance is %d\n",customers[i].balance);
                        }
                        else{
                            printf("Insufficient balance\n");
                        }
                        break;
                    case 2:
                        printf("Enter the amount to deposit\n");
                        scanf("%d",&amount);
                        customers[i].balance=customers[i].balance+amount;
                        printf("The amount deposit is %d\n",amount);
                        printf("The balance is %d\n",customers[i].balance);
                        break;
                    case 3:
                        exit(0);
                        break;
                    default:
                        printf("Invalid choice\n");
                        break;
                        }
            }
        }
       
        }
    return 0;
}