#include <iostream>
#include <algorithm>
using namespace std;

int n, h, x, y, z, ans;

int main()
{
    cin >> n;
    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> x >> y >> z;
        ans += (x + y + z >= 2);
    }
    cout << ans << "\n";
}
