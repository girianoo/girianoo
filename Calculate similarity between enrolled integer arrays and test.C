#include <stdio.h>

// Function to calculate Simple Matching Coefficient
double simpleMatchingCoefficient(int arr1[], int arr2[], int size) {
    int matching = 0;
    int i;

    // Count the number of matching elements at the same index
    for (i = 0; i < size; i++) {
        if (arr1[i] == arr2[i]) {
            matching++;
        }
    }

    // Calculate the similarity using Simple Matching Coefficient formula
    double similarity = (double) matching / size;
    return similarity;
}

int main() {
    // Define the size of arrays
    int size = 5; // Change this to match the size of your arrays

    // Enrolled array
    int enrolledArray[] = {1, 2, 3, 4, 5}; // Replace this with your enrolled array

    // Test array
    int testArray[] = {1, 0, 3, 4, 5}; // Replace this with your test array

    // Calculate similarity using Simple Matching Coefficient
    double similarity = simpleMatchingCoefficient(enrolledArray, testArray, size);

    // Display the similarity
    printf("Similarity between the arrays: %.2f\n", similarity);

    return 0;
}
