#include <stdio.h>
/*
����ֵ  ������(�����б�)
{
    ����ʵ����
}

������Ҫ�ȶ����ʹ��
1.���ܺ�������д��main������,Ӧ�õ����ɺ���
   ֻ��Ҫ��main���븴��,����������
2.����ͨ��scanf��ȡ����
   ͨ�������б�������

void :���η���ֵ,��ʾ�޷���ֵ
*/

//2.ͨ��������������
int Max(int a,int b)//����������֮��.����ʹ��,ʹ�÷�������printf
{
	//int a;
	//int b;
	//printf("��������������\n");
	//scanf("%d%d",&a,&b);//�Ӽ��̶�ȡ����
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

int Min(int a,int b)//��ʽ����,�β�
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
//1.����
int Max()//����������֮��.����ʹ��,ʹ�÷�������printf
{
	int a;
	int b;
	printf("��������������\n");
	scanf("%d%d",&a,&b);//�Ӽ��̶�ȡ����
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

//������������Сֵ


int main()
{
	//Max();//����
	//Max(10,20);
	//Max(100,20);
	Min(10,20);//ʵ�ʲ���,ʵ��
	Min(100,20);

	//printf("abc");

	return 0;
}

/* 0.���ܴ������main������
int main()
{
	int a;
	int b;
	printf("��������������\n");
	scanf("%d%d",&a,&b);//�Ӽ��̶�ȡ����
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
//�ж�n�Ƿ�Ϊ����,�������
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=2;i<n;i++)
	{
		if(n%i == 0)
		{
			printf("%d��������\n",n);
			return 0;//�����ú���
		}
	}
	printf("%d������\n",n);

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