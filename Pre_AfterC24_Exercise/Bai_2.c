#include<stdio.h>
#include<stdint.h>

int main()
{
	int n = 0;
	int arr[100] = { 0 };
	/* Nhap n va gia tri cac phan tu cua mang */
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

	/* In ra tat ca cac phan tu cua mang */
	printf("arr[%d] = {", n);

	for (int i = 0; i < n; i++)
	{
		printf(" %d ", arr[i]);
	}

	printf("} \n");

	/* In dia chi cac phan tu cua mang */
	printf("Dia chi cua tung phan tu: \n");

	for (int i = 0; i < n; i++)
	{
		printf("&arr[%d] = %p \n", i, &arr[i]);
	}

	/** Dinh nghia lai mang voi kieu uint8_t **/

	uint8_t arr_8[100] = { 0 };
	printf("Dinh nghia lai mang voi kieu uint8_t: \n");
	
	/* Nhap n va gia tri cac phan tu cua mang */
	do
	{
		printf("Nhap so phan tu n = ");
		scanf_s("%d", &n);
	} while (n <= 0 || n > 16);

	printf("Khoi tao mang int arr_8[%d] \n", n);
	printf("Nhap gia tri tung phan tu:\n");

	for (int i = 0; i < n; i++)
	{
		printf("arr_8[%d] = ", i);
		scanf_s("%hhd", &arr_8[i]);
	}

	/* In dia chi cac phan tu cua mang */
	printf("Dia chi cua tung phan tu: \n");

	for (int i = 0; i < n; i++)
	{
		printf("&arr_8[%d] = %p \n", i, &arr_8[i]);
	}

	/** Dinh nghia lai mang voi kieu uint16_t **/

	uint16_t arr_16[100] = { 0 };
	printf("Dinh nghia lai mang voi kieu uint16_t: \n");

	/* Nhap n va gia tri cac phan tu cua mang */
	do
	{
		printf("Nhap so phan tu n = ");
		scanf_s("%d", &n);
	} while (n <= 0 || n > 16);

	printf("Khoi tao mang int arr_16[%d] \n", n);
	printf("Nhap gia tri tung phan tu:\n");

	for (int i = 0; i < n; i++)
	{
		printf("arr_16[%d] = ", i);
		scanf_s("%hd", &arr_16[i]);
	}

	/* In dia chi cac phan tu cua mang */
	printf("Dia chi cua tung phan tu: \n");

	for (int i = 0; i < n; i++)
	{
		printf("&arr_16[%d] = %p \n", i, &arr_16[i]);
	}

}