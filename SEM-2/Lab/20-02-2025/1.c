#include<stdio.h>
#include<math.h>

#define N 5
void least_square(double t[],double y[], int n, double *c1, double *c2)
{ 
    double sum_t=0, sum_y=0, sum_t2=0, sum_ty=0;
    double errors[N], sum_errors=0;
   
   
  for(int i=0; i<n; i++)
   {
      sum_t += t[i];
      sum_y += y[i];
      sum_t2 += t[i]*t[i];
      sum_ty += t[i]*y[i];
    }
    
    double denom = n*sum_t2 - sum_t * sum_t;
    *c1 = (sum_y*sum_t2-sum_t*sum_ty)   /denom;
    *c2 = (n*sum_ty - sum_t*sum_y)  /denom;
    
    
   //Compute individual errors
    printf("Errors at each point:\n");
    for (int i=0; i<n; i++)
    {
      errors[i]=y[i]-(*c1 + *c2 *t[i]);
      sum_errors += errors[i] * errors[i];
     printf("e[%d]= %.6f\n",i,errors[i]);
    } 

printf("Minimilized sum of Squared errors: %.6f\n", sum_errors);

}

int main() { 
  double t[N]={750,800,850,900,950};
  double y[N]={150,170,190,210,230};
  
    double c1, c2;
    
  least_square(t, y, N, &c1, &c2);
  printf("Best fit line y = %.2f = %.2f\n", c1, c2);
  return 0;

}
     

