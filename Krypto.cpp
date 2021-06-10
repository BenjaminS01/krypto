// Krypto.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
#include "ggT.h"
#include "Chiffren.h"
#include "BlumBlumShub.h"
#include "RSA.h"

#include <iostream>

#include <bitset>
#include <algorithm>
#include <array>
#include <iomanip>

using namespace std;


int main()
{
    
    
/*
    ggT ggtObjekt = ggT();

   int ggt  = ggtObjekt.getggT(5, 264);

   std::cout << ggt;
   std::cout << ggt;
   */

    /*
    Chiffren chiffreObjekt = Chiffren();

    std::string text = chiffreObjekt.vigenere("diesisteinsatz", "key");

    std::cout << text;
    std::cout << text;

    std::string text2 = chiffreObjekt.vigenere("hallo", "key");

    std::cout << text2;
    std::cout << text2;

    // KOINZIDENZINDEX!!!

    */
/*
    BlumBlumShub bbs = BlumBlumShub();
    int i = bbs.generator(47, 67, 6);
    */
/*
    string plainText = "123456ABCD132536";
    string key = "AABB09182736CCDD";
    DES des(plainText, key);

    des.cipher(des.getPlainText(), des.getKey64());
    */

   RSA rSaObjekt = RSA();

 ///  rSaObjekt.verschluesseln(13, 23, 212);
   int i = rSaObjekt.potenzieren(5, 212, 299);
   int res = rSaObjekt.hashfunktion(5692, 144);

   std::cout << "test";
}


