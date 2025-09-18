#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter Word: ");
    scanf("%s", str);

    int i = 0;
    int j = strlen(str) - 1;

    for(i = 0; i < j; i++) {
        if(i != j) {
            printf("Not Pass");
        }
    }
    return 0;
}