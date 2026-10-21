#include<stdio.h>

int main(){
    int marks1, marks2, marks3;

    printf("Enter marks 1 percent :");
    scanf("%d", &marks1);
    printf("Enter marks 2 percent :");
    scanf("%d", &marks2);
    printf("Enter marks 3 percent :");
    scanf("%d", &marks3);

    int avg = (marks1 + marks2 +marks3) / 3;

    if(marks1 >= 33 && marks2 >= 33 && marks3 >= 33 && avg >=40 ){
        printf("Avg marks: ",avg);
        printf("You passed !! Congoo !!!!");
    }
    else{
        printf("Avg marks: ",avg);
        printf("You passed !! Congoo !!!!");
    }
     return 0;
}