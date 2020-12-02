/*
//ť
//���Լ���
//�߰��Ҷ��� rear,, �����Ҷ��� front

#include<stdio.h>
#include<stdlib.h>
#define MAX_QUEUE_SIZE 5

typedef int element;
typedef struct {
	int front;
	int rear;
	element data[MAX_QUEUE_SIZE];
}QUEUE;

//�ʱ�ȭ �Լ�
void init_queue(QUEUE* q) {
	q->rear = -1;
	q->front = -1;
}

//��� �Լ� - ť ������ ���� ���� �ϱ� ���Ͽ� ����
void queue_print(QUEUE* q) {
	for (int i = 0; i < MAX_QUEUE_SIZE; i++) {
		if (i <= q->front || i > q->rear)
			printf("   | ");
		else
			printf("%d | ", q->data[i]);
	}
	printf("\n");
}

int is_full(QUEUE* q) {
	if (q->rear == MAX_QUEUE_SIZE)
		return 1;
	else
		return 0;
}

int is_empty(QUEUE* q) {
	if (q->front == q->rear)
		return 1;
	else
		return 0;
}

void enqueue(QUEUE* q, int item) {
	if (is_full(q)) {
		printf("�� ��");
		return 0;
	}
	q->data[++(q->rear)] = item;
}

int dequeue(QUEUE* q) {
	if (is_empty(q)) {
		printf("����");
		return;
	}
	int item = q->data[++(q->front)];
	return item;
}

int main() {
	int item = 0;
	QUEUE q;

	init_queue(&q);

	enqueue(&q, 10); queue_print(&q);
	enqueue(&q, 20); queue_print(&q);
	enqueue(&q, 30); queue_print(&q);
	enqueue(&q, 40); queue_print(&q);

	item = dequeue(&q); queue_print(&q);
	item = dequeue(&q); queue_print(&q);
	item = dequeue(&q); queue_print(&q);
	item = dequeue(&q); queue_print(&q);

	enqueue(&q, 50); queue_print(&q);

	return 0;
}
*/