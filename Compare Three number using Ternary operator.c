#include <stdio.h>

int main(){

int x = 3, y = 2, z = 0;

printf("%d", ( x > y ? x : (y > z ? y : z)));

return 0;
}
