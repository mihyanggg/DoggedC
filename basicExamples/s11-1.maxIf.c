#include <stdio.h>

int main(void)
{
    int i=0, inp=0, max=0;

    for (i = 0; i < 3; i++) {
#ifdef __linux__
        scanf("%d", &inp);
#elif defined(_WIN32)
        scanf_s("%d", &inp);
#endif
        //max = inp;
        if (inp > max) max = inp;
    }
    printf("MAX: %d\n", max);

    return 0;
}