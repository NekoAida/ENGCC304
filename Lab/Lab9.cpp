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
        printf("%5d", N[i]);
    }
}