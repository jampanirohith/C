//Newtonn Raspton method//
#include<stdio.h>
#include<math.h>
    double f(double x)
 {  
    return x*x*x+x-1;
  }
    double df(double x)
    {
      return 3*x*x+1;
      
    }

double newton(double x0, double tol, int max_iter)
{
double x=x0;
double x_new = x-f(x)/df(x);
if(df(x) == 0) {
printf("Derivative is zero, Newton method's false\n");
return -1;
}
else if (fabs(x_new - x) > tol){
printf("The root is %f\n", x_new);
return x_new;
}
return x;
}

int main ()
{
    double x0=0, max_iter=5, tol=0.000005;
    
    newton(x0, tol, max_iter);
      return 0;
      }
       
    
