#include<stdio.h>
int main()
{
double epsilon = 1.0;

while( 1.0 + epsilon != 1.0)
{
epsilon /= 2.0;
}

epsilon *= 2.0;
printf("Machine epsilon: %.17f\n", epsilon);
 


return 0;
}
