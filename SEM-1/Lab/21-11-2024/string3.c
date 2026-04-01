//String input using FGETS//
#include<stdio.h>
int main()
{

char word[20];

printf("Input:  ");
fgets(word, sizeof(word), stdin);     //Spaces are valid


printf("%s\n", word);


return 0;

}
