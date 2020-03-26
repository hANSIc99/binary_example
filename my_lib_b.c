#include <stdio.h>
#include <string.h>


void checkPassword(char* str1, char* str2){
    int returnValue = strcmp(str1, str2);

    if(returnValue == 0){
        printf("Congratulations, the password is correct!\n");
    } else {
        printf("Wrong password\n");
    }
}
