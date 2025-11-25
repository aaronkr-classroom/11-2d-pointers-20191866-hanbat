// 2d_ptr_getMydata.c

#include <stdio.h>
#include <malloc.h>

// 포인터 변수 q는 p 변수의 주소값을 저장합니다
void GetMydata(short** q) {
	// 할당된 메모리의 주소 값을 포인터 q가 가리키는
	// main 함수의 p에 저장함
	*q = (int*)malloc(8);
}

int main() {
	int* p; // p는 초기화되지 않았습니다
	GetMydata(&p); // 포인터 p의 주소 값을 전달함
	*p = 5;    // 할당된 메모리에 첫 4바이트에 값 5를 넣음

	printf("p (주소) : %d\t", p); // 5 출력
	printf("p (값) : %d\n", *p);
	
	free(p); // 할당된 동적 메모를 해제합니다

	return 0;
}