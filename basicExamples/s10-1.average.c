#include <stdio.h>

int main(void) {

    int a = 0, b = 0;
    double avg = 0.0;

    printf("두 정수를 입력하세요.: ");
#ifdef __linux__
    scanf("%d%*c%d%*c", &a, &b);    // 다음이 fgets()와 같이 stdin으로 받는 경우 %*c로 버퍼 안비워주면, 의도와 다르게 동작
    //scanf("%d%d", &a, &b);        
    /* scanf() 사용해서 입력받으면 괜찮은 이유는, scanf는 입력 버퍼에 있는 공백, 탭, 개행문자 등을 무시하고 처음 만나는 숫자를 읽으므로 이전 입력에 남아있던 개행문자는 scanf에 의해 무시되고, 사용자가 다음 숫자를 입력할 때 까지 대기함.
    fgets()는 개행문자를 포함하여 입력 버퍼에 있는 모든 문자를 읽어서 저장한다. 개행 문자도 문자열의 일부로 간주, 개행 문자를 만날 때 까지 혹은 지정된 길이까지 문자를 읽어서 저장함
    따라서 scanf에 의해 입력버퍼에 남겨진 개행문자를 fgets가 읽어서 바로 문자열 입력을 종료시킴
    정수나 다른 숫자를 입력 받을 땐 scanf를 사용하고, 그 뒤에 ***문자열을 입력받을 때는 버퍼를 비우는 작업 필요***
    int c; while ((c = getchar()) != '\n' && c != EOF) { }  // 개행 문자나 파일 끝까지 버퍼에서 문자 제거
    */
#elif defined(_WIN32)
    scanf_s("%d%*c%d%*c", &a, &b);
#endif
    //printf("AVG: %.2f\n", (double)((a + b) / 2));
    avg = (a + b) / 2.0;
    printf("AVG: %.2f\n", avg);

    return 0;
}