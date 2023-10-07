#include <iostream>
#include <algorithm>
using namespace std;

int n, x, ans;
string s;
int W_A = 0, W_D = 0;

int main()
{
    cin >> n;
    int ans = 0;
    cin >> s;
    for (int i = 1; i <= n; i++)
    {
        if (s[i] == 'A')
        {
            W_A++;
        }
        else
        {
            W_D++;
        }
    }
    if (W_A > W_D)
    {
        cout << "Anton" << endl;
    }
    else if (W_D > W_A)
    {
        cout << "Danik" << endl;
    }
    else
    {
        cout << "Friendship" << endl;
    }
}
