//String length//

#include<stdio.h>
int main()
{

char word[20];
int i=0, count=0;
printf("Input:  ");
fgets(word, sizeof(word), stdin);     //Spaces are valid//
while(word[i]  !='\0' && word[i] != '\n')
{

        count++;
        i++;

}

printf("The string length is %d\n", count);

return 0;

}
