#include <stdio.h>
#include <math.h>

/*
����ֵ   ������(�����б�)
{
    ������
}
1.���ܺ�������д��main������,������һ������
     ��main����
2.��ͨ��scanf��ȡ����,Ӧ��ͨ�������б�������

3.�ڹ��ܺ����в�ͨ��printf���,����ͨ������ֵ���ؽ��
    �������ֵ�ж��,�򲻷���,����ֱ�����

void :���η���ֵ,��ʾû�з���ֵ
�ֲ�����:�����ں����ڲ����߲����б�ı���.Ĭ��ֵΪ���ֵ(-858993460),����ֻ�ڱ�������Ч

4.����:�����޸ĵ���.����
     ��������10,С��21.5,2.15e1,2.15+e,2.15e-1,
	 �ַ�����,�ַ���''��������,'a', '0', 'A', '\0', '\n',ע��''��ֻ�ܰ���һ���ַ�
	                                          97  48 65  0     ����
	�ַ�������,��""����������0�������ַ�,���� "abc"
	const ����,const int ca = 10;
	��,#define ����  �滻������   ���� 
	#define PI 3.14    
	�����Ҫ���������������Լ�������

5.����:ֵ���Ըı�.�ȶ����ʹ��
*/

#define PI 3.1415926

int main()
{
	//10  = 11;//error
	int a = 10;
	a = 11;//ok
	//21.5 = 30;//error
	2.15e1;//21.5��ѧ������  2.15*10^1
	//21*a
	//'a' = 'b';//error,97 = 98
	printf("%c,%d\n",'a','a');//%c����ַ�,%d�������
	printf("%c,%d\n",97,97);
	//printf("%c,%d\n\a",'\0','\0');//����
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
//��x!
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
//���2000~2500֮�������
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

void Max1()//��������
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

int Max(int a,int b)//��������
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
{//ͨ��Maxʵ�������������ֵ
	//�������в�����ʹ��>,<
	int d = Max(a,b);
	int e = Max(d,c);
	//int e = Max(Max(a,b),c);
	//printf("%d\n",e);
	return e;
}

int main()//��������
{
	//IsLeapYear();
	//5^9.5
	double a = pow(2.0,10);
	printf("%f\n",a);
	//printf("hello\n");
	int b = Max(10,20);//����,��������
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

