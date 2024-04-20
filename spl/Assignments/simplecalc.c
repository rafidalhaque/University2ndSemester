/*
Assignment: Write A Program in C to calculate result of addition, 
            subtraction, multiplication, division and modulas operation of 
            two integer values
*/
// By, Rafid Al Haque (315232013)

#include <stdio.h>

int main(){
    int a= 20,b= 30;

    printf("Addition of %d and %d: %d\n", a , b, a+b);
    printf("Subtraction of %d and %d: %d\n", b, a, b-a);
    printf("Multiplication of %d and %d: %d\n", a, b, a*b);
    printf("Division of %d and %d: %d\n", b, a, b/a);
    printf("Modulas operation of %d and %d: %d\n", b, a, b%a);

    return 0;  
}

/*Output Printed On Next Page*/