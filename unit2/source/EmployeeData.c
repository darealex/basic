/*   
 A marketing company wants to keep record of its employees. Each record would have the following characteristics:
 First name
 Last name
 Age (0...100)
 Gender (m or f)
 Personal ID number (e.g. 8306112507)
 Unique employee number (27560000…27569999)
Declare the variables needed to keep the information for a single employee using appropriate primitive data types.
Use descriptive names. Print the data at the console.
 */


#include <stdio.h>  

int main() {

    char firstName[] = "Alex";
    char lastName[] = "Asenov";
    char age = 30;
    unsigned char gender = "m";
    unsigned int personalID = 8306112507;
    long uniqueEmloyee = 27563571;

    printf("First name: %s \n   Last name : %s \n  Age : %d \n Gender : %s \n  Personal ID : %ld \n  Unique Employee number : %ld \n", firstName, lastName, age, gender, personalID, uniqueEmloyee);

    return 0;
}
