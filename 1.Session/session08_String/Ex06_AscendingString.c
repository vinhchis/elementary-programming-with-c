#include <stdio.h>
#include <string.h>
/*

*/
int main()
{
    int n;
    printf("How many characters do you want to enter, N(<=10) = ");
    scanf("%d", &n);

    char temp[20];
    char str[10][20];

    while (getchar() != '\n' && getchar() != EOF)
        ;
    for (int i = 0; i < n; i++)
    {

        printf("Enter string %d: ", i + 1);
        fgets(str[i], sizeof(str[i]), stdin);

        // Loại bỏ ký tự '\n' thừa nếu có
        str[i][strcspn(str[i], "\n")] = '\0';
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (strcmp(str[i], str[j]) > 0)
            {
                strcpy(temp, str[i]);
                strcpy(str[i], str[j]);
                strcpy(str[j], temp);
            }
        }
    }

    printf("\nAssending strings: ");
    for (int i = 0; i < n; i++)
    {
        printf("%-20s", str[i]);
    }

    return 0;
}