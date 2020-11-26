#include<stdio.h>
#include<stdlib.h>
#define SIZE 100

/*
//typedef
int main() {
	//unsigned short int age;
	
	//int n = 20;
	//typedef int numb;

	//numb s = 23;
	

	int point[2] = { 2,3 };

	typedef int Pair[2];
	Pair p; // == int p[2]

	return 0;
}
*/

/*
int main() {

	//typedef int Pair[2];
	//Pair p;
	//p[0] = 1;
	//p[1] = 2;

	typedef struct {
		int x, y;
		char name[10];
	}Pair;

	Pair p;

	p.x = 1;
	p.y = 2;

	printf("x의 값은: %d 이고 y의 값은:%d 입니다.\n", p.x,p.y);

	p.x = 22;
	printf("x의 값을 내가 방금 바꿔봤습니다.\n바뀐 x의값은 : %d 입니다.", p.x);

	return 0;
}
*/

/*
typedef struct {
	char name[10];
	int pr;
}ProductInfo;

void Pdsale(ProductInfo* p, int s) {
	//할인가 = 원가 - 원가 *할인률(%)/100
	p->pr -= p->pr * s / 100;
}

int main() {
	ProductInfo myProduct = {"apple", 10000};
	ProductInfo* ptr = &myProduct;

	printf("%s\n",myProduct.name);

	strcpy(myProduct.name, "change");

	Pdsale(&myProduct, 30);

	printf("%d\n", myProduct.pr);
	printf("%s\n", myProduct.name);

	return 0;
}
*/

/*
typedef struct {
	char name[10];
	int pr;
}ProductInfo;

void Pdswap(ProductInfo *a, ProductInfo *b) {
	ProductInfo temp = *a;
	*a = *b;
	*b = temp;
}

int main() {
	ProductInfo myProduct = { "apple", 10000 };
	ProductInfo* ptr = &myProduct;
	ProductInfo other = { "banana", 20000 };
	
	printf("%d\n", myProduct.pr);
	printf("%s\n", myProduct.name);

	Pdswap(&myProduct, &other);

	printf("%d\n", myProduct.pr);
	printf("%s\n", myProduct.name);
}
*/


//stack
//push, pop

typedef int element;
typedef struct {
	element data[SIZE];
	int top;
}Stack;

//초기화
void init_stack(Stack* s) {
	s->top = -1;
}

int is_empty(Stack* s) {
	return(s->top == -1);//top이 -1이면 비어있다.
}

int is_full(Stack* s) {
	return (s->top == SIZE - 1);
}

//push 삽입함수
void push(Stack* s, int item) {
	if (is_full(s)) {
		printf("꽉 참\n");
		return;
	}
	else s->data[++(s->top)] = item;
}

//삭제함수 pop
element pop(Stack* s) {
	if (is_empty(s)) {
		printf("비어있음\n");
		exit(1);
		return;
	}
	else return s->data[(s->top)--];
}


int main() {
	Stack s;//구조체 생성

	init_stack(&s);

	for (int i = 0; i < 3; i++) {
		push(&s, i);
	}

	for (int i = 1; i < 5; i++) {
		printf("%d\n", pop(&s));
	}
	return 0;
}