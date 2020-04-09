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
	int **x;		// 이중포인터 변수x 선언

	printf("sizeof(x) = %lu\n", sizeof(x));		//포인터 변수 x의 크기를 나타내는 출력문(8 또는 4가 출력됨)
	printf("sizeof(x) = %lu\n", sizeof(*x));		// 포인터 변수 *x의 크기를 나타내는 출력문(8또는 4가 출력됨)
	printf("sizeof(**x) = %lu\n", sizeof(**x));		// 포인터 변수 **x의 크기를 나타내는 출력문(크기가 4임)

	return 0;		// 0값을 반환
}
