#include<stdio.h>
int factorial(int n){
	if(n==0) return 1;
	return (n*factorial(n-1));
}
int main(){
int x;
	printf("Input:");
	scanf("%d", &x);
	printf("Factorial=%d\n", factorial(x));
	return 0;
}
