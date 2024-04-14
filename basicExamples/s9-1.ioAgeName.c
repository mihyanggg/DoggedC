#include <stdio.h>
#include <string.h>

int main(void) {
    int age = 0;
    char name[20] = { 0 };

    /* age */
    printf("나이를 입력하세요: ");
#ifdef __linux__
    scanf("%d%*c", &age);
    // getchar(); // 버퍼비우기 %*c로 대체
    // scanf는 개행(또는 공백)입력을 입력받을때까지 입력받고, 개행 전까지 지정된 변수에 저장한다. 그러면 개행은 버퍼에 남아있기 때문에, 다음 scanf 진행 시, 버퍼에 남아있던 개행을 입력받은것으로 처리하여 의도한 바와 다르게 처리 된다. 따라서 입력받을 형식문자 바로 뒤에 %*c 형식문자를 사용함으로써, 추가로 입력받은 문자(개행 또는 공백)을 무시해주는 것 !
#elif defined(_WIN32)
    scanf_s("%d%*c", &age);
#endif

    /* name */
    printf("이름을 입력하세요: ");
#ifdef __linux__
    fgets(name, sizeof(name), stdin);
    /* \n -> \0 */
    size_t len = strlen(name);
    if (len > 0 && name[len - 1] == '\n') {
        name[len - 1] = '\0';
    }
#elif defined(_WIN32)
    gets_s(name, sizeof(name));
#endif

    /* print */
    printf("\n당신의 나이는 %d살이고 이름은 \'%s\' 입니다. \n", age, name);
    
    return 0;
}