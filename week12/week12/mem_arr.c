// mem_arr.c
#include <stdio.h>

#define MAX_COUNT 5 // 최대 입력을 5회로 제한함

int main() {
	int num[MAX_COUNT],
		count = 0,
		sum = 0;

	// 최대 5회까지 입력 받고 중간에 9999를 누르면 종료
	while (count < MAX_COUNT) {
		
		
		printf("\n숫자를 입력하세요 (9999누르면 종료): ");
		// scanf_s("%d",&num[count]); // 밑과 같은 표현
		scanf_s("%d", num + count); // (*p + 1) 과 유사
		count++;
		if (num[count] == 9999)break;

		// 입력된 횟수만큼 숫자를 출력합니다
		for (int i = 0; i < count; i++) {
			if (i > 0)printf(" + ");
			printf("%d", num[i]);
			sum = sum + num[i];
		}
	}
	printf("총합 : %d", sum);
}