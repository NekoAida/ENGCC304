#include <stdio.h>
//for loop in put N
int main() {
    int N = 0;
    printf("Enter Value: ");
    scanf("%d", &N);
    if (N <= 0) {
        printf("Value must be a positive integer.\n");
        return 1; // Exit if N is not positive
    }
    printf("Series: ");
    if (N % 2 == 0) {
        for (int i = N; i >= 0; i -= 2) {
            if (i % 2 == 0) {
                printf("%d ", i);
            }
        }    
    } else {
        for (int i = 1; i <= N; i += 2) {
            if (i % 2 == 1) {
            printf("%d ", i);
            }
        }
    }
     printf("\n");
    return 0; // Successful execution
}
    