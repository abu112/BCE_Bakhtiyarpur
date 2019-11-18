#include <stdio.h>

int main(){

int n = 30;

for(int i = 1; i <=n; ++i){
  if(i % 3 == 0 && i%2 != 0) printf("%d ", i);
  else continue;

}

return 0;
}
