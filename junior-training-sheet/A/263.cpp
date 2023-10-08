#include <iostream>
#include <algorithm>
using namespace std;

int row_i, col_i;

int main()
{
    const int rows = 5;
    const int cols = 5;

    int matrix[rows][cols];

    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            cin >> matrix[i][j];
        }
    }

    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            if (matrix[i][j] == 1)
            {
                row_i = i + 1;
                col_i = j + 1;
                break;
            }
        }
    }

    int index = abs(3 - row_i) + abs(3 - col_i);
    cout << index << "\n";
}
