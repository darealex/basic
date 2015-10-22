
#include <stdio.h>  
#include <time.h>
#include <math.h>

int main() {
    int i;
    //clock_t times = clock();
    int interval = 2;
    int stoptime = interval;
    int starttime = 0;
    int power = 0;

    for (i = 0; i < 20; i++) {

        //clock_t looptime = clock();
        //printf("i start %d > %d = %d\n", i, starttime, stoptime);
        if (starttime < stoptime) {
            printf("T = %d \n", i);
            if (!power) {
                starttime = i;
                stoptime = i + interval;
                power = 1;
            }else {
                starttime =i;
            }
        } else {
            if (power) {
                starttime = i + interval;
                stoptime = i ;
                power = 0;
            }else {
                stoptime =i;
            }

        }

    }//end for

    return 0;
}
