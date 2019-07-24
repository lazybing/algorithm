#include <iostream>
#include <cstdlib>

using namespace std;

#if 0
int square(int x)
{
    return x * x;
}

double square(double x)
{
    return x * x;
}
#endif

template <typename T>
T square(T x)
{
    return x * x;
}

template<typename T>
class BoVector{
    T arr[1000];
    int size;
public:
    BoVector():size(0){}
    void push(T x){arr[size] = x; size++;}
    T get(int i) const {return arr[i];}
    int getsize() const {return size;}
    void print() const {
        for (int i = 0; i < size; i++){
            cout << arr[i] << endl;
        }
    }
};

template<typename T>
BoVector<T> operator*(const BoVector<T>& rhs1, BoVector<T>& rhs2)
{
    BoVector<T> ret;
    for (int i = 0; i < rhs1.getsize(); i++)
        ret.push(rhs1.get(i) * rhs2.get(i));

    return ret;
}

int main(int argc, char **argv)
{
    //cout << square(5) << endl;
    //cout << square(5.5) << endl;
    BoVector<int> bv;
    bv.push(2);
    bv.push(5);
    bv.push(8);
    bv.push(9);
    bv.push(9);
    bv.print();

    cout << "Print squared bv: " << endl;
    bv = square(bv);
    bv.print();

    return true;
}
