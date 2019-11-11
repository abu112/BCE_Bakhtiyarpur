#include <stdio.h>

int main(){

    int n = 25; int t = 0;
    int count = 0;
    int arry[n];

    for(int i = 0; i < n; ++i){
        scanf("%d", &arry[i]);
    }

    scanf("%d", &t);

    for(int i = 0; i < n; ++i){
        if(arry[i] == t) count++;
    }

    printf("%d Appeared %d times", t, count);


    return 0;
}
