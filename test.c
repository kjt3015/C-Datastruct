#include<stdio.h>

void change() {

}

int main() {
	int a = 5;
	printf("a�� ��: %d\n", a);
	printf("a�� �ּ� ��: %d\n", &a);

	int p = &a;
	printf("p�� ��: %d\n", p);
	int* t = &a;
	printf("t�� ��: %d\n", t);
	printf("*t�� ��: %d\n", *t);
	int* v = a;
	printf("v�� ��: %d\n", v);
	printf("*v�� ��: %d\n", *v);

	return 0;
}