//write the code for fide the avrage of three numbers
#include <stdio.h>
int main() {    
    int a, b, c; 
    //print this number  add 10 in each numer and print that number
    printf("Enter three numbers: ");    
    scanf("%d %d %d", &a, &b, &c); //sanning the input numbers from the user
    a=a+10; // Add 10 to a
    b=b+10; // Add 10 to b
    c=c+10; // Add 10 to c
    printf("Numbers after adding 10: %d %d %d\n", a, b, c); // Output the numbers after adding 10
    int average = (a + b + c) / 3; // Calculate the average
    printf("Average = %d\n", average); // Output the average

    //this is version 3
}