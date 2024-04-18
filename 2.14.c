#include <stdio.h>
#include <math.h>

int main() {
    double x = 4, y = 5; // 점의 좌표
    double radius; // 원의 반지름
    double circumference; // 원의 원주
    double area; // 원의 면적

    // 반지름 계산
    radius = sqrt(x * x + y * y);

    // 원주 계산
    circumference = 2 * M_PI * radius;

    // 면적 계산
    area = M_PI * radius * radius;

    printf("Circumference: %.2lf\n", circumference);
    printf("Area: %.2lf\n", area);

    return 0;
}
