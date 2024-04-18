#include <stdio.h>

unsigned char varB[] = {0x65, 0x31, 0x02, 0x05};
unsigned short varW[] = {0x6543, 0x1202};
unsigned int varD = 0x12345678;

int main() {
    unsigned short result_a;
    unsigned char result_b, result_c;
    unsigned short result_d;
    unsigned int result_e;

    // a.
    result_a = *((unsigned short*)&varB[2]);

    // b.
    result_b = (unsigned char)varD;

    // c.
    result_c = *((unsigned char*)&varW[1]);

    // d.
    result_d = *((unsigned short*)&varD + 1);

    // e.
    result_e = *((unsigned int*)&varW);

    printf("a. Result: %04X\n", result_a);
    printf("b. Result: %02X\n", result_b);
    printf("c. Result: %02X\n", result_c);
    printf("d. Result: %04X\n", result_d);
    printf("e. Result: %08X\n", result_e);

    return 0;
}

