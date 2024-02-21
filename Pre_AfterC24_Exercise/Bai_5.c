#include<stdio.h>
#include<stdint.h>
#include<string.h>

struct infor {
	char name[32];
	char mssv[8];
	uint8_t course_c;
};

void infor_input(struct infor* stu_infor)
{
	printf("Nhap vao [ten][ho] cua nguoi code: ");
	scanf_s("%s", stu_infor->name, 32);
	printf("Nhap vao MSSV cua nguoi code: ");
	scanf_s("%s", stu_infor->mssv, 8);
	printf("Nhap so thu tu khoa C da tham gia: ");
	scanf_s("%hhu", &(stu_infor->course_c));
}

void infor_print(struct infor* stu_infor)
{
	printf("[Ten][Ho] cua nguoi code : %s \n", stu_infor->name);
	printf("MSSV: %s \n", stu_infor->mssv);
	printf("Khoa: C%hhu", stu_infor->course_c);
}

int main()
{
	struct infor student;
	infor_input(&student);
	infor_print(&student);
}