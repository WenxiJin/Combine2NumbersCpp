#include <iostream>

using namespace std;

class Combine2Numbers {
  public:
    static int combine2Number(short a, short b) {
        return (int) a << 16 | (b & 0xffff);
    }

    static short getA(int combinedNumber) {
        return (short)((combinedNumber >> 16) & 0xffff);
    }

    static short getB(int combinedNumber) {
        return (short)(combinedNumber & 0xffff);
    }

};
