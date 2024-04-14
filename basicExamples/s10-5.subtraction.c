#include <stdio.h>

int main(void)
{
    int inp_a=0, inp_b=0, result=0;

#ifdef __linux__
    scanf("%d%*c%d%*c", &inp_a, &inp_b);
#elif defined(_WIN32)
    scanf_s("%d%*c%d%*c", &inp_a, &inp_b);
#endif

    //result = inp_a - inp_b;

    /* b를 2의 보수로 만들어서 a에 더해주면 a-b가 됨
        ~, +1* 해주면, 2의보수가 된다 */
    result = inp_a + (~inp_b + 1 );
    printf("res: %d", result);    

    return 0;
}