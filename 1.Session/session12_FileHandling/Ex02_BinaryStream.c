#include <stdio.h>
#include<stdlib.h>
#include <string.h>
#include <unistd.h>
typedef struct PersonType{
    char name[30];
    int code;
} Person;
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
    char *name = (char *)"jak";
    char *filename = concat(path, name);

    double d = 23.31;
    int i = 13;
    long li = 1234567L;
    int i2[2] = {1,3};
    Person p = {
        name : "Chi",
        code : 123
    };

    system("clear");
    if ((fp = fopen(filename, "wb+")) == NULL)
    {
        printf("cannot open file ");
        exit(1);
    }

    fwrite(&d, sizeof(double), 1, fp);
    fwrite(&i, sizeof(int), 1, fp);
    fwrite(&li, sizeof(long), 1, fp);
    fwrite(&i2, sizeof(int), 2, fp);
    fwrite(&p, sizeof(Person), 1, fp);

    fclose(fp);

    if ((fp = fopen(filename, "rb+")) == NULL)
    {
        printf("cannot open file ");
        exit(1);
    }

    // reset
    d = 0;
    i = 0;
    li = 0;
    i2[0] = 0, i2[1] = 0;
    strcpy(p.name, "");
    p.code = 0;

    // read binary
    fread(&d, sizeof(double), 1, fp);
    fread(&i, sizeof(int), 1, fp);
    fread(&li, sizeof(long), 1, fp);
    fread(&i2, sizeof(int), 2, fp);
    fread(&p, sizeof(Person), 1, fp);


    printf("%f %d %ld\n", d, i, li);
    printf("%d, %d\n", i2[0], i2[1]);
    printf("Person: name=%s, code=%d\n", p.name, p.code);
    
    fclose(fp);
}