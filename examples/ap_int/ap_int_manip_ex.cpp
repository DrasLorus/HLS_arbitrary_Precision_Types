#include <ap_int.h>
#include <iostream>
using namespace std;

int main(int, char **) {
    const ap_int<16> A   = -3987;
    const ap_int<16> s_A = ~(A >> 2) + 1;

    cout << A << " " << s_A << " " << round(3987. / 4) << endl;

    const bool       Ri[2]    = {false, true};
    const ap_int<16> R_val[2] = {-int8_t(Ri[0]), -int8_t(Ri[1])};

    const ap_int<16> ps_A = (R_val[0] ^ (A >> 2)) + Ri[0];
    const ap_int<16> ms_A = (R_val[1] ^ (A >> 2)) + Ri[1];

    cout << ps_A << " " <<  ms_A  << endl;

    return 0;
}
