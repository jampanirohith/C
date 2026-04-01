#include <stdio.h>
int sum(int n,int s)
{
s+=n;
n--;
 if (n!=0)
 {
 sum(n,s);
 }
 else
 {
 printf("sum = %d\n",s);
 return 0;
}
 }
 int main()
 {
 int a;
 scanf("%d",&a);
 sum(a,0);
 return 0;
 }
