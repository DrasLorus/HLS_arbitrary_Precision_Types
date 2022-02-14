#include <ap_int.h>
#include <cstdio>
#include <iostream>
using namespace std;

int main(int, char **) {
    const ap_int<8> A           = 79;      // 0x4F = 79 
    const ap_int<4> msb_A_4bits = A(7, 4); // 0x4  =  4
    const ap_int<4> lsb_A_4bits = A(3, 0); // 0xF  = -1

    const ap_int<8> msb_A_8bits = A(7, 4); // 0x04   =  4
    const ap_int<8> lsb_A_8bits = A(3, 0); // 0x0F   = 15

    printf("%d || %d || %d\n", A.to_int(), msb_A_4bits.to_int(), lsb_A_4bits.to_int());
    printf("%d || %d || %d\n", A.to_int(), msb_A_8bits.to_int(), lsb_A_8bits.to_int());

    return 0;
}
