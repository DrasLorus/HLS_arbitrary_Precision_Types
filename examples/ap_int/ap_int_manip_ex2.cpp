#include <ap_int.h>
#include <cstdio>
#include <iostream>
using namespace std;

int main(int, char **) {
    const ap_int<32> A   = 0xDEADBEEF;
    const ap_int<32> s_A = ~(A >> 2) + 1;

    cout << A << " " << s_A << " " << (int64_t) round(-1. * A.to_float() / 4.) << endl;

    const ap_int<16> dead = A(31, 16);
    const ap_int<16> beaf = A(15, 0);
    printf("%08x || %04x || %04x\n", A.to_uint(), dead.to_int(), beaf.to_int());

    return 0;
}
