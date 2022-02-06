#include<stdio.h>
#include<time.h>
#include <stdlib.h>


char Right(int numbers[], int count) {
	char hand[] = { 0, };
	int right;
	int left;

	for (int i = 0; i < count; i++)
	{
		if (numbers[i] == 1 || numbers[i] == 4 || numbers[i] == 7)
		{
			hand[i] = 'L';
			left = numbers[i];
		}
		if (numbers[i] == 3 || numbers[i] == 6 || numbers[i] == 9)
		{
			hand[i] = 'R';
			right = numbers[i];
		}
		if (numbers[i] == 2)
		{
			if ((left == 1 || left == 5) && right != 3)
			{
				hand[i] = 'L';
				left = numbers[i];
			}
			if (left == 4 && (right == 8 || right == 9 || right == 0))
			{
				hand[i] = 'L';
				left = numbers[i];
			}
			if (left == 7 && right == 0)
			{
				hand[i] = 'L';
				left = numbers[i];
			}
			if (left == 8 && (right == 9 || right == 0))
			{
				hand[i] = 'L';
				left = numbers[i];
			}
			else
			{
				hand[i] = 'R';
				right = numbers[i];
			}
		}
		if (numbers[i] == 5)
		{
			if ((left == 1 || left == 7) && right == 0)
			{
				hand[i] = 'L';
				left = numbers[i];
			}
			if ((left == 2 || left == 4 || left == 8)&& right != 6 && right != 8)
			{
				hand[i] = 'L';
				left = numbers[i];
			}
			else
			{
				hand[i] = 'R';
				right = numbers[i];
			}	
		}
		if (numbers[i] == 8)
		{
			if (left == 2 && right == 3)
			{
				hand[i] = 'L';
				left = numbers[i];
			}
			if ((left == 5 || left == 7 || left == 0) && right != 9)
			{
				hand[i] = 'L';
				left = numbers[i];
			}
			if (left == 4 && right == 3)
			{
				hand[i] = 'L';
				left = numbers[i];
			}
			else
			{
				hand[i] = 'R';
				right = numbers[i];
			}
		}
		if (numbers[i] == 0)
		{
			if (left == 8)
			{
				hand[i] = 'L';
				left = numbers[i];
			}
			if (left == 7 && right != 8 && right != 9)
			{
				hand[i] = 'L';
				left = numbers[i];
			}
			if (left == 5 && right != 8 && right != 9)
			{
				hand[i] = 'L';
				left = numbers[i];
			}
			if (left == 4 && (right == 2 || right == 3))
			{
				hand[i] = 'L';
				left = numbers[i];
			}
			if (left == 2 && right == 3)
			{
				hand[i] = 'L';
				left = numbers[i];
			}
			else
			{
				hand[i] = 'R';
				right = numbers[i];
			}
		}
	}
}

char Left(int numbers[],int count) {
	char hand[] = { 0, };
	int right;
	int left;

	for (int i = 0; i < count; i++)
	{
		if (numbers[i] == 1 || numbers[i] == 4 || numbers[i] == 7)
		{
			hand[i] = 'L';
			left = numbers[i];
		}
		if (numbers[i] == 3 || numbers[i] == 6 || numbers[i] == 9)
		{
			hand[i] = 'R';
			right = numbers[i];
		}
		if (numbers[i] == 2)
		{
			if ((right == 3 || right == 5) && left != 1)
			{
				hand[i] = 'R';
				right = numbers[i];
			}
			if (right == 6 && (left == 8 || left == 7 || left == 0))
			{
				hand[i] = 'R';
				right = numbers[i];
			}
			if (right == 9 && left == 0)
			{
				hand[i] = 'R';
				right = numbers[i];
			}
			if (right == 8 && (left == 7 || left == 0))
			{
				hand[i] = 'R';
				right = numbers[i];
			}
			else
			{
				hand[i] = 'L';
				left = numbers[i];
			}
		}
		if (numbers[i] == 5)
		{
			if ((right == 3 || right == 9) && left == 0)
			{
				hand[i] = 'R';
				right = numbers[i];
			}
			if ((right == 2 || right == 6 || right == 8) && left != 4 && left != 8)
			{
				hand[i] = 'R';
				right = numbers[i];
			}
			else
			{
				hand[i] = 'L';
				left = numbers[i];
			}
		}
		if (numbers[i] == 8)
		{
			if (right == 2 && left == 1)
			{
				hand[i] = 'R';
				right = numbers[i];
			}
			if ((right == 5 || right == 9 || right == 0) && left != 7)
			{
				hand[i] = 'R';
				right = numbers[i];
			}
			if (right == 6 && left == 1)
			{
				hand[i] = 'R';
				right = numbers[i];
			}
			else
			{
				hand[i] = 'L';
				left = numbers[i];
			}
		}
		if (numbers[i] == 0)
		{
			if (right == 8)
			{
				hand[i] = 'R';
				right = numbers[i];
			}
			if (right == 9 && left != 8 && left != 7)
			{
				hand[i] = 'R';
				right = numbers[i];
			}
			if (right == 5 && left != 8 && left != 7)
			{
				hand[i] = 'R';
				right = numbers[i];
			}
			if (right == 6 && (left == 2 || left == 1))
			{
				hand[i] = 'R';
				right = numbers[i];
			}
			if (right == 2 && left == 1)
			{
				hand[i] = 'R';
				right = numbers[i];
			}
			else
			{
				hand[i] = 'L';
				left = numbers[i];
			}
		}
	}
	return hand;
}

int main(void) {



	int numbers[] = { 0, };
	int count = 0;
	char hand[] = {0, };

	for (int i = 0; i < 11; i++)
	{
		scanf("%d", &numbers[i]);
		count++;
	}


	printf("오른손잡이면 R, 왼손잡이면 L을 눌러주세요.");
	scanf("%c", hand);

	if (hand == 'r')
	{
		Right(numbers, count);

		for (int i = 0; i < 11; i++)
		{
			printf("%c", hand[i]);
		}
	}

	if (hand == 'l')
	{
		Left(numbers, count);

		for (int i = 0; i < 11; i++)
		{
			printf("%c", hand[i]);
		}
	}

}