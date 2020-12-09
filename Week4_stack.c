#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "stack.h"

stackNode* createStack() {
    return NULL;
}

//stackNode* top;

//������ ���� �������� Ȯ���ϴ� ����
int isEmptyStack(stackNode* top) {
    if (top == NULL) return 1;
    else return 0;
}

//������ top�� ���Ҹ� �����ϴ� ����
void push(stackNode** top, int item) {
    stackNode* temp = (stackNode*)malloc(sizeof(stackNode));
    if (!temp) {
        exit(1);
    }
    temp->data = item;
    temp->link = *top; //���� ��带 top�� ���� ����
    *top = temp; //top ��ġ�� ���� ���� �̵�
}

//������ top���� ���Ҹ� �����ϴ� ����
int pop(stackNode** top) {
    int item;
    stackNode* temp;

    if (isEmptyStack(*top)) {
        return 1;
    }
    else { //������ ���� ����Ʈ�� �ƴ� ���
        temp = *top;
        item = temp->data;
        *top = (*top)->link; //top ��ġ�� ���� ��� �Ʒ��� �̵�
        free(temp); //������ ����� �޸� ��ȯ
        return item; //������ ���� ��ȯ
    }
}

//������ top ���Ҹ� �˻��ϴ� ����
int peek(stackNode** top) {
    if (*top == NULL) { //������ ���� ����Ʈ�� ���
        printf("\n\n Stack is Empty! \n");
        return 0;
    }
    else { //������ ���� ����Ʈ�� �ƴ� ���
        return((*top)->data); //���� top�� ���� ��ȯ
    }
}

void deleteStack(stackNode** top) {
    stackNode* temp, * p;
    p = *top;

    while (p) {
        temp = p->link;
        free(p);
        p = temp;
    }
    *top = NULL;
}

//������ ���Ҹ� top���� bottom ������ ����ϴ� ����
void printStack(stackNode** top) {
    stackNode* p = *top;
    printf("\nSTACK [ ");
    while (p) {
        printf("%d ", p->data);
        p = p->link;
    }
    printf("] \n");
}