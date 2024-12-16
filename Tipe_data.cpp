#include <iostream>
#include <numeric>
using namespace std;

int main()
{
    int n;
    n = 4;

    cout << n << endl;
    cout << sizeof(n) << "byte" << endl;
    cout << numeric_limits::max() << endl;

    return 0;
}
