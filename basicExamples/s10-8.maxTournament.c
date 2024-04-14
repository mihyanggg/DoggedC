#include <stdio.h>

int main(void)
{
    unsigned int a=0, b=0, c=0, max=0;
#ifdef __linux__
    scanf("%d%d%d", &a, &b, &c);
#elif defined(_WIN32)
    scanf_s("%d%d%d", &a, &b, &c);
#endif

    //max = (a > b) ? ( (a > c) ? a : c ) : ( (b > c ) ? b : c ) ;
    max = (a > b) ? a : b;
    max = (c > max) ? c : max;
    
    printf("MAX: %d\n", max);
    
    return 0;
}