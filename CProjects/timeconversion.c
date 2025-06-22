#include <stdio.h>

int main(){
    int minutes = 0;
    double minutes_in_year = 60 * 24 * 365;
    double minutes_in_days = 60 * 24;
    double years = 0;
    double days = 0.0;

    printf("Enter the number of minutes: ");
    scanf("%d", &minutes);
    years = minutes / minutes_in_year;
    days = minutes / minutes_in_days;
    printf("%d minutes is approximately %d years and %d days\n", minutes, (int)years, (int)days);
    return 0;
}