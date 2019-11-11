#include <stdio.h>

long long int factorial(int n);

int main(){

    long int n = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("%d", factorial(n));

    return 0;
}

long long int factorial(int n){

    if(n == 0 || n == 1) return 1;

    return n*factorial(n-1);
}
