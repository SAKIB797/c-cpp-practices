#include <stdio.h>

int main()
{
    char alpha;
    printf("Enter a character: ");
    scanf("%c",&alpha);

 /**** if (alpha==97|| alpha==101|| alpha==105 || alpha==111 ||alpha== 117
         || alpha==65 || alpha==69 || alpha==73 || alpha==79 || alpha==85)
    {
        printf("%c is a vowel",alpha);

    }
    else
    {
        printf("%c is not a vowel",alpha);
    } ***********/
    switch(alpha) {

    case 'a':
    printf("a is a vowel");
    break;

    case 'e':
    printf("e is a vowel");
    break;

    case 'i':
    printf("i is a vowel");
    break;

    case 'o':
    printf("o is a vowel");
    break;

    case 'u':
    printf("u is a vowel");
    break;

    //for uppercase

        case 'A':
    printf("a is a vowel");
    break;

    case 'E':
    printf("e is a vowel");
    break;

    case 'I':
    printf("i is a vowel");
    break;

    case 'O':
    printf("o is a vowel");
    break;

    case 'U':
    printf("u is a vowel");

    default:
        printf("%c is not vowel",alpha);
    break;





    }


    return 0;
}
