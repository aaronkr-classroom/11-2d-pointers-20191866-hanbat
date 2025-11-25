// malloc_free.c

#include <stdio.h>
#include <malloc.h>

void Test() {
	// 힙에200바이트 할당함
	short* p = (short*)malloc(100);
	//free(p) ; // 실수로 메모리 할당을 해제 안하면...
}

int main() {
	// 메모리가 100바이트씩 100번 동적 할당됨
	for (int i = 0; i < 100; i++)Test();
	return 0;
}