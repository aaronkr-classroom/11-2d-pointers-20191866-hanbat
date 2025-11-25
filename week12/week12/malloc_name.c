// malloc_name.c
#include <stdio.h>
#include <malloc.h>
#include <string.h>

int main() {
	char* p_name;
	// 20바이트의 메모리를 동적 할당
	p_name = (char*)malloc(20); 
	
	if (p_name != NULL) { // 메모리 할당에 성공!
		while (1) {
			printf("Enter your name: >>> ");
			gets(p_name);
			
				if (!strcmp(p_name, "Q") || !strcmp(p_name, "q")){
					printf("프로그램 종료!");
					break;
				}



			printf("Hi~~ %s~ \n", p_name);
		}

		// 포인터 변수 p_name에 동적 할당된 메모리를 반환!
		free(p_name);
	}
	else { // 메모리 할당에 실패 ㅜ.ㅜ
		printf("Error : Memory allocation error! ");
	}

	return 0;
}