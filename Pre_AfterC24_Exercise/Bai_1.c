#include<stdio.h>

int main()
{
	int n = 0;
	int arr[100] = { 0 };
	do
	{
		printf("Nhap so phan tu n = ");
		scanf_s("%d", &n);
	} while (n <= 0 || n > 16);

	printf("Khoi tao mang int arr[%d] \n", n);
	printf("Nhap gia tri tung phan tu:\n");

	for (int i = 0; i < n; i++)
	{
		printf("arr[%d] = ", i);
		scanf_s("%d", &arr[i]);
	}

	printf("arr[%d] = {", n);

	for (int i = 0; i < n; i++)
	{
		printf(" %d ", arr[i]);
	}

	printf("} \n");
	printf("Dia chi cua tung phan tu: \n");

	for (int i = 0; i < n; i++)
	{
		printf("&arr[%d] = %p \n", i, &arr[i]);
	}

}