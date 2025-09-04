#include <stdio.h>

int  main(){
    int n;
    printf("Enter number : ");
    scanf("%d", &n);
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
        if (i == 2) {
            prime = 1;
        }//end if
        i--;
        if (prime == 1) {
            printf("%d ", i + 1);
        }//end if
    } while (i >= 2);
    return 0;
}//end main