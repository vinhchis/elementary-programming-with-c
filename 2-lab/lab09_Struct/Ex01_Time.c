#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

typedef struct
{
    int h;
    int m;
    int s;
} Time;

Time getTime(){
    int h, m, s;
    Time t;

    do{
        printf("Enter hour: ");
        scanf("%d", &h);
        if(h < 0 || h > 24){
            printf("Invalid hour!!!\n");
            printf("Please, Input again.\n");
        }

    }while(h < 0 || h > 24);

    do{
        printf("Enter minus: ");
        scanf("%d", &m);
        if(m < 0 || m > 60){
            printf("Invalid minus!!!\n");
            printf("Please, Input again.\n");
        }

    }while(m < 0 || m > 60);

    do{
    printf("Enter second: ");
    scanf("%d", &s);
    if(s < 0 || s > 60){
        printf("Invalid second!!!\n");
        printf("Please, Input again.\n");
    }
    }while(s < 0 || s > 60);
    
    t.h = h;
    t.m = m;
    t.s = s;
    return t;
}

void displayTime(Time t){
    printf("hh:mm:ss = %02d:%02d:%02d\n\n", t.h, t.m, t.s);
}

Time distanceTwoTimes(Time t1, Time t2){
    Time t;
    int s1, s2, s;
    s1 = t1.h*60*60 + t1.m*60 + t1.s;
    s2 = t2.h*60*60 + t2.m*60 + t2.s;

    s = abs(s1 - s2);

    t.s = s % 60;
    t.h = s / (60*60);
    t.m = s / 60 - t.h*60;

    return t;
}


int main()
{
    Time t1, t2, dt;
    t1 = getTime();
    displayTime(t1);

    t2 = getTime();
    displayTime(t2);

    dt = distanceTwoTimes(t1, t2);

    printf("Distance of T1 and T2: \n");
    displayTime(dt);
    getch();
    return 0;
}