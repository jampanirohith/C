#include<stdio.h>
#include<math.h>

double f(double x)
{
return log(x);
}
double third_derivative(double x) {
return 2/(x*x*x);
}


double forward difference(double x, double h)
{
return (f(x+h)-f(x))/h;
}

double compute_h_opt(dobble x)
{
	double epsilon = pow(2, -52);
	double M=fabs(third_derivative(x));
	return (pow(3*epsilon)/M, 1.0/3.0);
}
int main()
{
double x=1.0;
printf("
return 0;
}

