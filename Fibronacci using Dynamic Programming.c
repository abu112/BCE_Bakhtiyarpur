#include <stdio.h>

typedef long long unsigned llu;

void fibs(llu num){
    llu arry[100000]={0, 1};
    
    for(llu i =2; i <= num; ++i){
        arry[i] = arry[i-1] + arry[i-2];
    }
    for(llu i = 0; i <= num; ++i){
        printf("%d ", arry[i]);
    }
}

int main(){
    
    llu num = 0;
    printf("Enter the term: : ");
    scanf("%llu", &num);
        
    fibs(num);
    
    return 0;
}
