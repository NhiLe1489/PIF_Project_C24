#include<stdio.h>

int main()
{
	int n = 0;
	int arr[100];
	float sum = 0;
	do
	{
		printf("Nhap so phan tu n = ");
		scanf_s("%d", &n);
	} while (n <= 5);

	printf("Khoi tao mang int arr[%d] \n", n);
	printf("Nhap gia tri tung phan tu:\n");

	for (int i = 0; i < n; i++)
	{
		printf("arr[%d] = ", i);
		scanf_s("%d", &arr[i]);
	}

	for (int i = 0; i < n; i++)
	{
		sum = sum + arr[i];
	}

	printf("Gia tri trung binh la %.3f", sum / 5);
}