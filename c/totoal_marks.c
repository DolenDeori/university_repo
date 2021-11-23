#include<stdio.h>

int main(){
    float marks1 , marks2 , marks3 , marks4 , marks5;
    printf("Enter the 1st subjects marks: ");
    scanf("%f" , &marks1);
    printf("Enter the 2st subjects marks: ");
    scanf("%f" , &marks2);
    printf("Enter the 3st subjects marks: ");
    scanf("%f" , &marks3);
    printf("Enter the 4st subjects marks: ");
    scanf("%f" , &marks4);
    printf("Enter the 5st subjects marks: ");
    scanf("%f" , &marks5);

    float total_marks = (marks1 + marks2 + marks3 + marks4 + marks5)/500*100;
    if (total_marks <= 30){
        printf("Student is fail");
    }
    else{
        printf("The percentage of the student is: %0.3f" , total_marks);
    }


}