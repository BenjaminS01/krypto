#include "ggT.h"
#include <vector>
#include <algorithm>

int ggT::getggT(int m1, int m2)
{
    std::vector<int> q;
    std::vector<int> a;
    std::vector<int> x;
    std::vector<int> y;

    

    if (m1 < m2) {
        std::swap(m1, m2);
    }

    int i = 1;

    a.push_back(m1);
    a.push_back(m2);

    x.push_back(1);
    x.push_back(0);

    y.push_back(0);
    y.push_back(1);

    q.push_back(0);


    while (a[i] != 0) {

        q.push_back(abs(a[i - 1] / a[i]) );

        a.push_back(a[i - 1] - q[i] * a[i]);

        x.push_back( x[i - 1] - q[i] * x[i]);

        y.push_back(y[i - 1] - q[i] * y[i]);

        if (a[i + 1] == 0) {
            break;
        }

        i++;
        
    }

    return a[i];
}
