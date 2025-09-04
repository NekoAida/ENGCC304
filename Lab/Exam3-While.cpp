#include <stdio.h>

int main(){
    int n;
    printf("Enter number : ");
    scanf("%d", &n);
    int i = n;
    while (i >= 2) {
        int prime = 1; //สมมุติเลขเป็นจำนวนเฉพาะ
        int j = 2;
        while (j < i) {
            if (i % j == 0) {
                prime = 0;
            }//end if
            j++;
        }//end while
        if (prime == 1) {
            printf("%d ", i);
        }//end if
        i--;
    }//end while
    return 0;
}//end main
