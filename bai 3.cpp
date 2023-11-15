#include <stdio.h>
int main() {
    float principal, interestRate, totalAmount, interest;
    int numberOfMonths;
    printf("Nhap so tien gui ban dau: ");
    scanf("%f", &principal);
    printf("Nhap lai suat nam (pham tram): ");
    scanf("%f", &interestRate);
    printf("Nhap so thang gui: ");
    scanf("%d", &numberOfMonths);
    for (int i = 1; i <= numberOfMonths; ++i) {
        interest = (principal * interestRate) / 100;
        totalAmount = principal + interest;
        printf("Thang %d: Tien gui: %.2f, Tien lai: %.2f\n", i, totalAmount, interest);
        principal = totalAmount;
    }
}
