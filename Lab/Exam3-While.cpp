#include <stdio.h>

int main(){
    int n;
    printf("Enter number : ");
    scanf("%d", &n);
    int i = n;
    while (i >= 2) {
        int prime = 1; //กำหนดให้เป็นจำนวนเฉพาะ
        int j = 2;
        while (j < i) {
            if (i % j == 0) {
                prime = 0;
            }//end if
            j++;
        }//end while
        i--;
        if (prime == 1) {
            printf("%d ", i + 1);
        }//end if
    }//end while
    return 0;
}//end main
