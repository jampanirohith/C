#include<stdio.h>
int main()
{
int age=21;
int *pAge = &age;
printf("You are %d old\n", *pAge);
printf("Adress of age: %p\n", &age);
printf("Value of pAge: %p\n", pAge);
printf("Size of pAge: %d bytes\n", sizeof(pAge);
printf("Value of age:L %d\n", age);
printf("Value of stored address: %d\n", *pAge);
return 0;
}
