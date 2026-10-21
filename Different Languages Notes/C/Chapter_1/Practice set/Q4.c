#include<stdio.h>

int main(){
    float principal, interest_rate, time, simple_interest;
    printf("Enter the value of the principal amount in decimal:\n");
    scanf("%f", &principal);
    printf("Enter the value of the interest rate in decimal:\n");
    scanf("%f", &interest_rate);
    printf("Enter the time for which the money is invested in decimal:\n");
    scanf("%f", &time);
    simple_interest = principal * interest_rate * time ;
    printf("The simple interest for the principal amount %.2f with interest %.2f for the time for which invested %.2f is %.2f", principal, interest_rate, time, simple_interest);
     return 0;
}