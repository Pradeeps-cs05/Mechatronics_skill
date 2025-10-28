#include <stdio.h>
#include <math.h>

int main() {
    double principal, rate, time, amount, compoundInterest;
    int n;

    printf("=== Compound Interest Calculator ===\n");

    printf("Enter principal amount: ");
    scanf("%lf", &principal);

    printf("Enter annual interest rate (in %%): ");
    scanf("%lf", &rate);

    printf("Enter time (in years): ");
    scanf("%lf", &time);

    printf("Enter number of times interest is compounded per year: ");
    scanf("%d", &n);

    amount = principal * pow((1 + (rate / 100.0) / n), n * time);

    compoundInterest = amount - principal;

    printf("\n--- Results ---\n");
    printf("Principal Amount = %.2lf\n", principal);
    printf("Total Amount     = %.2lf\n", amount);
    printf("Compound Interest= %.2lf\n", compoundInterest);

    return 0;
}
