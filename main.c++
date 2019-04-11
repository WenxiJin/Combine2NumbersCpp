#include <iostream>

using namespace std;

class Combine2Numbers {
  public:
    static short combine2Number(char a, char b) {
        return (short) a << 8 | (b & 0xff);
    }

    static char getA(short combinedNumber) {
        return (char)((combinedNumber >> 8) & 0xff);
    }

    static char getB(short combinedNumber) {
        return (char)(combinedNumber & 0xff);
    }

};
