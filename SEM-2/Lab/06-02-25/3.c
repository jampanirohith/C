//Newtonn Raspton method - Alternative//
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

double newton(double x0, double xi, double tol, int max_iter)
{
for(int i=0; i<max_iter; i++) {
if(f(xi) - f(x0) == 0) {
printf("Derivative is zero, Newton method's false\n");
return -1;
}
double x_new = xi - f(xi)*(xi-x0)/(f(xi)-f(x0));
else if(fabs(x_new - x0) < tol){
printf("The root is %f\n",x_new);
x0=xi;
xi=x_new; 
return 1;
}

return xi;
}
}
int main ()
{
    double x0=0, xi=5, max_iter=5, tol=0.000005;
    
    newton(x0, xi, tol, max_iter);
      return 0;
      }
       
    
