#include <stdio.h>
#include <math.h>
#include <string.h>

/*
for(表达式1;表达式2;表达式3)
{
	语句块1
}
表达式1:初始化,执行一次,最早被执行
表达式2:判断,每次都执行,进入循环
表达式3:步进,每次都执行,执行完语句块1之后再执行
while(表达式1)
{
    语句块1
}
表达式1:为真循环继续,为假循环结束.类似for中表达式2

do 
{
	语句块1
}while(表达式1);
表达式1:为真循环继续,为假循环结束.类似for中表达式2
while保证语句块至少执行0次,dowhile保证语句块至少执行1次,当表达式1有可能为真时,
while和dowhile没有任何的区别
break:跳出一层循环,或者跳出switch
continue:结束本次(趟)循环,直接进入下一次(趟)循环
*/

double GetPi()
{
	double sum = 0;
	double m = 1;//分母
	double n = 1;//分子
	int flg = 1;
	while(m < 100000)//while(n/m >1e-6 )//0.000001
	{
		sum += flg*n/m;
		flg *= -1;
		m += 2;
	}
	return sum*4;
}

//1+2+3+...+x<1000
//1+2+3+...+x + (x+1) > 1000
//求x的值
int SumTo1000()
{
	int tmp = 0;
	int i;
	for(i=1; ;i++)
	{
		tmp += i;
		if(tmp > 1000)
		{
			break;
		}
	}
	printf("%d\n",tmp);
	return i-1;
}

void Show(int n)
{
	for(int i=1;i<=n;i++)
	{
		if(i%15 != 0)
			continue;
		printf("%d\n",i);
		/*if(i%15 == 0)
		{
			printf("%d\n",i);
		}*/
	}
}

int main()
{
	printf("%f\n",GetPi());
	//Show(100);
	//int x = SumTo1000();
	//printf("%d\n",x);

	//if(x > 10)
	//{
	//	printf("x>10\n");
	//	//break;//error
	//}

	return 0;
}

#if 0
//1+2+3+...+n
int Sum_for1(int n)
{
	int tmp = 0;
	for(int i=1;i<=n;i++)
	{
		tmp += i;
	}
	return tmp;
}

int Sum_for(int n)
{
	int tmp = 0;
	int i=1;
	for( ; ; )
	{
		if(i > n)
		{
			break;
		}
		tmp += i;

		i++;
	}
	return tmp;
}

//1+2+3+...+n
int Sum_while(int n)
{
	int tmp = 0;
	int i = 1;
	while(i <= n)
	{
		tmp += i;
		i++;
	}
	return tmp;
}

int Sum_dowhile(int n)
{
	int tmp = 0;
	int i = 1;
	do
	{
		tmp += i;
		i++;
	}while(i <= n);
	return tmp;
}

int main()
{
	printf("%d\n",Sum_dowhile(1));
	//printf("%d\n",printf("0123"));//todo

	strlen("abc");

	/*
	int i;
	for(i=0,printf("#1,%d\n",i);
		printf("#2,%d\n",i),i<3;
		//i<3,printf("#2,%d\n",i);//error
		i++,printf("#3,%d\n",i))
	{
		printf("**1,%d\n",i);
	}
	*/
	/*for(int i=0;i<3;i++)
	{
		printf("%d\n",i);
	}*/

	return 0;
}
#endif

#if 0
double GDP(double r,int n)
{
	return pow(1+r,n);
}

double Money5(double m,double r)
{
	return m*(1+5*r);
}

double Money2_3(double m,double r2,double r3)
{
	double p = 1000*(1+2*r2);//两年的本息和
	return p*(1+3*r3);
}

double Money1(double m,double r)
{
	double p = m;
	for(int i=0;i<5;i++)
	{
		p = p*(1+r);
	}
	return p;
}

int main()
{
	char a = 197;//-128~127   转二进制 ->算值 1100 0101->-0011 1011->-59
	char b = 198;//-58
	printf("%c,%c\n",a,b);//a,b
	printf("%d,%d\n",a,b);

	return 0;
}

/*
int main()
{
	printf("%f\n",Money5(1000,0.0585));
	printf("%f\n",Money2_3(1000,0.0468,0.054));
	printf("%f\n",Money1(1000,0.0414));
	//printf("%f\n",GDP(0.09,10));

	return 0;
}
*/
#endif