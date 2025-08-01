#include <stdio.h>
int main() {
    int N = 0a;
    printf("Enter Value: ");
    scanf("%d", &N);
    if (N <= 0) {
        printf("Plaese Enter Number Only.\n");
        return 1;
    } //End if
    printf("Series: ");
    if (N % 2 == 0) {
        for (int i = N; i >= 0; i -= 2) {
            if (i % 2 == 0) {
                printf("%d ", i);
            } //End if
        }    
    } else {
        for (int i = 1; i <= N; i += 2) {
            if (i % 2 == 1) {
            printf("%d ", i);
            } //End if
        } //End for
    } //End Else
     printf("\n");
    return 0;
}
    