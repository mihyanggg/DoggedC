#include <stdio.h>

/* 홀짝 구하기
    result%2 의 나머지가 0이면 짝수
    result & 0x00000001 => 홀수
*/
int main(void)
{

    int inp;
#ifdef __linux__
    scanf("%d%*c", &inp);
#elif defined(_WIN32)
    scanf_s("%d%*c", &inp);
#endif

    /* % 연산자 사용 - 일반적 ; 나눗셈을 하기 때문에 비트연산보다 CPU를 더 사용함 */
    if (inp%2 == 0) { printf("%%연산 - 짝수\n"); }
    else { printf("%%연산 - 홀수\n"); }

    /* & 연산자 사용 - 비트연산 ; 효율적 */
    if (inp & 0x00000001) { printf("&연산 - 홀수\n"); }
    else { printf("&연산 - 짝수\n"); }

    return 0;
}