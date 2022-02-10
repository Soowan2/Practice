#include <stdio.h>

// 문제 : 문장의 길이를 반환하는 함수를 만들어주세요.(get_str_len)

int get_str_len(char* name) {
	int count = 0;
	for (int i = 0; name[i] != '\0'; i++)
	{
	
		count++;
	}
	return count;
}

int main(void) {
	char name[100] = "Paul"; // 이렇게 하면 name이 가리키는 배열에 Paul이 저장되면서 시작된다.
	int len = get_str_len(name);

	printf("len : %d\n", len);
	// 출력 => len : 4

	name[0] = 't';
	name[1] = 'o';
	name[2] = 'm';
	name[3] = 'a';
	name[4] = 's';
	name[5] = '\0';

	len = get_str_len(name);

	printf("len : %d\n", len);
	// 출력 => len : 5

	return 0;
}