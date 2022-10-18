#include<stdio.h>
int main()
{
    char vowel;
    printf("Enter a vowel: ");
    scanf("%c",&vowel);

    switch(vowel)
    {
        case 'a':
        case 'A': 
        printf("%c is vowel",vowel);
             break;
        case 'E':
        case 'e': printf("%c is vowel",vowel);
            break;
        case 'I':
        case 'i':printf("%c is vowel",vowel);
            break;
        case 'O':
        case 'o': printf("%c is vowel",vowel);
             break;
         case 'U':
         case 'u': printf("%c is vowel",vowel);
             break;
        default:
        printf("%c It is not vowel",vowel);
    }
    return 0;
}