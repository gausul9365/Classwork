
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