#include <stdio.h>
int sum(int n) {
    return n * (n + 1) / 2;
}
int isPrime(int num) {
    if (num < 2) {
    }

    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
        }
    }
    return 1;
}
int isPerfect(int num) {
    int sum = 1;
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            if (i * i != num) {
                sum = sum + i + num / i;
            } else {
                sum = sum + i;
            }
        }
    }
    return (sum == num) && (num != 1);
}
long long factorial(int num) {
    if (num == 0 || num == 1) {
        return 1;
    } else {
        return num * factorial(num - 1);
    }
}
int reverseNumber(int num) {
    int reversedNum = 0;
    while (num > 0) {
        reversedNum = reversedNum * 10 + num % 10;
        num /= 10;
    }
    return reversedNum;
}
int main() {
    int choice, n;
    printf("Nhap mot so nguyen n: ");
    scanf("%d", &n);
    do {
        printf("\nINTEGER NUMBER\n");
        printf("1. In ra day so co gia tri nho hon hoac bang n va tinh tong.\n");
        printf("2. In ra va dem cac so chia het cho 3 nho hon n.\n");
        printf("3. Kiem tra so nguyen co phai la so nguyen to khong.\n");
        printf("4. Kiem tra so nguyen co phai la so hoan hao khong.\n");
        printf("5. Tinh tong cac uoc so cua n.\n");
        printf("6. Tinh giai thua n.\n");
        printf("7. In ra so dao nguoc cua n.\n");
        printf("8. In ra cac so nguyen to tu 1 den n.\n");
        printf("9. Thoat.\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Danh sach cac so nho hon hoac bang %d: ", n);
                for (int i = 1; i <= n; ++i) {
                    printf("%d ", i);
                }
                printf("\nTong cac so: %d\n", sum(n));
                break;
            case 2:
                printf("Cac so chia het cho 3 nho hon %d la: ", n);
                for (int i = 1; i < n; ++i) {
                    if (i % 3 == 0) {
                        printf("%d ", i);
                    }
                }
                printf("\n");
                break;
            case 3:
                if (isPrime(n)) {
                    printf("%d la so nguyen to.\n", n);
                } else {
                    printf("%d khong phai la so nguyen to.\n", n);
                }
                break;
            case 4:
                if (isPerfect(n)) {
                    printf("%d la so hoan hao.\n", n);
                } else {
                    printf("%d khong phai la so hoan hao.\n", n);
                }
                break;
            case 5:
                printf("Tong cac uoc so cua %d la: %d\n", n, sum(n));
                break;
            case 6:
                printf("Giai thua cua %d la: %d\n", n, factorial(n));
                break;
            case 7:
                printf("So dao nguoc cua %d la: %d\n", n, reverseNumber(n));
                break;
            case 8:
                printf("Cac so nguyen to tu 1 den %d la: ", n);
                for (int i = 1; i <= n; ++i) {
                    if (isPrime(i)) {
                        printf("%d ", i);
                    }
                }
                printf("\n");
                break;
            case 9:
                printf("Ket thuc chuong trinh.\n");
                break;
            default:
                printf("Lua chon khong hop le. Vui long nhap lai.\n");
        }
    } while (choice != 9);
}

