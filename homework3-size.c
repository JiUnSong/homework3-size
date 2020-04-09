/*
 ============================================================================
 Name        : homework3-size.c
 Author      : Ji Un Song
 Version     :
 Copyright   :
 Description :
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int **x;		// ���������� ����x ����

	printf("sizeof(x) = %lu\n", sizeof(x));		//������ ���� x�� ũ�⸦ ��Ÿ���� ��¹�(8 �Ǵ� 4�� ��µ�)
	printf("sizeof(x) = %lu\n", sizeof(*x));		// ������ ���� *x�� ũ�⸦ ��Ÿ���� ��¹�(8�Ǵ� 4�� ��µ�)
	printf("sizeof(**x) = %lu\n", sizeof(**x));		// ������ ���� **x�� ũ�⸦ ��Ÿ���� ��¹�(ũ�Ⱑ 4��)

	return 0;		// 0���� ��ȯ
}
