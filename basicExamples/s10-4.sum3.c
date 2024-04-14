#include <stdio.h>

int main(void)
{
    int i = 0, inp = 0, sum = 0;

    for (i=0; i<3; i++) {    
#ifdef __linux__
        scanf("%d%*c", &inp);
#elif defined(_WIN32)
        scanf_s("%d%*c", &inp);
#endif
        sum += inp;
    }
    
    printf("Total: %d\n", sum);

    return 0;
}