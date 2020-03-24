#include <stdio.h>
#include <string.h>

#define MAX_PWD_CNT 10
#define MAX_STR_LEN 10

// forward declaration from my_lib.a
int getRandInt();



int main(){
    char passwords[MAX_PWD_CNT][MAX_STR_LEN] = \
    {"123456", "123456789", "qwerty", "password", "111111",
    "12345678", "abc123", "1234567", "password1", "12345"};
    char input[MAX_STR_LEN];
    int passwordNo = getRandInt();
    int returnValue;

    printf("Type in password no %d\n", getRandInt());
    printf("correct password %s\n", passwords[passwordNo]);
    fgets(input, MAX_STR_LEN, stdin);
    printf("You typed %s", input);

    returnValue = strcmp(passwords[passwordNo], input);

    printf("ret value %d\n", returnValue);


    return 0;
}
