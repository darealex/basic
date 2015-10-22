/*
 Create a console application that prints the current date and time. Find in Internet how. 
 */

#include <stdio.h>
#include <time.h>

int main(void) {
    char buff[100];
    time_t now = time(0);
    strftime(buff, 100, "%Y-%m-%d %H:%M:%S", localtime(&now));
    printf("%s\n", buff);
    return 0;
}
