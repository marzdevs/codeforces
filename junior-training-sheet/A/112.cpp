#include <iostream>
#include <algorithm>
using namespace std;

string first_str, sec_str;

int main()
{

    cin >> first_str;
    cin >> sec_str;

    // Convert str1 to lowercase
    for (char &c : first_str)
    {
        c = tolower(c);
    }

    // Convert str2 to lowercase
    for (char &c : sec_str)
    {
        c = tolower(c);
    }

    if (first_str < sec_str)
    {
        cout << "-1" << endl;
    }
    else if (first_str > sec_str)
    {
        cout << "1" << endl;
    }
    else
    {
        cout << "0" << endl;
    }
}
