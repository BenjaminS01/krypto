#pragma once

#include "ggT.h"
#include <math.h>   
#include <string>
#include <math.h>
#include <bitset>

class RSA
{
private: 

	ggT ggt = ggT();


public:

	void verschluesseln(int p, int q, int M);

	int getE(int phi);
	int getggt(int zahl1, int zahl2);

	int potenzieren(int decimal, int basis, int mod);

	int hashfunktion(int x1, int x2);
};

