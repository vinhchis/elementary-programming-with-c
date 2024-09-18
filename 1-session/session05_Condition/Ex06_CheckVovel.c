#include<stdio.h>
#include<conio.h>

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
                printf("\n%c is a vovel character.",ch);
                break;
            case 'z':
                printf("\nLast character (z) was entered.");
                break;
            default:
                printf("\n%c is a consonant.",ch);
                break;
        } 
    }
    else 
    {
        printf("\nCharacter not a lower cased alphabet");
    }


    getch();
    return 0;
}