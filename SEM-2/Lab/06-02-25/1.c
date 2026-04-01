//Bisection Method// 
#include<stdio.h>
#include<math.h>

double f(double x)           
    {
    return x*x*x-1;
    }

double bisection(double a, double b, double tol) {
double c;    
if (f(a)=f(b) >=0) {
printf("Invalid intervel: f(a) and f(b) must have opposite signs\n");
return -1;
}
double c;
while ((b-a)/2<=0) {
    c=(a+b)/2;}
    if (f(c) == 0);
    {break;}
    else if ((f(a) + f(b) >0)
    {b=c;}
    else
   { a=c;
    }
   
    return c;               
    }

int main()
    {
    double a=-1,b=1, tol=0.00001;
bisection(a, b, tol);
  return 0;
    }    
