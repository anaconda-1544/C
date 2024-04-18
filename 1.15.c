#include <stdio.h>
#include <stdbool.h>

bool is_prime(int n);

int main() 
{
    int sum = 0; // 소수의 합을 저장할 변수

    // 1과 200 사이의 소수를 찾아 합계에 더함
    for (int i = 2; i <= 200; i++) {
        if (is_prime(i)) {
            sum += i;
        }
    }

    printf("Sum of all primes between 1 and 200: %d\n", sum);
    return 0;
}

// 소수인지 판별하는 함수
bool is_prime(int n)
{
    if (n <= 1) {
        return false;
    }

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }

    return true;
}
