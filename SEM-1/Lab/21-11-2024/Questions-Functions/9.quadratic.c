//Find roots of quadratic equation with coefficients//
#include<stdio.h>
#include<math.h>
int check(int i,int j,int k)
{
        if(((j*j)-4*i*k)>=0)
        {
        printf("x=%.2f\n",(((-j)+sqrt((j*j)-4*i*k))/(2*i)));
        printf("x=%.2f\n",(((-j)-sqrt((j*j)-4*i*k))/(2*i)));
        }
        else
        {
        printf("Roots are imaginary\n");
        }
 return 0;
}
 
int main()
{
 int a,b,c;
 printf("Given quadratic equation: ax^2 +bx + c =0 \nEnter values of a,b,c:");
 scanf("%d%d%d",&a,&b,&c);
 check(a,b,c);
 return 0;
}
