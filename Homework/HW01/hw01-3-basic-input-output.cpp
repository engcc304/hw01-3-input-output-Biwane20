#include <stdio.h>

void main() {
    char FirstName[50],LastName[50];
    printf("First Name:");
    scanf("%s",&FirstName);

    printf("Last Name:");
    scanf("%s",&LastName);

    printf("%s %s TC, RMUTL, Chiang Mai, Thailand\n",FirstName,LastName);
  
    return 0;
}