#include "Chiffren.h"

std::string Chiffren::vigenere(std::string klarText, std::string schl�ssel)
{
    int keyPos = 0;

    std::string alphabet = "abcdefghijklmnopqrstuvwxyz";
    std::string neuerText;

    for (int i = 0; i < klarText.size(); i++)
    {
        char a = klarText.at(i);
        char b = schl�ssel.at(keyPos);
        int intA = getIndex(a);
        int intB = getIndex(b);

        int summe = intA + intB;
        if (summe >= 26) {
            summe = abs(26 - summe);
        }

        char x = alphabet.at(summe);

        neuerText.push_back(x);

        keyPos++;
        if (keyPos == schl�ssel.size())
        {
            keyPos = 0;
        }

    }


    return neuerText;
}

int Chiffren::getIndex(char buchstabe)
{
    std::string alphabet = "abcdefghijklmnopqrstuvwxyz";

    for (int i = 0; i < alphabet.size(); i++)
    {
        char a = alphabet.at(i);
        if (a == buchstabe) {
            return i;
        }
    }
    return 0;
}
