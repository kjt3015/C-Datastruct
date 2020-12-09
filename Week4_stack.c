#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "stack.h"

stackNode* createStack() {
    return NULL;
}

//stackNode* top;

//스택이 공백 상태인지 확인하는 연산
int isEmptyStack(stackNode* top) {
    if (top == NULL) return 1;
    else return 0;
}

//스택의 top에 원소를 삽입하는 연산
void push(stackNode** top, int item) {
    stackNode* temp = (stackNode*)malloc(sizeof(stackNode));
    if (!temp) {
        exit(1);
    }
    temp->data = item;
    temp->link = *top; //삽입 노드를 top의 위에 연결
    *top = temp; //top 위치를 삽입 노드로 이동
}

//스택의 top에서 원소를 삭제하는 연산
int pop(stackNode** top) {
    int item;
    stackNode* temp;

    if (isEmptyStack(*top)) {
        return 1;
    }
    else { //스택이 공백 리스트가 아닌 경우
        temp = *top;
        item = temp->data;
        *top = (*top)->link; //top 위치를 삭제 노드 아래로 이동
        free(temp); //삭제된 노드의 메모리 반환
        return item; //삭제된 원소 반환
    }
}

//스택의 top 원소를 검색하는 연산
int peek(stackNode** top) {
    if (*top == NULL) { //스택이 공백 리스트인 경우
        printf("\n\n Stack is Empty! \n");
        return 0;
    }
    else { //스택이 공백 리스트가 아닌 경우
        return((*top)->data); //현재 top의 원소 반환
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

//스택의 원소를 top에서 bottom 순서로 출력하는 연산
void printStack(stackNode** top) {
    stackNode* p = *top;
    printf("\nSTACK [ ");
    while (p) {
        printf("%d ", p->data);
        p = p->link;
    }
    printf("] \n");
}