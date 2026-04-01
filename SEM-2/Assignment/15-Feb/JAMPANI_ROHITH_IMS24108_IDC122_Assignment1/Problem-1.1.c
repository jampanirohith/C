//1.1. Write a C program that creates a file called numbers.txt. The file will contain any 5 numbers of your choice.//

#include <stdio.h>

int main() {
    FILE *file = fopen("numbers.txt", "w");     //Opening the file
    
    if (file == NULL) {
        printf("Error opening file\n");
        return 1;
    }
    // Writing 5 numbers to the file
    fprintf(file, "%d\n", 10);
    fprintf(file, "%d\n", 20);
    fprintf(file, "%d\n", 30);
    fprintf(file, "%d\n", 40);
    fprintf(file, "%d\n", 50);

    fclose(file);     // Close the file

    printf("numbers.txt file created and numbers written successfully.\n");

    return 0;
}
