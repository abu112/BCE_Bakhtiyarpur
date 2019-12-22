#include <stdio.h>

int fibonacci(int n)
{
	if ((n == 1) || (n == 0))
	{
		return(n);
	}
	else
	{
		return(fibonacci(n - 1) + fibonacci(n - 2));
	}
}

int main(){

	int arry[30];
	int arryfib[20];

	for (int i = 1; i < 20; i++) arry[i] = i;

	for (int i = 1; i < 10; i++) arryfib[i] = fibonacci(i);

	for (int i = 1; i < 20; ++i) {
		for (int j = 1; j < 10; j++) {
			if (arry[j] == arryfib[i]) printf("%d ", arry[j]);
		}
	}

return 0;
}
