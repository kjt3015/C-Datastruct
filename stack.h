#pragma once

//typedef int element; //���� ����(element)�� �ڷ����� int�� ��ü

typedef struct stackNode { //������ ��带 ����ü�� ����
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