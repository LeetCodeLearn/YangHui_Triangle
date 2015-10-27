//
//  main.cpp
//  YangHui_Triangle
//
//  Created by 李佳 on 15/10/27.
//  Copyright © 2015年 LiJia. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> generate(int numRows)
    {
        vector<vector<int>> result;
        if (numRows <= 0)
            return result;
        vector<int> lastRow;
        for (int i = 0; i < numRows; ++i)
        {
            vector<int> row;
            row.push_back(1);
            for (int j = 1; j <= i - 1; j++)
            {
                row.push_back(lastRow[j - 1] + lastRow[j]);
            }
            if (i != 0)
                row.push_back(1);
            result.push_back(row);
            lastRow.assign(row.begin(), row.end());
        }
        return result;
    }
};

void printTriangele(const vector<vector<int>>& Rows)
{
    
}


int main(int argc, const char * argv[])
{
    Solution sol;
    vector<vector<int>> result = sol.generate(1);
    return 0;
}
