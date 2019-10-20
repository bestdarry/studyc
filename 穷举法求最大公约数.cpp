#include<stdio.h>

int measure(int x, int y)
{
	int temp=0;
	for (temp =x;temp>0; temp--)
	{
		if (x % temp == 0 && y % temp == 0)
			break;
	}
	return temp;
}

	int main()
	{
		measure(30, 20);
		measure(25, 50);//多组测试 
		printf("%d\n", measure(30, 20));
		printf("%d", measure(25, 50)); //多组结果
		return 0;
	}
