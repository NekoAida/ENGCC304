#include <stdio.h>

int main() {
    int num;
    printf("Enter N : ");
    scanf("%d", &num);
    int N [num];
    for(int i = 0; i < num; i++) {
        printf("Enter Value [%d]: ", i);
        scanf("%d", &N[i]);
    }
    printf("Index : ");
    for(int i = 0; i < num; i++) {
        printf("%5d", i);
    }
    printf("\nArray : ");
    for(int i = 0; i < num; i++) {
        int prime = 1;
        for(int j = 2; j < N[i]; j++) {
            if(N[i] % j == 0) {
                prime = 0;
            }
        }
        if (prime == 1) {
        printf("%5d", N[i]);
        } else {
            printf("%5c", '#');
        }
    }
    return 0;
}