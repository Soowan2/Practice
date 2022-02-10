#include <stdio.h>
// 두 문자열이 같은지 비교해주는 함수를 만들어주세요. 두 문자열이 같으면 1, 아니면 0을 리턴합니다.
int my_strcmp(char* str1, char* str2) {

	//int num = 1;
	//int size;
	//if (sizeof(str1) >= sizeof(str2))
	//{
	//	size = sizeof(str1);
	//}

	//else
	//{
	//	size = sizeof(str2);
	//}

	//for (int i = 0; i < size; i++)
	//{
	//	if (str1[i] != str2[i])
	//	{
	//		num = 0;
	//		break;
	//	}
	//}

	//return num;

	for (int i = 0;; i++)
	{
		if (str1[i] != str2[i])
		{
			return 0;
		}
		if (str2[i] == '\0')
		{
			return 1;
		}
	}
}

int main(void) {

	int rst;

	rst = my_strcmp("abc", "abc");
	printf("%d\n", rst); // 출력 : 1

	rst = my_strcmp("abc", "abd");
	printf("%d\n", rst); // 출력 : 0

	rst = my_strcmp("hello world", "hello");
	printf("%d\n", rst); // 출력 : 0

	rst = my_strcmp("hello world", "hello world");
	printf("%d\n", rst); // 출력 : 1

	return 0;
}