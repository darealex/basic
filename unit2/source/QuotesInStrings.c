/*  
 The "use" of quotations causes difficulties. \n, \t and \
are also special characters.
 */


#include <stdio.h>  

int main() {
    char names[] = "names \n Alex \t Asenov \n";
    printf("%s", names);
    return 0;
}
