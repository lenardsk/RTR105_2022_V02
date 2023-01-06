#include <stdio.h>
int main() {
    int n, i;
    unsigned long long fact = 1;
    printf("Cienijamais lietotāj, lūdzu ievadiet vienu naturālskaitli: ");
    scanf("%d", &n);

    // parādīs kļūdu , ja lietotājs ievadīs negatīvu naturālskaitli
    if (n < 0)
        printf("Kļūda! .");
    else {
        for (i = 1; i <= n; ++i) {
            fact *= i;
        }
        printf("Factorial no %d = %llu", n, fact);
    }

    return 0;
}

