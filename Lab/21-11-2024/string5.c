#include<stdio.h>
#include<string.h>
int main()
{

char str[100], temp;
int start, end, length;
printf("Enter a string:  ");
scanf("%s", str);

length = strlen(str);
start=0, end = length-1;

while(start<end)
{
temp=str[start];
str[start] = str[end];
str[end] = temp;
start++;
end--;
}

printf("The reverse of the string  is %s\n", str);

return 0;

}
