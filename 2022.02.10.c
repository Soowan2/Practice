#include <stdio.h>

// ���� : ������ ���̸� ��ȯ�ϴ� �Լ��� ������ּ���.(get_str_len)

int get_str_len(char* name) {
	int count = 0;
	for (int i = 0; name[i] != '\0'; i++)
	{
	
		count++;
	}
	return count;
}

int main(void) {
	char name[100] = "Paul"; // �̷��� �ϸ� name�� ����Ű�� �迭�� Paul�� ����Ǹ鼭 ���۵ȴ�.
	int len = get_str_len(name);

	printf("len : %d\n", len);
	// ��� => len : 4

	name[0] = 't';
	name[1] = 'o';
	name[2] = 'm';
	name[3] = 'a';
	name[4] = 's';
	name[5] = '\0';

	len = get_str_len(name);

	printf("len : %d\n", len);
	// ��� => len : 5

	return 0;
}