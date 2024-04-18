#include <stdio.h>
#include <math.h>

int main() 
{
    double P, R;
    int T;
    double accumulated_value;

    printf("원금을 입력하세요 (P): ");
    scanf("%lf", &P);
    printf("이자율을 입력하세요 (R): ");
    scanf("%lf", &R);
    printf("기간을 입력하세요 (T, 단위: 년): ");
    scanf("%d", &T);

    accumulated_value = P * pow((1 + R / 100), T);

    printf("누적된 값: %.2lf\n", accumulated_value);

    return 0;
}
