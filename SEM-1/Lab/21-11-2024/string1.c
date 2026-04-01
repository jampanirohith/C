//String//
#include<stdio.h>
int main()
{

char word[6] = "HELLO";

printf("%s\n", word);

        word[4] = '*';                       
         printf("%s\n", word);   //Result="HELL*"//

        word[1] = '#';          //Result="H#LL*"//
         printf("%s\n", word);

return 0;

}
