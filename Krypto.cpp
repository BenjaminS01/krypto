// Krypto.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
#include "ggT.h"
#include "Chiffren.h"

int main()
{
    
    /*

    ggT ggtObjekt = ggT();

   int ggt  = ggtObjekt.getggT(42, 93);

   std::cout << ggt;
   std::cout << ggt;
   */

    Chiffren chiffreObjekt = Chiffren();

    std::string text = chiffreObjekt.vigenere("diesisteinsatz", "key");

    std::cout << text;
    std::cout << text;

    std::string text2 = chiffreObjekt.vigenere("hallo", "key");

    std::cout << text2;
    std::cout << text2;

    // KOINZIDENZINDEX!!!
}


