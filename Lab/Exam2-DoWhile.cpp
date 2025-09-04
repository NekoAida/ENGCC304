#include <stdio.h>

int  main(){
    int n;
    printf("Enter number : ");
    scanf("%d", &n);
    int i = n;
    do {
        int prime = 1;
        int j = 2;
        do {
            if (i % j == 0) {
                prime = 0;
            }
            j++;
        } while (j < i);
        if (i == 2) {
            prime = 1;
        }
        i--;
        if (prime == 1) {
            printf("%d ", i + 1);
        }
    } while (i >= 2);
    return 0;
}