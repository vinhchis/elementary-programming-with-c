#include<stdio.h>
#include<string.h>

int main(){
    int n;
    printf("How many students do you want to enter, N(<=10) = ");
    scanf("%d", &n);

    char temp[20];
    char str[10][20];

    for(int i = 0; i < n; i++){
        printf("Enter name of student %d: ", i + 1);
        scanf("%s",str[i]);
        while(getchar() != '\n' && getchar() != EOF);
    }

    for(int i=0; i < n -1 ; i++)
    {
        for(int j= i+1; j < n;j++){
            if(strcmp(str[i], str[j]) > 0){
                strcpy(temp, str[i]);
                strcpy(str[i], str[j]);
                strcpy(str[j], temp);
            }
        }
    }

    printf("\nAssending student names: \n");
    for (int i = 0; i < n; i++)
    {
        printf("\t%d. %s\n", i+1, str[i]);
    }

    getchar();
    return 0;
}