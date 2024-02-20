#include<stdio.h>

int main()
{
	int n = 0;
	int arr[100];

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

	int max = arr[0];
	int min = arr[0];

	for (int i = 1; i < n; i++)
	{
		if (max < arr[i])
		{
			max = arr[i];
		}
	}

	printf("Phan tu lon nhat la %d \n", max);

	for (int i = 1; i < n; i++)
	{
		if (min > arr[i])
		{
			min = arr[i];
		}
	}

	printf("Phan tu nho nhat la %d \n", min);
}