#include "RSA.h"

void RSA::verschluesseln(int p, int q,int M)
{
	int n = p * q;
	int phi = (p - 1) * (q - 1);
    int e = this->getE(phi);
    int d = this->ggt.getggT(e, phi);

    long C = pow(M, e) ;
    C = C % n;

    int test = 1;
}

int RSA::getE(int phi)
{
    int x; 
   int i;
    for (x = 2; x <= 1000; x++)
    {

        for (i = 2; i <= x; i++)
        {
            if (x % i == 0 && x != i) break;

            if (i == x && this->getggt(i, phi) ==1)
            {
                return i;
            }

        }

    }
    
	return 0;
}

int RSA::getggt(int zahl1, int zahl2)
{
    int rest, ggt;
    rest = 0;
    do {
        ggt = rest;
        rest = zahl1 % zahl2;
        zahl1 = zahl2;
        zahl2 = rest;
    } while (rest != 0);
    return ggt;
}

int RSA::potenzieren(int decimal, int basis, int mod)
{

    std::string binärzahl = std::bitset< 64 >(decimal).to_string(); // string conversion

    int ergebnis = basis;

    for (int i = 0; i < binärzahl.size(); i++)
    {
        if (binärzahl[i] == '1') {
            binärzahl.erase(0, i);
            break;
        }
    }

    for (int i = 1; i < binärzahl.size(); i++)
    {
        if (binärzahl[i] == '0') {
            ergebnis = (ergebnis * ergebnis) % mod;
        }
        else /* 1 */ {
            ergebnis = (ergebnis * ergebnis * basis) % mod;
        }
    }

    return ergebnis;
}

int RSA::hashfunktion(int x1, int x2)
{
    int a = 2;
    int b = 8461;
    int p = 12347;

    int res = potenzieren(5692, a, p) * potenzieren(8461, a, p);
    
    return res;
}
