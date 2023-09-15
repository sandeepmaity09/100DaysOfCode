// Converting a string to a numeric type

#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

long hex2int(const string &hexStr)
{
    cout << "Initial hexStr" << endl;
    cout << hexStr << endl;
    char *offset;
    if (hexStr.length() > 2)
    {
        if (hexStr[0] == '0' && hexStr[1] == 'x')
        {
            return strtol(hexStr.c_str(), &offset, 0);
        }
    }
    return strtol(hexStr.c_str(), &offset, 16);
}

float str2decimal(const string &str)
{
    cout << "Initial String" << endl;
    cout << str << endl;
    char *offset;
    return strtod(str.c_str(), &offset);
}

int main()
{
    // int i = hex2int("0x12AB");
    float f = str2decimal("1010");
    cout << "Converted Value" << endl;
    cout << f << endl;
    return 0;
}