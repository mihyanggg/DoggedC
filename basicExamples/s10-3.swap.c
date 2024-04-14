#include <stdio.h>

int main(void)
{
    int a, b, tmp;

#ifdef __linux__
    scanf("%d%*c%d%*c", &a, &b);
#elif defined(_WIN32)
    scanf_s("%d%*c%d%*c", &a, &b);
#endif

    tmp = a;
    a = b;
    b = tmp;

    printf("a:%d, b:%d\n", a, b);

    return 0;
}