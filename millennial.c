#include <stdio.h>

int main() {
    int Y;
    scanf("%d", &Y);

    int idade_real = 2025 - Y;
    int ano_millennial = 2025 - (idade_real * 2);

    printf("%d\n", ano_millennial);
    return 0;
}