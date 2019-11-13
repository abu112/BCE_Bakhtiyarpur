#include <stdio.h>

int main(){
for (int i = 1; i <= 5; i++) {
		int j = 1;
		while (j <= i) { printf("%d ", j); j++; }
		printf("\n");
	}
  return 0;
  }
  /*
  1
  1 2
  1 2 3
  1 2 3 4
  1 2 3 4 5
  
  */
