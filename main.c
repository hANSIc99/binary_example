#include <stdio.h>
#include <string.h>

#define MAX_PWD_CNT 10
#define MAX_STR_LEN 10

// forward declaration from my_lib.a
int getRandInt();
void checkPassword(char* str1, char* str2);


int main(){
    char passwords[MAX_PWD_CNT][MAX_STR_LEN] = \
    {"123456", "123456789", "qwerty", "password", "111111",
    "12345678", "abc123", "1234567", "password1", "12345"};
    char input[MAX_STR_LEN];
    int passwordNo = getRandInt();
    int returnValue, len;

    printf("Type in password no %d\n", getRandInt());

    fgets(input, MAX_STR_LEN, stdin);
    len = strlen(input);

    // Remove newline from string
    if( input[len-1] == '\n' )
        input[len-1] = 0;
    printf("You typed \"%s\"\n", input);
    
    checkPassword(passwords[passwordNo], input);

    return 0;
}
