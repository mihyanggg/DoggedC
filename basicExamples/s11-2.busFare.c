#include <stdio.h>

int main(void)
{
    int fare = 1000, age = 0;
    double discount = 0.75;

#ifdef __linux__
    scanf("%d", &age);
#elif defined(_WIN32)
    scanf_s("%d", &age);
#endif
    if (age<20) {
        printf("나이: %d, 최종요금: %d\n", age, (int)(fare*discount));
    } else {
        if (age > 20) age = 20;
        printf("나이: %d, 최종요금: %d\n", age, fare);
    }

    return 0;
}