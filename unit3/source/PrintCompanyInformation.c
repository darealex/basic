/*   
 A company has name, address, phone number, fax number, web site and manager. The manager has first name,
last name, age and a phone number. Write a program that reads the information about a company and its manager
and prints it back on the console
 */


#include <stdio.h>  

int main() {
    char *company = "Software University";
    printf("Company name: %s \n", company);

    char address[] = "15-18 Tintyava, Sofia";
    printf("Company address: %s \n", address);

    char phone[] = "+359 899 55 55 92";
    printf("Phone number: %s \n", phone);

    printf("Fax number: \n");

    char *site = "http://softuni.bg/";
    printf("Web site: %s \n", site);

    char *first = "Svetlin";
    printf("Manager first name: %s \n", first);

    char *last = "Nakov";
    printf("Manager last name:  %s \n", last);

    char age = 25;
    printf("Manager age:  %d \n", age);

    char *mphone = "+359 2 981 981";
    printf("Manager phone:  %s \n", mphone);

    printf("%s \n Address : %s \n Tel. %s \n Fax : (no fax)\n Web site : %s \n Manager : %s %s (age :\n %d, tel. %s) \n", company, address, phone, site, first, last, age, mphone);


    return 0;
}
