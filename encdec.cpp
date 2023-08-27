#include "encdec.h"

void encdec::encrypt()
{
    cout << "Key: ";
    cin >> key;

    fstream fin, fout;

    fin.open(file, fstream::in);
    fout.open("encrypt.txt", fstream::out);

    while (fin >> noskipws >> c) {
        int temp = (c + key);
        fout << (char)temp;
    }

    fin.close();
    fout.close();
}

void encdec::decrypt()
{
    cout << "Key: ";
    cin >> key;

    fstream fin, fout;

    fin.open("encrypt.txt", fstream::in);
    fout.open("decrypt.txt", fstream::out);

    while (fin >> noskipws >> c) {
        int temp = (c - key);
        fout << (char)temp;
    }

    fin.close();
    fout.close();
}
