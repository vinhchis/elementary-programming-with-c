#include <stdio.h>
#include <conio.h>
#include <stdbool.h>
#define maxYear 3000

typedef struct {
    int day;
    int month;
    int year;
} Date;

bool isLeafYear(int year){
    if ((year % 4 == 0 && year % 100 != 0 )|| (year % 100 == 0 && year % 400 ==0))
    {
        return true;
    }
    return false;
}

int nDaysOfMonth(int month, int year){
    switch (month)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            return 31;
        case 4:
        case 6:
        case 9:
        case 11:
            return 30;
        case 2:
            if(isLeafYear(year)){
                return 29;
            }else{
                return 28;
            }
        default:
            break;
    }
}

Date findNextDate(Date date){
    Date nextDate;
    nextDate = date;

    if(nDaysOfMonth(date.month, date.year) == date.day)
    {
        nextDate.day = 1;
        if(date.month == 12){
            nextDate.month = 1;
            nextDate.year += 1;
        }
        nextDate.month += 1;
    } else{
        nextDate.day += 1;

    }

    return nextDate;
}

int main() {
    Date d, nd;
    int day, month, year;

    do {
        printf("Enter year: ");
        scanf("%d", &year);
        if(year <= 0  || year > maxYear)
        {
            printf("\tWrong year, please input year again !\n");
        }
    } while (year <= 0 || year > maxYear);

    do {
        printf("Enter month: ");
        scanf("%d", &month);
        if(month <= 0  || month > 12)
        {
            printf("\tWrong month, please input month again !\n");
        }
    } while (month <= 0  || month > 12);

    do {
        printf("Enter day: ");
        scanf("%d", &day);
        if(day <= 0  || day > nDaysOfMonth(month, year))
        {
            printf("\tWrong day, please input day again !\n");
        }
    } while (day <= 0  || day > nDaysOfMonth(month, year));
    
    d.day = day;
    d.month= month;
    d.year = year;
    nd = findNextDate(d);

    printf("Next day of %d/%d/%d : %d/%d/%d", d.day, d.month,d.year, nd.day,nd.month, nd.year);
    
    
    getch();
    return 0;
}