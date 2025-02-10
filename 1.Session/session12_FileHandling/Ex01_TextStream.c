#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *concat(const char *s1, const char *s2)
{
    const size_t len1 = strlen(s1);
    const size_t len2 = strlen(s2);
    char *result = (char *)malloc(len1 + len2 + 1); // +1 for the null-terminator
    // in real code you would check for errors in malloc here
    memcpy(result, s1, len1);
    memcpy(result + len1, s2, len2 + 1); // +1 to copy the null-terminator
    return result;
}

int main()
{
    FILE *fp;

    char *path = (char *)"1.Session/session12_FileHandling/"; // because run command from workspace
    char *name = (char *)"main.txt";
    char *filename = concat(path, name);

    // WRITE
    if ((fp = fopen(filename, "w+")) == NULL)
    {
        printf("Can not open file");
    }

    fputc('A', fp); // write a character
    fputc('x', fp);
    fputs("\n",fp);
    fputs("VIVO ", fp);
    fputs("C++", fp);


    fclose(fp);
    
    // READ
    if ((fp = fopen(filename, "r+")) == NULL)
    {
        printf("Can not open file");
    }

    // read a character
    // char ch; 
    // while ((ch = fgetc(fp)) != EOF) {
    //     printf("Character: %c\n", ch);
    // }

    // read a string
    char str[100]; 
    while(fgets(str,sizeof(str),fp) != NULL){
        str[strcspn(str, "\n")] = '\0'; // remove endlne '\n'
        printf("String: %s\n", str);
    }

    int fcl = fcloseall();
    if (fcl == EOF)
        printf("Error closing files");
    else
        printf("% d file(s) closed ", fcl);

    // fclose(fp);

    return 0;
}