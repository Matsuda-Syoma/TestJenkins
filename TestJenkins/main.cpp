#include <stdio.h>
#include "common.h"
int main()
{
	// 変数の定義
	int num1 = 2;
	int num2 = 3;

	// 出力 
	printf("%d + %d = %dです。\n", num1, num2, plus(num1 , num2));
	printf("%d - %d = %dです。\n", num1, num2, minus(num1 , num2));
	printf("%d * %d = %dです。\n", num1, num2, multiply(num1 , num2));
	printf("%d / %d = %dです。\n", num1, num2, divide(num1 , num2));

	return 0;
}