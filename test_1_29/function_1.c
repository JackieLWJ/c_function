//
//#include<stdio.h>
//Swap(int* pa, int* pb)
//{
//	int temp = 0;
//	temp = *pa;
//	*pa = *pb;
//	*pb=temp;
//
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int* pa = &a;
//	int* pb = &b;
//	printf("a=%d,b=%d\n", a, b);
//	//temp = a;//a=10,temp=10,b=20
//	//a=b;//a=20,temp=10,b=20
//	//b = temp;//a=20,temp=10,b=10
//	Swap(&a,&b);
//	printf("a=%d,b=%d\n",a,b);
//	return 0;
//
//}
//
//#include<stdio.h>
//#include<math.h>
//int is_prime(int n)
//{	
//	int test = 2;
//	while (test <= sqrt(n))
//	//{
//		if (n % test == 0)
//		{
//			return 0;
//		}
//		if (n % test != 0)
//		{
//			test++;
//			if (test == n)
//			{
//				return 1;
//			}
//		}
//	}
//	
//}
//int main()
//{
//	int i = 0;
//	for (int i = 100; i <= 200; i++)
//	{
//		if (is_prime(i) == 1)
//		{
//			printf("%d是素数\n", i);
//		}
//	}
//	return 0;
//
//}
//#include<stdio.h>
//int is_leap_year(int n)
//{
//	if ((n % 4 == 0 && n % 100 != 0) || (n % 100 == 0))
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (is_leap_year(year) == 1)
//		{
//			printf("year=%d是闰年\n", year);
//		}
//	}
//	return 0;
//}
#include<stdio.h>
int binary_search(int arr[], int k, int sz)
{
	int left = 0;
	int right = sz - 1;
	
	while (left <= right)
	{	
		int mid = (left + right) / 2;
		if (k > arr[mid])
		{
			left = mid + 1;
		}
		else if (k < arr[mid])
		{
			right = mid - 1;
		}
		else
		{
			return mid;
		}
	}
	return -1;
}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 8;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int ret=binary_search(arr, k, sz);
	if (ret == -1)
	{
		printf("没找到\n");
	}
	else
	{
		printf("下标是%d\n", ret);
	}
	return 0;
 }

//#include<stdio.h>
//Add(int* p)
//{
//	(*p)++;
//}
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("%d", num); Add(&num);
//	printf("%d", num); Add(&num);
//	printf("%d", num);
//	return 0;
//}
//int main()
//{
//	printf("%d", printf("%d", printf("%d",43)));
//	return 0;
//}