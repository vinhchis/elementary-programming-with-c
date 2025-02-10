#include<stdio.h>

int main()
{
    char ch;
    printf("Enter a character: ");
    ch = getchar();

    if(ch >= 'a' && ch <= 'z'){
        switch (ch)
        {
            case 'u':
                break;
            case 'e':
                break;
            case 'o':
                break;
            case 'a':
                break;
            case 'i':
                printf("%c is a vovel character.\n",ch);
                break;
            case 'z':
                printf("Last character (z) was entered.\n");
                break;
            default:
                printf("%c is a consonant.\n",ch);
                break;
        } 
    }
    else 
    {
        printf("Character not a lower cased alphabet\n");
    }


    return 0;
}