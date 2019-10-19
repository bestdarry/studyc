#include <stdio.h>
/*
整数默认为int,小数默认为double
():
    1.用于提升优先级,例如((3+4)*2+3)*4
	2.用于函数
逻辑谓词:真:非0;    假:0,注意,真转成数字是1,假转成数字是0
    !:非,不是.
	表达式1&&表达式2:且,表达式1为真并且表达式2为真,才为真,其它情况为佳.注意短路现象
	表达式1 || 表达式2:或,表达式1或者表达式2,只有有一个为真就为真.注意短路现象
++,--:前置,后置
位运算符:针对整型的二进制
12         0000 1100
13         0000 1101
~12      1111 0011  按位取反
12&13  0000 1100  按位与,二进制相同位都为1才为1
12 | 13  0000 1101  按位或:二进制相同的位只要有一个1就为1
12^13   0000 0001  按位异或:二进制相同的位不一样才为1
12<<1  000 11000   24=12*2 按位左移,右边补0
12<<2  00 110000   48=12*4
12>>1  00000 110  6=12/2  按位右移,左边补符号位
12>>2  000000 11  3=12/4
12>>3  00000 1     1=12/8

a/b:a除以b,不能除0,整除:整数/整数,结果为整数(丢弃小数)  3/2 == 1,5/2==2
sizeof:占用的字节数
a%b:取余,得到余数.b不能为0;a,b必须是整数
=:赋值,将左边的值赋值给右边
==:等号,注意不要写成=
!=:不等
表达式1 ? 表达式2 : 表达式3 .表达式1为真则执行表达式2,否则执行表达式3

*/

/*
int main()
{
	int a = 10;
	int b = 20;

	a += 5;//a = a+5;
	a += b;//a = a+b;
	a /= 5;//a = a/5;
	a = a -b;//a-=b;
	a = a*10;//a *=10;
	a = a^b;//a ^=b;
	a = a&b;//a &= b;
	a = a|10;//a |= b;
	a = a<<1;//a <<= 1;
	a = a>>1;// a>>=1;
	a = a%100;//a %= 100;
	int c,d,e;
	

	return 0;
}
*/

#if 0
int main()
{
	int a;
	int b;
	int c;
	scanf("%d%d",&a,&b);
	c = a>b ? a : b;
	/*if(a > b)
		c = a;
	else
		c = b;*/
	printf("最大值=%d\n",c);
	/*int a = 10;
	if(a = 100)
	{
		printf("相等\n");
	}
	else
	{
		printf("不等\n");
	}*/

	//printf("%d\n",5%3);//2
	//printf("%d\n",-5%3);//-5/3= -1  -2
	//printf("%d\n",5%-3);//5/-3=-1   2
	//printf("%d\n",-5%-3);//-5/-3=1  -2

	return 0;
}
#if 0

#if 0
int main()
{
	printf("%d\n",sizeof(char));//1
	printf("%d\n",sizeof(short));//2
	printf("%d\n",sizeof(int));//4
	printf("%d\n",sizeof(long));//4
	printf("%d\n",sizeof(long long));//8
	printf("%d\n",sizeof(float));//4
	printf("%d\n",sizeof(double));//8
	printf("%d\n",sizeof(long double ));//long double >= double 8
	printf("%d\n",sizeof(unsigned char));//1
	printf("%d\n",sizeof(unsigned int));//4
	printf("%d\n",sizeof(1));//4  int
	printf("%d\n",sizeof(2.3));//8 double

	/////////////////
	printf("---------------\n");
	printf("%d\n",sizeof(char*));//
	printf("%d\n",sizeof(short*));//
	printf("%d\n",sizeof(int**));//
	printf("%d\n",sizeof(long*));//
	printf("%d\n",sizeof(long long******));//
	printf("%d\n",sizeof(float**));//

	/*
	float a = 5/2;
	float b = (float)5/2;
	float c = 5.0/2;
	float d = 2.3f;//用float类型表示2.3
	printf("%f,%f,%f\n",a,b,c);
	*/
	return 0;
}
#endif

/*
int main()
{
	int a = 1;
	int b = 0;
	int c = 0;
	if(++a && b++ && ++c)
	{
		printf("真\n");
	}
	else
	{
		printf("假\n");//
	}
	printf("%d,%d,%d\n",a,b,c);//2,1,0
	//int i = 10;
	//int j = ++i;//11,11
	//int j = --i;//9,9
	//int j = i++;//11,10
	//int j = i--;//9,10
	//printf("%d,%d\n",i,j);
	//int a = 10;//定义一个整型的变量,a
	//int arr[100];//定义100个长度的整型数组
	//if(1)//真
	//if(2)//真
	//if("haha")//真
	//if(0.5)//真
	//if(0)//假
	//a = !!a;
	//printf("%d\n",a);

	//if(!!-1)//真
	//{
	//	printf("真\n");
	//}
	//else
	//{
	//	printf("假\n");
	//}

	return 0;
}
*/