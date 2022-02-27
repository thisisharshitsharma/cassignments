// program to perform the aditon,dtraction,multiplication and division of two numbers
#include<stdio.h>
int main(){
    int a,b,sum,sub,div,mul;
    printf("Enter the two numbers\n");
    scanf("%d%d",&a,&b);
    sum=a+b;
    sub=a-b;
    div=a/b;
    mul=a*b;
    printf("The sum of the two numbers is %d\n",sum);
    printf("The difference of the two numbers is %d\n",sub);
    printf("The product of the two numbers is %d\n",mul);
    printf("The division of the two numbers is %d\n",div);

    
}