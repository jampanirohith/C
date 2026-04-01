// Write a function that converts fahrenheit to celcieus//
#include <stdio.h>
double convert(double f);
{
return (5*f-160)/9;
}
 
int main()
{
 double a;
 printf("Enter fahrenheit:");
 scanf("%lf",&a);
 printf("Temperature in celcieus: %.2f\n", convert(a));
 return 0;
}
