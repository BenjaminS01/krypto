#include "BlumBlumShub.h"
#include <vector>

int BlumBlumShub::generator(int p, int q, int s)
{

    std::vector<int> x;
    std::vector<int> b;
    x.push_back(s * s);
    int n = p * q;

    for (int i = 1; i < 100; i++)
    {
        x.push_back( (x[i - 1] * x[i - 1]) % n);
        b.push_back(x[i] % 2);
    }

    return 0;
}
