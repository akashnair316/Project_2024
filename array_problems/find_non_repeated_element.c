#include <stdio.h>

// Function to return the unique element
int findUnique(int arr[], int n) {
    int unique = 0;
    
    // XOR all elements of the array
    for (int i = 0; i < n; i++) {
        unique ^= arr[i];  // XOR operation
    }
    
    return unique;
}

int main() {
    int arr[] = {22, 35, 35, 34, 65, 34, 22};  // Example array
    int n = sizeof(arr) / sizeof(arr[0]);
    
    int unique = findUnique(arr, n);
    
    printf("The unique element is: %d\n", unique);
    
    return 0;
}

