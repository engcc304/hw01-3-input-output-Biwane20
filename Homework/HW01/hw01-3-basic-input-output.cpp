#include <stdio.h>

int main() {
    char FirstName[50],LastName[50];
    char FirstName1[50],LastName1[50];

    printf("First Name:");
    scanf("%s",&FirstName);

    printf("Last Name:");
    scanf("%s",&LastName);

    printf("%s %s TC, RMUTL, Chiang Mai, Thailand\n",FirstName,LastName);
    
    printf("First Name1:");
    scanf("%s",&FirstName1);

    printf("Last Name1:");
    scanf("%s",&LastName1);

    printf("%s %s TC, RMUTL, Chiang Mai, Thailand\n",FirstName1,LastName1);
    
    return 0;
}