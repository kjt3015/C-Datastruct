//������ �����ϰ� ������ �Լ��� �̿��ؼ� ���� ������ ����

#include <stdio.h>

void changeValue(int cValue) {
	cValue = 326;
}

void changeValueForPointer(int *originValue) {
	*originValue = 326;
}

int main() {
	int originValue; //������ ����
	originValue = 419; //������ ���� ����

	printf("OriginValue: %d\n", originValue); //�ʱⰪ Ȯ��

	changeValue(originValue);
	printf("cValue: %d\n", originValue);
	int* p;
	p = &originValue;

	printf("������: %d\n", *p);

	changeValueForPointer(&originValue);
	printf("�����͸� ����Ͽ� �ٲ� Value: %d\n", originValue);
	printf("originValue�� �ּҰ�: %p\n", &originValue);
	printf("originValue�� �ּҰ��� ������ p�� ��: %p\n", p);

	return 0;
}

/*
	������ �����Ѵ�.
	�Լ��� �����
	�Լ����� ������ ���� ��������ش�
*/