#include <stdio.h>

int main(void)
{
    int score = 0;
    printf("점수를 입력하세요: ");
#ifdef __linux__
    scanf("%d%*c", &score);
#elif defined(_WIN32)
    scanf_s("%d%*c", &score);
#endif

    //score >= 80 ? printf("결과: 합격\n") : printf("결과: 불합격\n");
    printf("%s\n", (score>=80) ? "합격" : "불합격" );

    return 0;
}