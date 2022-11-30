#include <stdio.h>

int main(void)
{
	printf("Be happy\n"); // \n 문자는 new line으로 줄바꿈을 의미한다.
	printf("123456789\n");
	printf("My\tfriend\n"); // \t 문자는 tab으로 탭을 의미한다.
	printf("Goot\bd\tchance\n"); // \b 문자는 backspace로 한 칸 왼쪽으로 이동해 문자를 바꾸는 걸 의미한다.
	printf("Cow\rW\a\n"); // \r 문자는 carriage return으로 맨 앞으로 이동하는 걸 의미하고 \a 문자는alert으로 벨소리를 내는 걸 의미한다.

	return 0;
}
