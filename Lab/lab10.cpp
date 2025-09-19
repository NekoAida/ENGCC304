#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter Word: ");
    scanf("%s", str);

    int i = 0;
    int j = strlen(str) - 1;
    int prime = 1;

    while(i < j) {
        if(str[i] != str[j]) {
            prime = 0;
            break;
        }
        i++;
        j--;
    }

    if (prime) {
        printf("\nPass");
    }else {
        printf("\nNot Pass");
    }
    return 0;
}