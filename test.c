#include<stdio.h>

void change() {

}

int main() {
	int a = 5;
	printf("a의 값: %d\n", a);
	printf("a의 주소 값: %d\n", &a);

	int p = &a;
	printf("p의 값: %d\n", p);
	int* t = &a;
	printf("t의 값: %d\n", t);
	printf("*t의 값: %d\n", *t);
	int* v = a;
	printf("v의 값: %d\n", v);
	printf("*v의 값: %d\n", *v);

	return 0;
}