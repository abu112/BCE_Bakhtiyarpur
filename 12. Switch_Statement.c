#include <stdio.h>

int main(){

	char op = '0';
	int x, y = 0;
	printf("Enter two number: ");
	std::cin >> x >> y;
	printf("Enter the operation +, -, *, /: ");
	std::cin >> op;

	switch (op) {

		case '+':
			printf("%d", (x + y));
			break;
		case '-':
			printf("%d", (x - y));
			break;
		case '*':
			printf("%d", (x * y));
			break;
		case '/':
			printf("%.2f", (float)(x / y));
			break;
	default:
		break;
	}

return 0;
}
