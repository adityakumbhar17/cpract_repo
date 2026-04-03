//write the code for fide the avrage of three numbers
#include <stdio.h>
int main() {    
    int a, b, c; //variables to store the input numbers
    float average; //variable to store the average of the three numbers
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c); //scanning the input numbers from the user
    average = (a + b + c) / 3.0; // Calculate the average of a, b and c
    printf("Average = %.2f\n", average); // Output the average with 2 decimal places
    return 0; 
    //this is version 1 
}