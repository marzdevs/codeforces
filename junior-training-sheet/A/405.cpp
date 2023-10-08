#include <iostream>
#include <algorithm>
using namespace std;

int n;

int main()
{
    cin >> n;
    int nums[100];
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    sort(nums, nums + n);

    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }

    cout << endl;
}
