#include <stdio.h>

int  main(){
    int n;
    printf("Enter number : ");
    scanf("%d", &n);
    if (n < 2) {
        return 0;
    }
    int i = n;
    do {
        int prime = 1; //กำหนดให้เป็นจำนวนเฉพาะ
        int j = 2;
        do {
            if (i % j == 0) {
                prime = 0;
            }//end if
            j++;
        } while (j < i);
        if (prime == 1) {
            printf("%d ", i);
        }//end if
        i--;
    } while (i >= 2);
    printf("2");
    return 0;
}//end main