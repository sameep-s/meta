#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    bool isToeplitzMatrix(vector<vector<int>> &matrix)
    {
        int h = matrix.size() - 1;
        int w = matrix[0].size() - 1;

        for (int i = 0; i < h; i++)
            for (int j = 0; j < w; j++)
            {
                // if (i + 1 > h || j + 1 > w)
                //     continue;

                int ele = matrix[i][j];
                int eleComp = matrix[i + 1][j + 1];

                if (ele != eleComp)
                    return false;
            }

        return true;
    }
};

int main()
{
    Solution sol;
    vector<vector<int>> matrix{{1, 2, 3, 4},
                               {5, 1, 2, 3},
                               {9, 5, 1, 2}};

    vector<vector<int>> mat2{{3, 4},
                             {5, 3},
                             {6, 5}};

    bool isToeplitiz = sol.isToeplitzMatrix(mat2);

    return 0;
}
