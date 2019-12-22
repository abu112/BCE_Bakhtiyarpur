#include <stdio.h>

int main(){
    
    int num = 0;
    int arry[100000];
    scanf("%d", &num);
    int temp =0;
    
    for(int i = 2; i<=(int)(num/2); ++i){
        if(num%i == 0) {
            arry[temp] = i;
            temp++;
        }
    }
    
    if(temp == 0) printf("Number is prime\n");
    else{
        printf("Factors are: ");
        for(int i = 0; i < temp; ++i){
            printf("%d ", arry[i]);
        }
    }
    
    return 0;
}
