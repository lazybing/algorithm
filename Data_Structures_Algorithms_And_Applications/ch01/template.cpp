#include <iostream>
using namespace std;

template <class T>
T abc(T a, T b, T c)
{
    return a + b * c;
}

template <class Ta, class Tb, class Tc>
Ta abc(const Ta& a, const Tb& b, const Tc& c)
{
    return a + b * c;
}

int main()
{
    int i = 5, j = 6, k = 0;

    int ret = abc<int>(i, j, k);
    cout << ret << endl;

    float a = 7.8, b = 1.2, c = 3.1;

    float res = abc<float>(a, b, c);
    cout << res << endl;

    float x = 3.2, ret_val = 0.0;
    int   y = 3, z = 4;
    ret_val = abc<float, int, int>(x, y, z);
    cout << ret_val << endl;

    return 0;
}
