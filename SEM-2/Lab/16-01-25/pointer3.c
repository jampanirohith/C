#include<stdio.h>

int main() {
FILE *file = fopen("example.txt", "w");
if (file==NULL) {
printf("Error opening file\n");
return 1;
}

fprintf(file, "Hello, File Heading in C!\n");
fclose(file);
printf("Data written sucesssfully.\n");
return 0;
}
