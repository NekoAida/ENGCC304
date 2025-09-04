#include <stdio.h>

int main(){
    int n;
    printf("Enter number : ");
    scanf("%d", &n);
    for (int i = n; i >= 2; i--) {
        int prime = 1;
        for (int j = 2; j < i; j++) {
            if (i % j == 0) {
                prime = 0;
            }
        }//end for
        if (prime == 1) {
            printf("%d ", i);
        }//end if
    }//end for
    return 0;
}//end main