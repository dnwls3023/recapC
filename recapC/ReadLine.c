// 줄 단위로 데이터 읽기
#include <stdio.h>

int main(void) 
{
	int i;
	char line[81];

	void readLine(char buffer[]);

	for (i = 0; i < 3; ++i)
	{
		readLine(line);
		printf("%s\n\n", line);
	}

	return 0;
}

// 터미널로부터 텍스트 한 줄을 입력받는 함수

void readLine(char buffer[])
{
	char character;
	int i = 0;

	do
	{
		character = getchar();
		buffer[i] = character;
		++i;
	} while (character != '\n');

	buffer[i - 1] = '\0';
}