#include <iostream>
#include <algorithm>
using namespace std;

int a, b;

int main()
{
    cin >> a >> b;
    int count = 0;
    while (a <= b)
    {
        a *= 3;
        b *= 2;
        count++;
    }
    cout << count << "\n";
}
