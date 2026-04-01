#include<stdio.h>
#include<math.h>

double f(double x)
{
return log(x);
}

int main()
{
double x=1.0, h=0.001;
printf("f'(x)= %.17f\n", (f(x+h)-f(x))/h);
return 0;
}

