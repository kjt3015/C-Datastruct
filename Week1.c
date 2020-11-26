#include <stdio.h>
#define SIZE 5 //기호상수

/* int main() {
	//실수형(float), 정수형(int), 문자형(char)

	int x;
	int y = 200;

	x = 100;

	printf("x = %d y = %d", x, y);
	// %d = 정수형, %f, %fl = 실수형 / %c = 문자1개 / %s = 문자열
	
	return 0;
}
*/

/*
int main() {
	int age = 26;
	printf("안녕하세요! 제 이름은 김준태 입니다.\n제 나이는 %d세 입니다.", age);
}
*/

/*
int main() {
	//배열 선언
	//자료형 배열이름[배열크기];

	int a[3];

	a[0] = 1;
	a[1] = 2;
	a[2] = 3;

	for (int i = 0; i < 3; i++) {
		printf("a[%d] = %d\n", i, a[i]);
	}

	return 0;
}
*/

/*
int main() {

	int a[SIZE];
	int b[SIZE] = {1,2};
	int c[SIZE] = {1, };

	int d[] = { 1,2,3,4,5 };

	for (int i = 0; i < SIZE; i++) {
		//printf("a[%d] = %d\n", i, a[i]);
		//printf("b[%d] = %d\n", i, b[i]);
		//printf("c[%d] = %d\n", i, c[i]);
		printf("d[%d] = %d\n", i, d[i]);
	}

	return 0;
}
*/

/*
int add(int a, int b) {
	int result = a + b;
	return result;
}
int sub(int c, int d) {
	int result = c - d;
	return result;
}

int main() {

	int n1 = 3, n2 = 3;

	printf("%d\n", add(n1, n2));
	printf("%d\n", sub(n1, n2));


	return 0;
}
*/

/*
int main() {

	int i = 10;
	float f = 12.3;
	char c = "A";

	//주소 연산자 &

	printf("%p\n", &i);
	printf("%p\n", &f);
	printf("%p\n", &c);

	return 0;
}
*/

/*
int main() {

	//포인터
	//자료현 *변수이름;
	int num = 10;
	int* p;//정수를 가리키는 포인터
	
	p = &num;//변수  num의 주소가 포인터 p에 대입

	printf("num의 주소 = %u\n 포인터 값 = %d\n 포인터가 가리키는 값 = %d\n num의 값 = %d", &num, p, *p, num);

	return 0;
}
*/

/*
int main(void) {
	char* pc;
	int* pi;
	double* pd;

	pc = (char*)10000;
	pi = (int*)10000;
	pd = (double*)10000;

	printf("증가전 pc = %u, pi = %u, pd = %u", pc, pi, pd);

	pc++;
	pi++;
	pd++;

	printf("증가후 pc = %u, pi = %u, pd = %u", pc, pi, pd);

	return 0;
}
*/

/*
//call-by-value
void modify(int value) {
	value = 99;
}

//참조에 의한 호출

//void modify(int* value) {
//	*value = 99;
//}

int main() {

	int num = 1;

	modify(&num);

	printf("%d", num);

	return 0;
}
*/

/*
void swap(int *a, int *b) {
	int temp;

	temp = *a;//포인터가 가르키고있는 값
	*a = *b;
	*b = temp;
}

int main() {
	int a = 10, b = 20;

	swap(&a, &b);

	printf("a = %d\nb = %d", a, b);
	
	return 0;
}
*/


int main() {
	int a[] = { 10, 20, 30, 40 };// a라는 배열을 선언
	int* p = a; //*p 에 a를 대입 (p에 a의 주소가 아닌 a의 값을 대입했는데 괜찮은지?)

	printf("배열의 이름 = %p\n", a);//변수 a를 불럿으니 변수a의 값 배열이 등장해야하는데 출력해보면 15727256이 출력됨a의 주소와 같은 값임
	printf("첫번째 원소의 주소 = %p\n", &a[0]);

	printf("a[0] = %d a[1] = %d a[2] = %d\n", a[0], a[1], a[2]);
	printf("a[0] = %d a[1] = %d a[2] = %d\n", p[0], p[1], p[2]);//왜?? *p는 선언했지만 p는 선언하지 않았음
	printf("a[0] = %d a[1] = %d a[2] = %d\n", *p, *(p+1), *(p+2));

	return 0;
}


/*
void sub(int*)

int main() {

	int large_data[] = { 1,2,3,4 ,5,6,7,8,9,10,11,12,13,14 };

	sub(large_data);

	return 0;
}
*/




/*
//void리턴하는게 없을때 int리턴하는게 있을때
//벼열 요소의 평균을 계산하는 함수
int get_array_avg() {
	int sum = 0;

	for (int i = 0; i < n; i++) {
		sum += values[i];
	}

	return sum / n;
}
// 배열의 요소를 화면에 출력하는 함수
void print_array() {
	printf("[");
	for (int i = 0; i < SIZE; i++)
		printf("%d", values[i]);
	printf("]\n");
}

int main() {
	int data[SIZE] = { 10,20,30,40,50 };
	int result;

	print_array();
	result = get_array_avg();

	printf("배열 원소들의 평균 = %d", result);

	return 0;
}
*/


//[10 20 30 40 50]
//배열 원소들의 평균 = 30