#include <stdio.h>

int main(){

    long int out = 0;
    int input = 45222;

    while(input != 0){

        out = out*10 + input%10;
        input = input/10;
    }

    printf("%d", out);

    return 0;
}
