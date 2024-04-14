#include <stdio.h>

#ifdef __linux__
#elif defined(_WIN32)
#endif

int main(void)
{
    int user_s = 0, h = 0, m = 0, s = 0;
    
#ifdef __linux__
    scanf("%d%*c", &user_s);
#elif defined(_WIN32)
    scanf_s("%d%*c", &user_s);
#endif
    s = user_s % 60;
    m = user_s / 60;
    h = m / 60;
    m %= 60;
    
    //printf("%02d:%02d:%02d\n", h, m, s);
    printf("%d초는 %02d시간 %02d분 %02d초 입니다.\n", user_s, h, m, s);

}