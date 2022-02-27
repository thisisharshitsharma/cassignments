#include<stdio.h>
int main(){
    float area,radius,circumference;
    printf("Enter the radius of the circle");
    scanf("%f",&radius);
    area = 3.14*radius*radius;
    circumference = 3.14*radius;
    printf("The area of the circle is: %f\n", area);
    printf("The circumference of the circle is: %f", circumference);
}