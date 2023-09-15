// Getting numeric limits

#include <iostream>
#include <limits>

using namespace std;

template <typename T>
void showMinMax()
{
    cout << "Min : " << numeric_limits<T>::min() << endl;
    cout << "Max : " << numeric_limits<T>::max() << endl;
    cout << endl;
}

int main()
{
    cout << "short: " << endl;
    showMinMax<short>();
    cout << endl;

    cout << "int: " << endl;
    showMinMax<int>();
    cout << endl;

    cout << "long: " << endl;
    showMinMax<long>();
    cout << endl;

    cout << "float: " << endl;
    showMinMax<float>();
    cout << endl;

    cout << "double: " << endl;
    showMinMax<double>();
    cout << endl;

    cout << "signed int: " << endl;
    showMinMax<signed int>();
    cout << endl;
    
    cout << "unsigned int: " << endl;
    showMinMax<unsigned int>();
    cout << endl;



}