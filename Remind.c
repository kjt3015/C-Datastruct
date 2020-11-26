//변수를 지정하고 변수를 함수를 이용해서 값을 변경해 보자

#include <stdio.h>

void changeValue(int cValue) {
	cValue = 326;
}

void changeValueForPointer(int *originValue) {
	*originValue = 326;
}

int main() {
	int originValue; //변수의 선언
	originValue = 419; //변수의 값을 지정

	printf("OriginValue: %d\n", originValue); //초기값 확인

	changeValue(originValue);
	printf("cValue: %d\n", originValue);
	int* p;
	p = &originValue;

	printf("포인터: %d\n", *p);

	changeValueForPointer(&originValue);
	printf("포인터를 사용하여 바꾼 Value: %d\n", originValue);
	printf("originValue의 주소값: %p\n", &originValue);
	printf("originValue의 주소값을 저장한 p의 값: %p\n", p);

	return 0;
}

/*
	변수를 지정한다.
	함수를 만든다
	함수에서 변수의 값을 변경시켜준다
*/