#include <stdio.h>

int main(void)
{
    int age = 0;
    double fee = 0.0, rate = 0.0;

#ifdef __linux__
    scanf("%d", &age);
#elif defined(_WIN32)
    scanf_s("%d", &age);
#endif
    if (age < 0) return -1;

    if (age >= 0 && age <= 3) {
        rate = 0.0;
    } else if (age >= 4 && age <= 13) {
        rate = 0.5;
    } else if (age >= 14 && age <= 19) {
        rate = 0.75;
    } else {
        rate = 1;
    }
    fee = 1000 * rate;
    printf("나이: %d, 최종요금: %d\n", age, (int)fee);

    return 0;
}