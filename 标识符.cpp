#include <stdio.h>

/*
返回值 函数名(参数列表)
{
    函数体
}
变量:可以修改的值
     定义  :   数据类型  变量名;
局部变量:定义在函数内部或者参数列表的变量.
整数默认为int,小数默认是double
标识符:函数名,变量名,宏名
   1.由字母,数字和下划线_组成
   2.不能以数字开头
   3.关键字不能使用
   4.区分大小写
   基本要求:1.变量名小写;2.函数名首字母大写Max;3.宏名全大写PI
                  4.循环时使用i,j,k;5.临时变量tmp,标记变量flg
printf:
       %c:格式化字母   
	   %d:格式化整型数字,
	   %f:格式化浮点数(float,double)
	   %x:以十六进制输出整数
	   %08x:以十六进制输出整数,输出8个十六进制数字,如果不足则左边补0
	   %s:格式化字符串
scanf: 非常容易出错,如果程序有问题,一定验证数据读取是否成功
      1.后面需要地址列表
	  2.输入的数据和格式化符必须一一匹配.禁止使用\n
	  3.格式化符和变量类型一定要匹配
getchar:获取一个字符
putchar:输出一个字符
bool:true真,false 假
*/

double FtoC(double f)
{
	double c = 5.0/9*(f-32);
	return c;
}

//判断n是否能被15整除,如果可以则返回true,不可以则返回false
bool IsDiv15(int n)
{
	return n%15==0;

	if(n%15 == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

//判断n是否为闰年,是返回true,不是返回false
bool IsLeapYear(int n)
{
	return n%4==0 && n%100!=0 || n%400==0;
}

//求m和n的最大公约数
int MaxCom(int m,int n)
{
	int r;//保存余数
	while((r=m%n) != 0)
	{
		m = n;
		n = r;
	}
	return n;
	//int tmp;//保存公约数
	//for(int i=1;i<=m;i++)
	//{
	//	if(m%i==0 && n%i==0)
	//	{
	//		tmp = i;
	//	}
	//}
	//return tmp;
}

int main()
{
	printf("%d\n",MaxCom(10,15));
	printf("%d\n",MaxCom(15,10));
	printf("%d\n",MaxCom(49,15));
	printf("%d\n",MaxCom(100,10));
	printf("%d\n",MaxCom(10,100));
	//for(int i=2000;i<2500;i++)
	//{
	//	if(IsLeapYear(i))
	//	{
	//		printf("%d\n",i);
	//	}
	//}
	/*for(int i=1;i<100;i++)
	{
		if(IsDiv15(i))
		{
			printf("%d 能被3和5整除\n",i);
		}
	}*/
	/*if(IsDiv15(100))
	{
		printf("是\n");
	}
	else
	{
		printf("不是\n");
	}*/
	/*printf("%f\n",FtoC(100));
	printf("%f\n",FtoC(50));*/

	return 0;
}

#if 0
 int main()
 {
	 //int a;
	 //int b;
	 //scanf("%d,%d\n",&a,&b);//容易出错
	// printf("a=%d,b=%d\n",a,b);

	 /*float c;
	 scanf("%d",&c);
	 printf("%f\n",c);*/
	 //double d;//需要用lf
	 //scanf("%lf",&d);
	 //printf("%f\n",d);
	 //char ch = getchar();//while((ch=getchar()) !='\n')//读取一行字符
	 //printf("ch=%c\n",ch);
	 char ch;
	 while((ch=getchar()) !='\n')
	 {
		 putchar(ch);
	 }
	 return 0;
 }
#endif

/*
int main()
{
	double a = 12.3;
	float b = 23.5f;
	char *str = "abcde";
	printf("%c\n",'x');
	printf("%lf,%f\n",a,b);
	printf("%s\n",str);
	printf("%08x\n",100);//

	return 0;
}
*/

/*
int Max(int a,int b)
{
	return a>b ? a : b;
}

int main()
{
	int a_1 = 10;
	int a = 10;
	int  A = 20;
	int _;
	int __;
	printf("%d,%d\n",a,A);
	//int float;//error
	//int 1;//error
	//1=  2;
//	int a+b = 20;//error
	//int "a";
	//int 温度 = 9;
	//printf("%d\n",温度);

	return 0;
}
*/
/*
int main()
{
	int a = 10;//
	int b;//默认值为随机值,在开发时,一般程序会崩溃
	b = 20;
	printf("%d\n",b);
	float c = 12.5f;

	//d = 45;//error

	return 0;
}
*/