//write  the program to  the smallest  element of the array
#include <stdio.h>
int main() {
    int n, i, smallest;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    int arr[n]; // Declare an array of size n
    
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]); // Read elements into the array
    }
    
    smallest = arr[0]; // Initialize smallest to the first element of the array
    
    for(i = 1; i < n; i++) {
        if(arr[i] < smallest) {
            smallest = arr[i]; // Update smallest if a smaller element is found
        }
    }
    
    printf("The smallest element in the array is: %d\n", smallest); // Output the smallest element

    //this is version 4 of smallest element 
}