#include <stdio.h>
#include <math.h>
#include <float.h>
/*
分支语句:if,switch
第一种写法:
if(表达式1)
{ 
	语句块1 
}
第二种写法:
if(表达式1)
{ 
	语句块1 
}
else//否则
{
	语句块2
}
//第三种
if()
else if()
else if()...
else

浮点数和0比较(EPS为误差值)
  if(-EPS<=x && x<=EPS) //x==0
  if(x<-EPS)//x<0
  if(x>EPS)//x>0

switch(整型表达式)//其它类型不能使用switch内置的等号判断相等
{//bool,char,short,int,long,long long,enum可以(都是整型)
  //float,double ,char *,struct 都不可以
    case 常量标签1:
	      语句块1
		  break;
	case 常量标签2:
	      语句块2
		  break;
		  .......
	default://默认,可以不写
	     语句块n
		 break;
}
switch:当表达式和某一个标签值相同时,进入,如果都不相同有default则进入default,没有则不进入
           遇到break或者swtch结束时才出
switch考点:1.从哪进(和case值相同);2.从哪出(遇到break,switch结束)
*/

void Show1(int a)
{
	int b = 2;
	switch(a)
	{
	case 0:
		printf("0\n");
		break;
	case 1:
		printf("1\n");
		break;
	case 2:
	//case b://error
		printf("2\n");
		break;
	default://默认(其它情况)
		printf("other\n");
		break;
	}

	printf("bye\n");
}

void Show(int a)
{
	switch(a)
	{
	case 2:
		printf("2\n");
	case 0:
		printf("0\n");
		break;
	default:
		printf("other\n");
	case 1:
		printf("1\n");
		break;
	}
	printf("bye\n");
}

void Score(char ch)
{
	switch (ch)
	{
	case 'A'://注意字符的写法
		printf(">85\n");
		break;//不能省
	default:
		break;
	}
}

int main()
{
	//Show(0);
	//Show(1);
	Show(3);
	
	return 0;
}

#if 0
//从大到小输出三个数字
void Show(int a,int b,int c)
{
	int tmp;
	if(a < b)
	{
		tmp = a;
		a = b;
		b = tmp;
	}// a>= b

	if(a < c)
	{
		tmp = a;
		a = c;
		c = tmp;
	}//a >= c

	if(b < c)
	{
		tmp = b;
		b = c;
		c = tmp;
	}//b >= c;
	

	printf("%d,%d,%d\n",a,b,c);
}

void Fun(double a,double b,double c)//todo  if elseif ...
{
#define EPS 0.000001
	double x1;
	double x2;
	double d = b*b - 4*a*c;

	if(-EPS<=a && a<=EPS)//if(a == 0)//
	{
		x1 = x2 = -c/b;
		printf("x1=%f,x2=%f\n",x1,x2);
	}
	else//
	{
		if(d > EPS)//d>0
		{
			x1 = (-b+sqrt(d))/(2*a);
			x2 = (-b-sqrt(d))/(2*a);
			printf("x1=%f,x2=%f\n",x1,x2);
		}
		else
		{
			if(-EPS<= d && d<=EPS)//0
			{
				x1 = x2 = -b/(2*a);
				printf("x1=%f,x2=%f\n",x1,x2);
			}
			else //d<0
			{
				printf("无实根\n");
			}
		}
	}
}

int main()
{
	Fun(0,1,2);
	Fun(1,4,1);
	Fun(1,2,1);
	Fun(4,1,4);
	/*Show(10,20,30);
	Show(20,10,30);
	Show(30,20,10);*/

	return 0;
}
#endif