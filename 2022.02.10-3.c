#include <stdio.h>
// �� ���ڿ��� ������ �����ִ� �Լ��� ������ּ���. �� ���ڿ��� ������ 1, �ƴϸ� 0�� �����մϴ�.
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
	printf("%d\n", rst); // ��� : 1

	rst = my_strcmp("abc", "abd");
	printf("%d\n", rst); // ��� : 0

	rst = my_strcmp("hello world", "hello");
	printf("%d\n", rst); // ��� : 0

	rst = my_strcmp("hello world", "hello world");
	printf("%d\n", rst); // ��� : 1

	return 0;
}