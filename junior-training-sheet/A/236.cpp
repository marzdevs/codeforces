#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string user;
    cin >> user;

    sort(user.begin(), user.end());
    int distinctChars = 1;

    for (int i = 1; i < user.size(); i++)
    {
        if (user[i] != user[i - 1])
        {
            distinctChars++;
        }
    }

    if (distinctChars % 2 == 0)
    {
        cout << "CHAT WITH HER!" << endl;
    }
    else
    {
        cout << "IGNORE HIM!" << endl;
    }

    return 0;
}
