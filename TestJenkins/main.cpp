#include <stdio.h>
#include "common.h"
int main()
{
	// �ϐ��̒�`
	int num1 = 2;
	int num2 = 3;

	// �o�� 
	printf("%d + %d = %d�ł��B\n", num1, num2, plus(num1 , num2));
	printf("%d - %d = %d�ł��B\n", num1, num2, minus(num1 , num2));
	printf("%d * %d = %d�ł��B\n", num1, num2, multiply(num1 , num2));
	printf("%d / %d = %d�ł��B\n", num1, num2, divide(num1 , num2));

	return 0;
}