#include <stdio.h>
#include <math.h>
#include <float.h>
/*
��֧���:if,switch
��һ��д��:
if(���ʽ1)
{ 
	����1 
}
�ڶ���д��:
if(���ʽ1)
{ 
	����1 
}
else//����
{
	����2
}
//������
if()
else if()
else if()...
else

��������0�Ƚ�(EPSΪ���ֵ)
  if(-EPS<=x && x<=EPS) //x==0
  if(x<-EPS)//x<0
  if(x>EPS)//x>0

switch(���ͱ��ʽ)//�������Ͳ���ʹ��switch���õĵȺ��ж����
{//bool,char,short,int,long,long long,enum����(��������)
  //float,double ,char *,struct ��������
    case ������ǩ1:
	      ����1
		  break;
	case ������ǩ2:
	      ����2
		  break;
		  .......
	default://Ĭ��,���Բ�д
	     ����n
		 break;
}
switch:�����ʽ��ĳһ����ǩֵ��ͬʱ,����,���������ͬ��default�����default,û���򲻽���
           ����break����swtch����ʱ�ų�
switch����:1.���Ľ�(��caseֵ��ͬ);2.���ĳ�(����break,switch����)
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
	default://Ĭ��(�������)
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
	case 'A'://ע���ַ���д��
		printf(">85\n");
		break;//����ʡ
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
//�Ӵ�С�����������
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
				printf("��ʵ��\n");
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