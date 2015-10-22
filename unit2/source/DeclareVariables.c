/* 
 Declare five variables choosing for each of them the most appropriate of the types char, short, unsigned
short, int, unsigned int, long, unsigned long to represent the following values: 52130, 8942492113, -
115, 4825932, 97, -10000, -35982859328592389. Choose a large enough type for each number to ensure it will
fit in it. 
 */


#include <stdio.h> 

int main() {
    unsigned short numa = 52130;
    unsigned long numb = 8942492113;
    char numc = 115;
    int numd = 4825932;
    char nume = 97;
    short numf = -10000;
    signed long long numg = -35982859328592389;
    return 0;
}
