#include <stdio.h>
#include <math.h>

/*
返回值   函数名(参数列表)
{
    函数体
}
1.功能函数不能写在main函数中,单独成一个函数
     将main改名
2.不通过scanf获取数据,应该通过参数列表传递数据

3.在功能函数中不通过printf输出,而是通过返回值返回结果
    如果返回值有多个,则不返回,而是直接输出

void :修饰返回值,表示没有返回值
局部变量:定义在函数内部或者参数列表的变量.默认值为随机值(-858993460),并且只在本函数有效

4.常量:不能修改的量.例如
     整数常量10,小数21.5,2.15e1,2.15+e,2.15e-1,
	 字符常量,字符用''包括起来,'a', '0', 'A', '\0', '\n',注意''中只能包含一个字符
	                                          97  48 65  0     换行
	字符串常量,用""包括起来的0个或多个字符,例如 "abc"
	const 常量,const int ca = 10;
	宏,#define 宏名  替换的内容   例如 
	#define PI 3.14    
	宏的主要作用是让数字有自己的名字

5.变量:值可以改变.先定义后使用
*/

#define PI 3.1415926

int main()
{
	//10  = 11;//error
	int a = 10;
	a = 11;//ok
	//21.5 = 30;//error
	2.15e1;//21.5科学计数法  2.15*10^1
	//21*a
	//'a' = 'b';//error,97 = 98
	printf("%c,%d\n",'a','a');//%c输出字符,%d输出整数
	printf("%c,%d\n",97,97);
	//printf("%c,%d\n\a",'\0','\0');//响铃
	const int ca = 10;
	//ca = 20;//error

	/*double r = 5;
	double c = 2*3.14*r;
	double s = 3.14*r*r;*/
	double r = 5;
	double c = 2*PI*r;
	double s = PI*r*r;


	return 0;
}


#if 0
//求x!
long long Fac(int x)
{
	long long tmp = 1;//tmp
	for(int i=2;i<=x;i++)
	{
		tmp *= i;
	}
	return tmp;
}

//1+2+3+...+n
int Sum(int n)
{
	int tmp = 0;//
	for(int i=1;i<=n;i++)
	{
		tmp += i;
	}
	return tmp;
}

int main()
{
	printf("%d\n",Sum(10));
	printf("%d\n",Sum(100));
	printf("%d\n",Sum(1000));
	printf("%lld\n",Fac(15));

	return 0;
}
#endif
/*
int main()
{
	int a = Fac(5);
	printf("%d\n",a);
	Fac(4);
	//printf("%d\n",tmp);
	printf("10!=%d\n",Fac(10));
	int b = 0;
	printf("%d\n",b);

	return 0;
}
*/

/*
int main()
{
	int t = 1;
	for(int i=2;i<=5;i++)
	{
		t *= i;
	}
	printf("%d\n",t);
	return 0;
}
*/

#if 0
//输出2000~2500之间的闰年
void IsLeapYear()
{
	for(int i=2000;i<2500;i++)
	{
		if(i%4==0 && i%100!=0 || i%400==0)
		{
			printf("%d\n",i);
		}
	}
}

void Max1()//函数定义
{
	int a;
	int b;
	scanf("%d%d",&a,&b);
	if(a > b)
	{
		printf("%d\n",a);
	}
	else
	{
		printf("%d\n",b);
	}
}

int Max(int a,int b)//函数定义
{
	/*int a;
	int b;
	scanf("%d%d",&a,&b);*/
	if(a > b)
	{
		//printf("%d\n",a);
		return a;
	}
	else
	{
		//printf("%d\n",b);
		return b;
	}
}

int Max3(int a,int b,int c)
{//通过Max实现三个数的最大值
	//本函数中不允许使用>,<
	int d = Max(a,b);
	int e = Max(d,c);
	//int e = Max(Max(a,b),c);
	//printf("%d\n",e);
	return e;
}

int main()//程序的入口
{
	//IsLeapYear();
	//5^9.5
	double a = pow(2.0,10);
	printf("%f\n",a);
	//printf("hello\n");
	int b = Max(10,20);//调用,测试用例
	//Max(100,20);
	printf("%d\n",b);
	int c = Max3(10,20,30);
	printf("%d\n",c);

	return 0;
}
#endif

//int main()
//{
//	printf("***************\n");
//	printf("Very good\n");
//	printf("***************\n");
//	return 0;
//}

