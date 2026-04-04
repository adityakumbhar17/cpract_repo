//write  the program to  the largest element of the array
#include <stdio.h> 
int main() {    
    int n, i; 
    printf("Enter the number of elements in the array: ");    
    scanf("%d", &n); // Scanning the number of elements in the array
    int arr[n]; // Declare an array of size n
    printf("Enter %d numbers: ", n);    
    for(i = 0; i < n; i++) { 
        scanf("%d", &arr[i]); // Scanning the elements of the array
    }    
    int largest = arr[0]; // Initialize largest to the first element of the array
    for(i = 1; i < n; i++) { 
        if(arr[i] > largest) { 
            largest = arr[i]; // Update largest if current element is greater
        } 
    }    
    printf("The largest element in the array is: %d\n", largest); // Output the largest element

    // this is the version 1
}