/*
 Create a console application that prints the current date and time. Find in Internet how. 
 */


#include <stdio.h>
#include <time.h>

int main() {
    time_t sec;
    sec = time(NULL);

    printf("Number of hours since January 1, 1970 is %ld \n", sec / 3600 / 24 / 365);

    time_t mytime;
    mytime = time(NULL);
    printf(ctime(&mytime));
    printf("\n\n");

    struct tm str_time;
    time_t time_of_day;

    str_time.tm_year = 1985 - 1900;
    str_time.tm_mon = 6;
    str_time.tm_mday = 6;
    str_time.tm_hour = 10;
    str_time.tm_min = 3;
    str_time.tm_sec = 5;
    str_time.tm_isdst = 0;

    time_of_day = mktime(&str_time);
    printf(ctime(&time_of_day));
    printf("\n");
    printf("%d\n", time_of_day);
     
    
    printf("The loop used %f seconds.\n", difftime(mytime, time_of_day)/ 3600 / 24 / 365);

    return 0;
    /*
    time_t start, harvestdate;
    double dif;
    int size, days, count;
    time(&start);

    printf("input harvest date\n");
    scanf("%X", &harvestdate); // ??
    printf("input size\n");
    scanf("%d", &size);

    time(&harvestdate);
    dif = difftime(harvestdate, start);

    days = (int) dif / 86400;
    count = (int) days * 0.72 + size;
    printf("count = %d\n", count);
    return 0;
     */
}
