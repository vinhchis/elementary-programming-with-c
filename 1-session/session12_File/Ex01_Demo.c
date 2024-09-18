
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    FILE *myFile;

    int n = 100, m = 100;

    char buff[n], fileName[m];

    printf("Enter the File Name to open: ");

    gets(fileName);

    if ((myFile = fopen(fileName, "r")) == NULL)
    {

        fputs("\nFile not found", stderr);

        /* Error message on standard error rather than standard output */
        getch();
        exit(1);
    }

    while (!feof(myFile))
    {

        if (fgets(buff, 81, myFile))
        {

            fputs(buff, stdout); // stdprn

            /* Send line to printer */
        }
    }

    fclose(myFile);

    getch();
    return 0;
}