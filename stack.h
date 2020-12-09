#pragma once

//typedef int element; //스택 원소(element)의 자료형을 int로 교체

typedef struct stackNode { //스택의 노드를 구조체로 정의
	int data;
	struct stackNode* link;
} stackNode;

stackNode* createStack();
int isEmptyStack(stackNode* top);
void push(stackNode** top, int item);
int pop(stackNode** top);
int peek(stackNode** top);
void deleteStack(stackNode** top);
void printStack(stackNode** top);