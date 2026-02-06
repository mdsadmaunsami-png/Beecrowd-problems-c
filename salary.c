#include <stdio.h>

int main() {
    int employeeNumber, hoursWorked;
    double amountPerHour, salary;

    // Reading input data
    // First is the employee number
    // Second is the quantity of hours
    // Third is the amount received per hour
    scanf("%d", &employeeNumber);
    scanf("%d", &hoursWorked);
    scanf("%lf", &amountPerHour);

    // Calculating the total salary
    salary = hoursWorked * amountPerHour;

    // Printing the output with the required formatting
    // %d for integers and %.2f for two decimal places
    printf("NUMBER = %d\n", employeeNumber);
    printf("SALARY = U$ %.2f\n", salary);

    return 0;
}
