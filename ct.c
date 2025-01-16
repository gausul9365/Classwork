#include <stdio.h>
#include <stdlib.h>

struct Date {
    int day;
    int month;
    int year;
};

int isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int calculateDays(struct Date date) {
    int totalDays = date.year * 365 + date.day;

    int monthDays[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    for (int i = 1; i < date.month; i++) {
    totalDays += monthDays[i];
    }

    totalDays += (date.year / 4) - (date.year / 100) + (date.year / 400);

    if (isLeapYear(date.year) && date.month > 2) {
        totalDays++;
    }

    return totalDays;
}

int main() {
    struct Date date1, date2;

    
    printf("Enter the first date (day month year): ");
    scanf("%d %d %d", &date1.day, &date1.month, &date1.year);

    printf("Enter the second date (day month year): ");
    scanf("%d %d %d", &date2.day, &date2.month, &date2.year);

    int days1 = calculateDays(date1);
    int days2 = calculateDays(date2);

    int difference = abs(days1 - days2);

    printf("The difference between the two dates is %d days.\n", difference);

    return 0;
}
