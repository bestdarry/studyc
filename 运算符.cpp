#include <stdio.h>
/*
����Ĭ��Ϊint,С��Ĭ��Ϊdouble
():
    1.�����������ȼ�,����((3+4)*2+3)*4
	2.���ں���
�߼�ν��:��:��0;    ��:0,ע��,��ת��������1,��ת��������0
    !:��,����.
	���ʽ1&&���ʽ2:��,���ʽ1Ϊ�沢�ұ��ʽ2Ϊ��,��Ϊ��,�������Ϊ��.ע���·����
	���ʽ1 || ���ʽ2:��,���ʽ1���߱��ʽ2,ֻ����һ��Ϊ���Ϊ��.ע���·����
++,--:ǰ��,����
λ�����:������͵Ķ�����
12         0000 1100
13         0000 1101
~12      1111 0011  ��λȡ��
12&13  0000 1100  ��λ��,��������ͬλ��Ϊ1��Ϊ1
12 | 13  0000 1101  ��λ��:��������ͬ��λֻҪ��һ��1��Ϊ1
12^13   0000 0001  ��λ���:��������ͬ��λ��һ����Ϊ1
12<<1  000 11000   24=12*2 ��λ����,�ұ߲�0
12<<2  00 110000   48=12*4
12>>1  00000 110  6=12/2  ��λ����,��߲�����λ
12>>2  000000 11  3=12/4
12>>3  00000 1     1=12/8

a/b:a����b,���ܳ�0,����:����/����,���Ϊ����(����С��)  3/2 == 1,5/2==2
sizeof:ռ�õ��ֽ���
a%b:ȡ��,�õ�����.b����Ϊ0;a,b����������
=:��ֵ,����ߵ�ֵ��ֵ���ұ�
==:�Ⱥ�,ע�ⲻҪд��=
!=:����
���ʽ1 ? ���ʽ2 : ���ʽ3 .���ʽ1Ϊ����ִ�б��ʽ2,����ִ�б��ʽ3

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
	printf("���ֵ=%d\n",c);
	/*int a = 10;
	if(a = 100)
	{
		printf("���\n");
	}
	else
	{
		printf("����\n");
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
	float d = 2.3f;//��float���ͱ�ʾ2.3
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
		printf("��\n");
	}
	else
	{
		printf("��\n");//
	}
	printf("%d,%d,%d\n",a,b,c);//2,1,0
	//int i = 10;
	//int j = ++i;//11,11
	//int j = --i;//9,9
	//int j = i++;//11,10
	//int j = i--;//9,10
	//printf("%d,%d\n",i,j);
	//int a = 10;//����һ�����͵ı���,a
	//int arr[100];//����100�����ȵ���������
	//if(1)//��
	//if(2)//��
	//if("haha")//��
	//if(0.5)//��
	//if(0)//��
	//a = !!a;
	//printf("%d\n",a);

	//if(!!-1)//��
	//{
	//	printf("��\n");
	//}
	//else
	//{
	//	printf("��\n");
	//}

	return 0;
}
*/