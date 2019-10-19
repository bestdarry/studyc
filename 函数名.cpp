#include <stdio.h>
/*
返回值  函数名(参数列表)
{
    函数实现体
}

变量需要先定义后使用
1.功能函数不能写在main函数中,应该单独成函数
   只需要将main代码复制,函数重命名
2.不能通过scanf读取数据
   通过参数列表传递数据

void :修饰返回值,表示无返回值
*/

//2.通过参数传递数据
int Max(int a,int b)//函数定义完之后.可以使用,使用方法类似printf
{
	//int a;
	//int b;
	//printf("请输入两个整数\n");
	//scanf("%d%d",&a,&b);//从键盘读取数据
	if(a > b)
	{
		printf("%d\n",a);
	}
	else
	{
		printf("%d\n",b);
	}
	return 0;
}

int Min(int a,int b)//形式参数,形参
{
	if(a < b)
	{
		printf("%d\n",a);
	}
	else
	{
		printf("%d\n",b);
	}
	return 0;
}

/*
//1.改名
int Max()//函数定义完之后.可以使用,使用方法类似printf
{
	int a;
	int b;
	printf("请输入两个整数\n");
	scanf("%d%d",&a,&b);//从键盘读取数据
	if(a > b)
	{
		printf("%d\n",a);
	}
	else
	{
		printf("%d\n",b);
	}
	return 0;
}
*/

//求两个数的最小值


int main()
{
	//Max();//调用
	//Max(10,20);
	//Max(100,20);
	Min(10,20);//实际参数,实参
	Min(100,20);

	//printf("abc");

	return 0;
}

/* 0.功能代码放在main函数中
int main()
{
	int a;
	int b;
	printf("请输入两个整数\n");
	scanf("%d%d",&a,&b);//从键盘读取数据
	if(a > b)
	{
		printf("%d\n",a);
	}
	else
	{
		printf("%d\n",b);
	}
	return 0;
}
*/

/*
//5!
int main()
{
	int t= 1;
	for(int i=2;i<=5;i++)
	{
		t *= i;//t = t*i;
	}
	printf("%d\n",t);
	return 0;
}
*/
/*
//判断n是否为素数,是则输出
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=2;i<n;i++)
	{
		if(n%i == 0)
		{
			printf("%d不是素数\n",n);
			return 0;//结束该函数
		}
	}
	printf("%d是素数\n",n);

	return 0;
}
*/

/*
int main()
{
	for(int i=2000;i<=2500;i++)
	{
		if(i%4==0 && i%100!=0 || i%400==0)
		{
			printf("%d\n",i);
		}
	}
	return 0;
}
*/