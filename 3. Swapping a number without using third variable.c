#include <stdio.h>

int main() {

    int a, b = 0;

    printf("Enter two number: ");
    scanf("%d%d", &a, &b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("a and b are: %d %d", a, b);

    return 0;
}
