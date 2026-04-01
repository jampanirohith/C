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
double h_values[] = {1e-1, 1e-2, 1e-3, 1e-4, 1e-5, 1e-6, 1e-7, 1e-8, 1e-9};
int num_h = sizeof(h_values)/sizeof(h_values[0]);

printf("Derivative approximations for f(x) = ln(x) at x=%.2f:\n", x);
printf("h\t\tApproximation\tExact\t\tError\n");
printf("---------------\n");

for (int i =0; i<num_h; i++)
{
double h = h_values[i];
double approx = forward_differece(x, h);
double exact = exact_derivative(x)
return 0;
}

