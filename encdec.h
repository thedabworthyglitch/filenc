#ifndef ENCDEC_H
#define ENCDEC_H

#include <string>
#include <fstream>
#include <iostream>

using namespace std;

class encdec {
    int key;
    string file;
    char c;

public:
    void encrypt();
    void decrypt();
};

#endif  // ENCDEC_H