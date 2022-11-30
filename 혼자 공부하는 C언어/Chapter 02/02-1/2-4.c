#include <stdio.h>

int main(void)
{
	printf("%d\n", 10); // 정수는 %d 포맷을 활용해 출력한다.
	printf("%lf\n", 3.14); // 실수는 %lf 포맷을 활용해 출력한다.
	printf("%.1lf\n", 3.45); // 소숫점 출력 자릿수의 경우 .x 형태로 해당 자릿수를 결정해줄 수 있다. 이때 잘리는 값은 반올림 된다.
	printf("%.10lf\n", 3.14);

	printf("%d + %d = %d\n", 10, 10, 10 + 20);
	printf("%.1lf - %.1lf = %.1lf\n", 3.4, 1.2, 3.4 - 1.2);

	return 0;
}
