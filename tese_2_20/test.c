#include<stdio.h>
//int main()
//{
//	printf("´óË§±Æ\n");
//	main();
//	return 0;
//}
//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//int main()
//{
//	unsigned int num = 1234;
//	//scanf_s("%d", &num);
//	print(num);
//	return 0;
//}
//int my_strlen(char* str)
//{
//	//int count = 0;
//	//while (*str != '\0')
//	//{
//	//	count++;
//	//	str++;
//	//}
//	//return count;
//	if (*str != '\0')
//	{
//		return 1 + my_strlen(str + 1);
//	}
//	else
//		return 0;
//}
//int main()
//{
//	char arr[] = "lalal";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}
//int fac(int n)
//{
//	int sum = 1;
//	while (n > 1)
//	{
//		sum *= n;
//		n--;
//	}
//	return sum;
//}
//int fac2(int n)
//{
//	if (n <= 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return n * fac2(n - 1);
//	}
//}
//int main()
//{
//	int n = 5;
//	int ret=fac2(n);
//	printf("%d\n", ret);
//	return 0;
//}
//int count = 0;
int fib(int n)
{
	/*if (n == 3)
	{
		count++;
	}*/
	if (n < 3)
	{
		return 1;
	}
	else
	{
		return fib(n - 1) + fib(n - 2);
	}
}
int fib1(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;
	while (n > 2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}
int main()
{
	int n =50;
	
	int ret=fib1(n);
	printf("%d\n", ret);
	
	return 0;
}