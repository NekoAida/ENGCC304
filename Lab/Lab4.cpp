#include <stdio.h>

int main() {
    char ID[11];
    int hrs;
    float salary;
    printf("Input the Employees ID(Max. 10 chars):");
    scanf("%10s", ID);
    printf("Input the working hrs: ");
    scanf("%d", &hrs);
    printf("Salary amount/hr: ");
    scanf("%f", &salary);

    printf("Expected Output:\n");
    printf("Employees ID: %s\n", ID);
    printf("Salary = U$ %.2f\n", (float)hrs * salary);
}//end main function