#define CLEAR_INPUT_BUFFER() \
    do { \
        int c; \
        while ((c = getchar()) != '\n' && c != EOF) { } \
    } while (0)

CLEAR_INPUT_BUFFER();





// 개행 문자나 파일 끝까지 버퍼에서 문자 제거
int c; while ((c = getchar()) != '\n' && c != EOF) { }






