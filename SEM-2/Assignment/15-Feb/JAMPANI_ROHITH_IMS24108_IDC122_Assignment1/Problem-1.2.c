//1.2. Write another C program that reads a list of numbers from a text file and prints their sum.//

#include <stdio.h>

int main() {
    FILE *inputFile, *outputFile;
    int number, sum = 0;

    // Open numbers.txt in read mode
    inputFile = fopen("numbers.txt", "r");

    // Check if the file was opened successfully
    if (inputFile == NULL) {
        printf("Error opening file numbers.txt\n");
        return 1;
    }

    // Read numbers from the file and calculate the sum
    while (fscanf(inputFile, "%d", &number) == 1) {
        sum += number;
    }

    // Close the input file
    fclose(inputFile);

    // Open output.txt in write mode
    outputFile = fopen("output.txt", "w");

    // Check if the output file was opened successfully
    if (outputFile == NULL) {
        printf("Error opening file output.txt\n");
        return 1;
    }

    // Write the sum to output.txt
    fprintf(outputFile, "The sum of the numbers is: %d\n", sum);

    // Close the output file
    fclose(outputFile);

    // Print the sum to the console
    printf("The sum of the numbers is: %d\n", sum);

    return 0;
}
