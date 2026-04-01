//String input using scanf//
#include<stdio.h>
int main()
{

char word[6];

printf("Input:  ");
scanf("%s", word);        //Spaces will not be valid

printf("%s\n", word);

        word[4] = '*';                       
         printf("%s\n", word); 
         
        word[1] = '#';          
         printf("%s\n", word);

return 0;

}
