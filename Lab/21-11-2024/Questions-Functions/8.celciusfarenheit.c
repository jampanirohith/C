// Write a function that cconverts celcieus to fahrenheit//
#include <stdio.h>
double convert(double c)
{
return 9.0*c/5.0+32.0;
}
 
int main()
{
 double a;
 printf("Enter celcieus:");
 scanf("%lf",&a);
 printf("Temperature in fahrenheit: %.2f\n", convert(a));
 return 0;
}
