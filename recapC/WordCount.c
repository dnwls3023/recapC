#include <stdio.h>
#include <stdbool.h>

// 문자가 알파벳인지 확인하는 함수
bool alphabetic(const char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return true;
	else
		return false;
}

// 문자열 내에 포함된 단어의 수를 계산하는 함수 
int countWords(const char string[])
{
	int i, wordCount = 0;
	bool lookingForWord = true, alphabetic(const char c);

	for (i = 0; string[i] != '\0'; ++i)
	{
		if (alphabetic(string[i]))
		{
			if (lookingForWord)
			{
				++wordCount;
				lookingForWord = false;
			}
		}
		else
			lookingForWord = true;
	}
	return wordCount;
}

int main(void)
{
	const char text1[] = "Well, here goes.";
	const char text2[] = "And here we go... again,";
	int countWords(const char string[]);

	printf("%s - words = %i\n", text1, countWords(text1));
	printf("%s - words = %i\n", text2, countWords(text2));
	return 0;
}