#include <stdio.h>

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    
    int a; int b;
    printf("Enter two number (i.e a & b): ");
    scanf("%d %d", &a, &b);
    
    printf("Before Swap: a: %d and b: %d\n", a, b);
    
    swap(&a, &b);
    printf("After Swap: a: %d and b: %d\n", a, b);
    
    return 0;
}
