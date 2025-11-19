#include <stdio.h>

int main(){
    int num1, num2;
    //input from user
    printf("enter first number");
    scanf("%d", &num1);

    printf("enter second number");
    scanf("%d", &num2);

    //arithmetic operation
    printf("addition; %d\n", num1+num2);
    printf("subtraction; %d\n", num1-num2);
    printf("multiplication; %d\n", num1*num2);

    //for division and modulus
    if(num2 != 0){
        printf("division; %d\n", num1/num2);
        printf("modulus; %d\n", num1%num2);
    }
    //if user inputs a zero as number 2
    else{
        printf("divsion: Math error\n");
        printf("modulus: Math error\n");
    }

}
