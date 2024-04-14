#include <stdio.h>

int main(void)
{   
    int i = 0;
    unsigned int max = 0, inp = 0;   
    
    for (i = 0; i < 3; i++) {
#ifdef __linux__
        scanf("%d%*c", &inp);
#elif defined(_WIN32)
        scanf_s("%d%*c", &inp);
#endif
        if (i == 0) { max = inp; continue; }    /* 처음엔 비교 대상이 없으므로 max에 inp 할당*/
        max = (inp > max) ? inp : max;
    }   

    printf("MAX: %d\n", max);

    return 0;
}
