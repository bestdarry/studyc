#include <stdio.h>

/*
����ֵ ������(�����б�)
{
    ������
}
����:�����޸ĵ�ֵ
     ����  :   ��������  ������;
�ֲ�����:�����ں����ڲ����߲����б�ı���.
����Ĭ��Ϊint,С��Ĭ����double
��ʶ��:������,������,����
   1.����ĸ,���ֺ��»���_���
   2.���������ֿ�ͷ
   3.�ؼ��ֲ���ʹ��
   4.���ִ�Сд
   ����Ҫ��:1.������Сд;2.����������ĸ��дMax;3.����ȫ��дPI
                  4.ѭ��ʱʹ��i,j,k;5.��ʱ����tmp,��Ǳ���flg
printf:
       %c:��ʽ����ĸ   
	   %d:��ʽ����������,
	   %f:��ʽ��������(float,double)
	   %x:��ʮ�������������
	   %08x:��ʮ�������������,���8��ʮ����������,�����������߲�0
	   %s:��ʽ���ַ���
scanf: �ǳ����׳���,�������������,һ����֤���ݶ�ȡ�Ƿ�ɹ�
      1.������Ҫ��ַ�б�
	  2.��������ݺ͸�ʽ��������һһƥ��.��ֹʹ��\n
	  3.��ʽ�����ͱ�������һ��Ҫƥ��
getchar:��ȡһ���ַ�
putchar:���һ���ַ�
bool:true��,false ��
*/

double FtoC(double f)
{
	double c = 5.0/9*(f-32);
	return c;
}

//�ж�n�Ƿ��ܱ�15����,��������򷵻�true,�������򷵻�false
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

//�ж�n�Ƿ�Ϊ����,�Ƿ���true,���Ƿ���false
bool IsLeapYear(int n)
{
	return n%4==0 && n%100!=0 || n%400==0;
}

//��m��n�����Լ��
int MaxCom(int m,int n)
{
	int r;//��������
	while((r=m%n) != 0)
	{
		m = n;
		n = r;
	}
	return n;
	//int tmp;//���湫Լ��
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
			printf("%d �ܱ�3��5����\n",i);
		}
	}*/
	/*if(IsDiv15(100))
	{
		printf("��\n");
	}
	else
	{
		printf("����\n");
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
	 //scanf("%d,%d\n",&a,&b);//���׳���
	// printf("a=%d,b=%d\n",a,b);

	 /*float c;
	 scanf("%d",&c);
	 printf("%f\n",c);*/
	 //double d;//��Ҫ��lf
	 //scanf("%lf",&d);
	 //printf("%f\n",d);
	 //char ch = getchar();//while((ch=getchar()) !='\n')//��ȡһ���ַ�
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
	//int �¶� = 9;
	//printf("%d\n",�¶�);

	return 0;
}
*/
/*
int main()
{
	int a = 10;//
	int b;//Ĭ��ֵΪ���ֵ,�ڿ���ʱ,һ���������
	b = 20;
	printf("%d\n",b);
	float c = 12.5f;

	//d = 45;//error

	return 0;
}
*/