// ���� : ���忡�� Ư�� ������ ��ġ�� ��ȯ�ϴ� �Լ��� ������ּ���.(get_index_of_c)

#include <stdio.h>

int get_index_of_c(char* lon,char shor) {

	int num = 0;

	int num2 = sizeof(lon);

	for (int i = 0; lon[i] != shor; i++)
	{
		num++;

		if (i > num2)
		{
			num = -1;
			break;
		}
	}

	return num;
}

int main(void) {
	int index;

	index = get_index_of_c("abc", 'b');
	printf("index : %d\n", index);
	// ��� => index : 1

	index = get_index_of_c("test", 's');
	printf("index : %d\n", index);
	// ��� => index : 2

	index = get_index_of_c("test", 'k');
	printf("index : %d\n", index);
	// ��� => index : -1


	return 0;
}