#include <stdio.h>
#include<string.h>

int main()
{
	int input = 0;
	printf("进入大学\n");
	printf("你要好好学习吗?（1/0）>:");
	scanf("%d", &input);// 1/0
	if (input == 1)
		pirntf("好offer\n");
	else
		printf("卖红薯\n");
	return 0;
}