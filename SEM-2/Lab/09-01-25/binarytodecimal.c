#include<stdio.h>
void decimalToBinary(int n) {
	int binary[32];
	int i=0;
	while(n>0) {
	binary[i]=n%2;
	n=n/2;
	i++;
}
for(int j=i-1; j>=0; j--) {
	printf("%d", binary[j]);
}
printf("\n");
}
int main(){
int a;
scanf("%d",&a);
decimalToBinary(a);
return 0;
} 
