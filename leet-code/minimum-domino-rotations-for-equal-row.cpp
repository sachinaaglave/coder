#include <iostream>

#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int minRotations(vector<int> &A, vector<int> &B)
    {

        if (A.size() == 0)
            return 0;

        int upCnt = 0;
        int upVal = A[0];

        for (int i = 0; i < A.size(); i++)
        {

            if (upVal == A[i])
                upCnt++;
        }

        int downCnt = 0;
        for (int i = 0; i < B.size(); i++)
        {

            if (upVal == B[i] && A[i] != B[i])
            {
                downCnt++;
            }
        }

        if (upCnt + downCnt == A.size())
        {
            return min(upCnt, downCnt);
        }

        return -1;
    }

    int minDominoRotations(vector<int> A, vector<int> B)
    {
        int up = minRotations(A, B);
        int down = minRotations(B, A);

        if (up >= 0 && down >= 0)
        {
            return min(up, down);
        }

        if (up >= 0)
            return up;
        if (down >= 0)
            return down;

        return -1;
    }
};

int main(int argc, char const *argv[])
{
    Solution s;
    cout << "ans " << s.minDominoRotations(vector<int> {1,1,1,2,1,1,1,2,1,1,2,1,1,2,2,1,1,1,1,1,1,1,1,2,1,1,1,1,1,1,1,1,1,2,1,2,1,1,1,1,1,1,2,1,1,2,1,1,1,2,1,1,1,1,1,1,1,2,1,2,2,1,1,1,1,1,1,1,1,1,1,1,2,2,1,1,1,2,1,1,1,1,1,1,2,1,1,2,2,1,1,1,1,1,1,2,1,1,1,2,1,1,1,2,1,2,1,2,1,2,1,1,1,1,1,1,1,1,1,2,1,1,1,2,2,1,2,1,1,1,1,1,2,1,1,1,1,1,1,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,2,1,1,2,1,1,2,2,1,1,1,1,2,1,1,1,1,1,1,1,1,2,1,2,2,1,1,1,1,2,2,1,2,1,2,1,1,1,1,1,1,1,1,2,1,2,1,2,1,1,1,1,2,1,1,1,1,1,1,1,2,2,1,1,1,1,2,1,1,1,2,1,2,1,1,1,1,1,1,1,1,1,1,1,1,2,2,1,1,1,1,1,1,1,1,1,2,2,2,1,2,1,1,2,1,2,1,1,2,2,2,1,1,1,1,2,2,1,1,1,1,1,1,1,1,2,1,1,1,1,2,2,2,1,1,1,1,2,2,2,2,1,2,1,1,2,1,1,2,1,2,2,1,1,2,2,1,1,1,1,2,1,1,1,1,1,2,1,1,1,1,1,1,2,1,2,2,2,1,1,1,1,2,1,1,2,1,1,1,1,1,1,1,2,1,1,2,1,1,1,1,1,1,1,1,1,2,1,1,1,2,1,2,1,1,1,2,1,1,1,1,1,1,2,1,1,2,1,1,2,1,1,1,2,1,1,1,1,2,1,1,1,1,1,1,1,1,2,2,1,1,2,1,1,1,1,1,1,2,1,1,2,2,2,2,1,2,1,1,1,1,2,1,1,1,1,2,1,1,1,2,1,2,1,1,1,1,2,1,1,1,1,1,2,1,1,1,2,1,1,1,1,2,1,1,1,1,1,1,1,2,1,1,1,1,1,1,1,1,2,1,1,1,2,1,2,1,1,1,1,2,1,1,1,1,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,1,1,1,2,1,1,2,1,1,2,1,1,2,1,1,2,1,2,2,1,2,1,1,1,1,1,1,2,1,2,2,1,1,1,1,2,2,1,1,1,1,1,1,1,1,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,2,2,1,1,1,1,1,2,2,1,1,1,2,1,1,2,1,1,2,1,2,1,1,1,1,1,1,2,1,1,2,1,1,1,1,2,2,1,2,1,1,1,1,1,1,2,1,1,1,1,1,1,1,1,1,2,1,1,1,2,1,1,1,2,1,1,1,1,2,1,1,1,2,1,1,1,2,2,1,1,2,1,1,2,2,1,1,1,2,1,2,2,1,2,1,1,1,1,1,2,1,2,1,1,1,1,1,1,1,1,1,1,1,1,2,1,1,1,1,1,2,1,2,1,2,1,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,1,1,1,2,1,2,1,1,2,1,1,1,2,1,2,1,2,1,1,1,1,1,2,1,1,1,2,1,1,1,1,1,1,1,2,1,1,1,1,1,2,1,2,1,1,1,1,1,1,1,1,1,1,2,1,1,2,2,1,1,1,1,2,1,2,2,1,1,2,2,2,1,1,1,1,1,2,2,2,1,2,1,1,1,2,2,1,1,1,1,1,1,1,1,1,2,1,1,1,2,1,2,1,1,1,1,1,1,1,1,1,1,2,1,1,1,1,1,2,1,1,1,1,1,1,1,2,1,1,2,1,1,1,1,1,1,2,1,2,1,2,1,1,1,1,2,1,1,1,2,1,1,1,2,2,1,1,2,1,1,1,1,1,1,1,2,1,1,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,1,1,1,1,1,1,2,1,2,1,2,1,1,1,1,1,1,2,1,1,1,1,1,1,1,2,1,1,1,1,1,1,1,2,1,1,1,2,2,1,1,2,1,2,1,2,1,1,1,1,2,1,1,1,1,1,1,1,1,1,2,2,1,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,2,1,2,1,2,1,1,1,1,1,1,1,1,1,1,1,1,2,1,1,1,1,1,2,1,1,2,1,2,1,1,1,1,2,1,1,1,2,1,2,2,1,1,2,1,1,2,1,1,2,1,1,2,1,1,1,1,1,1,1,1,1,1,2,1,2,2,1,1,2,1,1,1,1,2,1,2,1,1,1,1,1,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,1,1,1,2,2,1,1,1,1,2,1,2,1,2,1,2,1,2,2,1,1,2,1,2,1,2,1,2,1,1,1,1,2,1,2,1,1,1,1,1,2,2,1,1,1,1,2,1,1,1,1,1,1,1,1,1,2,2,2,1,1,1,1,2,1,1,1,1,1,2,2,1,2,1,2,1,2,1,1,1,1,1,1,1,1,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,1,2,2,2,1,1,1,1,2,1,1,1,2,1,2,1,2,2,1,1,2,2,1,1,1,1,2,2,2,1,2,2,1,2,1,1,1,1,1,1,1,1,1,1,1,1,1,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,1,1,2,2,2,1,1,1,2,2,2,1,2,1,2,1,1,1,1,1,1,1,1,2,1,1,1,2,1,1,1,2,2,1,1,1,1,2,2,2,1,1,1,1,2,1,1,1,2,1,1,1,2,2,1,2,1,1,1,1,1,1,1,2,1,1,1,1,1,1,2,2,1,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,2,1,1,2,1,1,1,1,2,2,1,1,1,1,1,1,1,1,2,1,2,1,1,1,1,1,2,1,1,1,2,1,1,1,1,2,1,1,1,1,1,1,1,2,1,1,1,1,1,2,1,1,1,2,1,2,1,1,1,2,1,2,1,1,1,1,1,1,1,1,1,2,2,1,1,1,2,2,1,1,2,1,1,1,1,1,1,1,1,1,1,2,2,1,1,1,1,1,1,1,2,1,1,1,1,2,2,1,2,1,1,2,1,1,1,1,1,1,2,2,2,1,1,2,1,2,1,1,1,1,1,1,2,1,1,1,2,1,1,1,1,1,1,1,1,1,1,1,2,1,1,1,1,2,1,1,2,2,1,1,1,1,1,1,1,1,1,2,1,1,1,1,1,1,2,2,1,1,1,1,1,1,1,1,1,1,2,1,1,1,1,2,1,1,2,2,1,2,1,1,1,2,1,2,1,1,1,2,1,1,2,1,2,1,1,1,2,1,2,2,1,1,1,2,1,1,1,1,1,1,1,1,2,1,1,1,1,2,1,1,1,2,1,1,1,1,1,1,1,2,1,1,2,1,1,1,1,1,1,2,1,1,1,1,1,2,1,1,1,1,2,1,1,1,2,2,1,1,2,1,1,2,2,1,1,2,1,2,1,2,1,2,1,1,2,1,1,1,1,1,1,1,1,1,1,1,1,2,2,2,1,2,1,2,1,1,1,2,1,2,1,2,1,1,1,1,1,1,1,1,1,1,1,2,1,1,2,2,1,1,1,2,2,1,1,1,1,1,2,1,2,1,2,2,1,1,2,1,1,1,1,2,1,1,1,1,1,2,1,1,2,1,1,1,1,2,2,1,1,1,1,2,1,2,1,2,1,1,2,2,1,1,1,1,1,2,1,1,1,1,1,1,1,2,1,1,1,1,2,1,1,2,1,1,1,1,2,2,1,1,1,1,1,1,2,1,1,1,2,1,2,1,1,1,1,1,2,1,2,1,1,2,2,1,1,1,1,1,1,2,1,2,1,1,1,1,1,2,2,2,1,1,1,1,1,1,2,2,1,1,2,1,2,1,2,2,1,1,1,1,1,2,1,1,1,1,1,2,1,1,2,1,1,1,1,1,1,1,1,1,1,1,1,1,2,1,1,2,2,1,1,1,2,1,1,2,1,2,1,2,1,2,1,2,2,1,2,1,1,1,1,1,2,1,1,1,2,1,2,1,1,2,1,1,2,1,2,2,1,1,1,1,2,1,1,1,1,1,1,1,1,1,1,1,1,2,1,1,2,1,1,1,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,2,1,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,1,2,1,2,2,2,1,1,1,1,1,1,1,1,1,2,1,1,1,2,1,1,1,2,2,1,1,2,2,1,2,1,2,2,1,1,1,1,1,2,1,1,1,1,1,1,2,2,1,1,1,2,1,2,1,1,1,2,1,1,1,1,1,2,1,2,1,1,1,1,2,2,2,1,1,1,1,1,1,1,1,2,1,1,2,1,1,1,2,1,1,1,1,2,1,1,1,1,2,2,1,1,2,1,2,1,1,1,1,1,2,2,1,1,1,1,2,1,1,1,1,1,2,1,1,1,1,1,1,1,1,1,1,1,2,2,2,2,1,1,1,1,1,2,1,1,1,2,1,1,1,1,1,1,1,1,1,2,1,1,2,1,2,2,1,2,2,2,2,1,2,2,1,2,1,1,2,2,2,1,2,1,1,2,2,2,1,1,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,2,2,1,1,1,2,2,1,1,1,1,1,1,1,1,2,1,1,1,1,2,1,1,1,1,2,2,1,1,2,1,1,1,1,1,1,1,1,1,1,1,1,1,2,1,2,1,2,1,1,1,1,1,1,2,1,2,2,1,1,1,1,1,1,1,1,1,2,1,1,1,1,1,1,2,1,1,1,1,2,1,2,1,1,1,2,1,1,1,1,1,1,1,1,1,2,2,1,2,1,1,1,1,1,1,1,1,2,1,2,1,1,1,1,1,1,1,1,1,1,2,1,1,2,1,2,2,1,2,1,1,1,1,1,1,2,1,2,1,1,1,2,1,2,2,1,2,2,1,1,2,2,1,1,1,2,1,1,1,1,2,1,2,1,1,1,1,1,1,1,2,1,2,1,1,2,1,1,1,1,1,2,1,2,1,1,1,1,1,1,1,1,1,1,2,2,1,1,1,1,1,1,1,2,1,2,1,2,2,1,1,2,1,1,2,1,1,1,1,2,1,2,1,2,1,1,1,1,2,1,1,2,1,2,2,1,1,1,2,1,2,1,1,1,1,1,1,1,2,1,1,2,1,1,1,1,1,1,1,1,1,1,1,1,2,1,1,1,2,2,2,1,1,1,1,1,1,1,1,1,1,2,1,1,1,2,1,1,1,1,1,1,2,1,2,1,2,1,1,1,1,1,1,1,1,1,1,2,1,1,2,2,1,1,1,2,1,1,2,1,1,2,1,1,1,1,1,1,1,1,2,1,2,1,1,1,1,2,2,1,1,2,1,1,1,1,2,1,1,1,1,1,1,1,2,1,1,1,2,1,1,1,1,1,1,1,1,1,2,1,1,1,1,1,1,1,1,1,2,1,1,2,2,1,1,1,1,2,1,1,1,2,1,1,1,2,1,1,2,2,2,1,1,2,1,1,1,1,2,1,1,1,1,1,1,2,1,2,1,1,2,1,2,1,1,1,2,1,1,1,1,2,1,1,1,1,2,1,1,1,1,1,1,1,1,1,2,1,1,1,1,1,1,1,2,1,1,1,1,1,2,1,1,1,2,1,2,2,2,1,2,1,1,1,2,1,2,2,1,1,2,1,2,1,1,1,1,2,1,1,2,2,1,1,1,1,1,1,1,1,2,2,1,2,1,1,2,1,1,1,1,1,2,2,1,1,1,1,2,1,2,1,1,1,1,1,1,1,1,1,1,1,2,1,1,1,1,1,2,2,1,2,2,1,1,1,1,1,1,1,1,1,1,2,1,1,1,1,1,1,1,1,2,2,2,2,2,1,1,1,1,2,1,1,1,2,1,1,1,1,2,2,1,1,2,1,1,1,1,1,2,1,1,1,1,1,2,1,1,1,1,1,1,1,1,1,1,1,2,1,1,2,2,1,1,1,2,2,1,1,2,1,1,1,2,1,2,1,2,1,1,1,1,2,1,1,1,2,1,2,2,1,1,1,1,1,1,2,2,1,1,1,1,2,1,1,2,1,1,2,1,2,1,1,1,1,1,1,1,1,1,1,2,2,1,1,2,2,1,1,2,1,2,2,2,1,2,1,1,1,1,1,1,1,1,2,1,2,2,1,1,2,2,1,1,2,1,1,1,1,1,1,2,2,1,1,1,1,1,1,2,1,1,1,1,1,2,1,2,2,1,1,2,2,1,1,1,1,1,2,1,1,1,2,1,1,2,1,2,1,1,2,1,1,1,1,1,2,2,1,1,1,1,1,2,1,1,2,1,1,2,1,1,1,1,1,1,1,1,1,2,2,1,1,1,1,1,2,2,1,1,1,1,1,1,2,2,1,2,1,1,1,1,2,1,1,2,1,1,2,1,2,1,1,1,1,1,1,1,2,1,1,2,2,2,1,1,2,1,1,1,1,1,2,1,2,2,2,1,1,1,1,1,1,2,1,1,2,1,1,1,1,1,2,1,1,1,2,1,1,1,2,2,1,1,1,1,1,1,2,1,1,2,1,1,1,1,1,1,1,2,1,1,2,1,1,1,1,1,1,1,1,1,2,1,1,1,1,1,2,1,2,1,2,1,1,1,1,1,1,1,1,2,1,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,1,1,1,1,1,2,1,1,1,1,1,2,1,2,1,2,1,1,2,1,1,1,1,1,1,1,1,1,1,1,2,1,1,1,2,1,1,1,1,1,1,2,1,1,1,1,1,1,2,2,1,1,1,1,1,1,2,2,1,1,1,1,1,1,1,2,2,1,2,1,2,1,1,1,1,2,1,1,1,1,2,2,1,1,1,1,1,1,1,1,1,2,1,1,2,1,1,1,1,1,2,1,1,1,1,1,1,1,2,1,1,1,1,2,1,1,1,2,1,1,2,1,2,2,2,1,1,1,1,1,1,1,2,1,2,1,1,1,1,1,1,2,1,1,1,2,1,1,2,1,1,2,2,1,1,1,1,1,1,2,1,2,2,1,1,1,1,1,2,1,1,1,1,1,2,1,1,1,2,2,1,2,1,1,1,1,1,1,1,1,2,2,2,1,2,1,1,2,1,1,1,2,1,1,2,2,1,1,1,1,1,1,1,1,1,1,1,1,2,1,1,1,1,1,1,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,1,1,2,1,1,2,1,1,2,1,1,1,2,1,1,1,1,1,1,1,1,1,1,1,1,1,2,2,1,2,1,1,1,1,1,1,1,1,1,2,1,2,2,1,1,1,1,1,2,1,2,1,1,1,2,1,1,2,1,1,1,1,2,1,2,2,1,2,1,1,1,1,1,1,1,1,2,2,1,2,2,1,1,2,1,1,1,1,1,1,1,1,1,1,1,2,1,1,1,1,1,2,1,2,1,1,1,1,1,1,1,1,1,2,1,1,1,2,1,1,2,1,1,1,1,2,1,2,2,2,2,1,1,1,1,2,1,1,2,1,2,2,1,2,1,1,1,1,1,1,1,1,1,2,1,1,1,1,1,1,1,2,1,1,1,1,1,1,2,1,1,1,1,2,1,1,1,1,1,1,1,1,2,1,2,2,1,2,1,2,1,2,1,1,1,1,2,1,1,2,2,2,1,1,1,1,1,2,1,1,1,1,2,2,1,1,1,2,2,1,1,1,1,1,2,1,1,2,1,1,1,1,1,1,2,1,1,2,1,1,1,2,1,1,1,1,1,2,1,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,2,1,1,1,1,2,1,1,1,1,1,1,1,1,2,1,2,1,1,2,1,1,1,1,1,1,1,1,2,1,2,1,1,1,1,1,2,1,2,2,2,1,2,1,2,1,1,1,2,1,1,1,2,1,2,1,2,2,2,1,1,1,1,1,1,1,1,2,1,1,1,1,2,1,1,2,1,1,1,2,1,1,1,1,1,1,1,1,1,1,1,2,1,1,1,1,1,1,1,1,1,1,2,1,1,1,1,2,1,1,2,1,1,1,1,1,1,1,1,1,1,2,1,1,1,1,1,2,1,2,2,1,1,1,1,1,1,1,1,2,1,1,1,2,1,2,1,1,1,1,2,1,2,2,1,1,1,2,1,1,1,1,1,2,2,2,1,1,1,2,1,2,1,1,1,1,1,1,1,2,1,1,1,1,1,1,1,1,2,2,2,2,1,2,2,1,1,1,2,2,1,1,1,1,1,2,2,1,1,1,1,1,2,2,1,1,1,1,1,1,1,2,1,2,1,1,1,2,2,2,2,1,1,1,1,2,1,1,1,1,2,1,1,1,1,1,1,1,1,1,2,1,2,1,1,1,1,2,2,1,1,2,1,1,1,1,1,2,1,1,1,2,1,1,1,2,1,1,2,2,1,1,1,2,1,2,2,1,1,1,1,1,1,1,1,2,1,1,2,1,1,1,1,1,1,1,1,1,2,1,1,1,1,2,1,1,1,2,1,1,1,1,2,1,2,1,1,1,1,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,2,1,1,1,2,1,1,2,1,1,1,1,1,1,1,2,1,1,1,2,1,1,1,1,1,1,1,1,2,2,2,2,1,1,2,2,1,1,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,1,1,2,1,1,2,2,1,1,1,1,1,1,1,1,1,1,1,2,1,1,1,1,1,2,2,1,1,2,2,1,1,2,1,1,1,1,1,1,1,2,1,1,2,2,1,1,1,1,2,1,1,1,1,1,1,1,1,2,2,1,2,1,1,1,2,1,1,2,1,1,2,1,1,1,1,2,1,1,1,1,1,1,1,1,2,1,1,1,1,1,2,2,1,1,1,1,1,2,1,1,2,1,1,1,1,1,1,1,1,2,1,1,1,1,1,1,1,1,1,2,2,2,1,1,2,1,1,2,1,2,2,1,1,1,1,1,1,1,2,1,1,1,1,1,2,2,1,2,1,1,2,1,1,1,1,2,1,2,2,1,2,1,1,1,2,2,2,1,1,1,1,1,1,1,2,2,1,1,1,1,1,1,1,1,1,1,1,2,2,2,1,1,1,1,1,2,1,1,1,1,1,1,1,1,1,2,1,1,1,1,1,2,1,1,1,1,2,1,2,1,1,2,2,1,1,2,2,1,2,1,1,1,1,1,1,2,2,1,1,1,1,1,2,1,2,1,1,1,1,1,1,1,1,1,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,1,1,2,1,1}, vector<int>{2,2,1,1,1,1,2,1,2,2,1,2,1,1,1,1,1,1,2,1,1,1,1,1,1,2,2,1,1,1,1,1,1,1,1,1,1,1,2,2,1,2,1,1,1,1,2,1,1,1,2,1,1,1,1,1,2,1,2,1,1,1,1,2,1,1,2,2,1,1,2,1,1,1,1,2,1,1,1,1,1,2,1,2,1,1,2,1,1,1,2,1,2,1,2,1,2,2,1,1,2,1,1,1,2,1,1,1,1,1,2,1,2,1,1,1,1,1,1,1,2,2,2,1,1,1,1,1,2,1,1,1,1,1,1,2,1,1,1,1,1,1,2,1,2,1,2,2,1,1,1,2,1,1,2,2,2,1,1,1,2,2,1,2,2,1,1,1,1,1,2,1,1,2,1,1,1,1,1,1,1,1,1,1,1,2,2,1,1,1,1,1,1,1,2,1,1,1,1,1,1,2,1,2,1,1,1,1,1,1,1,1,2,2,2,1,2,2,2,1,1,2,1,1,1,1,1,2,1,1,1,1,2,1,1,2,1,2,1,1,1,1,2,1,1,1,1,1,1,1,1,2,2,2,2,1,1,1,2,1,2,1,1,1,1,1,2,1,1,1,2,2,2,1,1,1,1,1,2,2,1,2,1,1,1,1,1,1,1,1,1,1,1,1,2,1,1,1,1,1,1,1,1,1,1,1,2,1,1,1,1,1,2,1,1,1,1,1,2,1,1,1,1,2,1,1,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,1,1,1,2,2,1,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,1,2,1,1,1,1,2,1,2,2,1,2,1,1,1,1,1,1,2,2,2,1,1,1,1,1,2,2,1,1,2,1,1,1,1,1,1,1,2,1,1,2,1,1,2,1,1,1,1,2,1,1,1,1,2,1,1,2,2,1,1,1,1,1,1,1,1,2,1,1,1,1,1,1,1,1,1,1,2,1,2,1,1,1,1,1,1,2,1,1,1,1,1,1,1,1,1,2,2,2,1,1,1,1,2,1,2,1,2,1,2,1,2,1,1,1,2,1,2,1,1,2,1,2,2,1,1,1,1,1,1,1,1,1,1,2,1,1,1,1,1,2,1,1,2,1,1,1,1,1,1,1,1,1,1,1,1,1,2,1,2,2,2,1,1,1,1,1,2,1,1,1,1,1,1,2,2,1,1,1,2,1,1,1,2,2,1,2,1,2,1,1,1,2,2,1,1,1,1,1,1,1,2,2,2,1,1,2,2,1,1,2,1,1,1,1,1,1,1,1,2,1,1,1,1,1,1,1,1,2,1,1,1,1,1,1,1,1,1,1,2,1,1,1,1,1,1,1,1,2,1,1,1,1,2,1,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,1,1,1,1,1,1,1,1,1,1,2,2,2,1,1,1,1,1,1,1,2,1,1,1,1,1,1,2,1,1,1,1,1,1,1,1,1,2,1,1,1,1,1,1,1,1,2,1,2,1,1,1,1,1,2,1,1,1,2,1,2,2,1,1,1,2,1,1,1,1,1,1,2,1,1,1,1,1,1,1,2,2,1,1,1,2,1,1,1,2,1,2,1,1,1,1,1,1,2,1,1,1,1,1,1,2,2,1,1,1,1,1,1,1,1,1,2,2,1,1,1,1,2,1,1,2,1,1,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,2,1,1,1,1,1,1,1,1,1,1,2,2,1,2,1,2,2,1,1,1,2,2,1,1,2,1,2,1,1,1,1,2,1,2,1,1,1,2,1,2,1,2,1,2,2,1,2,1,1,2,1,1,1,1,1,2,1,1,2,1,1,1,1,1,1,2,1,2,1,1,1,1,2,1,1,2,1,1,1,2,2,1,1,1,2,1,1,1,1,1,2,2,1,2,1,1,2,2,1,1,1,1,1,2,1,1,1,2,1,1,1,1,1,1,1,1,2,1,1,1,2,1,1,1,1,1,1,1,1,2,1,2,1,1,1,1,2,2,1,1,1,1,2,1,2,2,1,2,1,1,1,1,1,1,1,1,1,1,2,1,1,1,1,1,2,2,1,1,1,1,1,1,1,1,2,1,1,1,1,1,1,1,1,1,1,1,2,2,1,1,2,2,1,2,1,1,1,1,1,1,1,2,1,1,1,2,1,2,1,1,1,1,1,1,1,1,2,2,2,1,1,1,1,1,1,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,1,1,1,2,1,2,1,1,1,1,1,2,1,2,2,2,1,1,1,2,1,1,1,1,1,1,2,1,1,1,1,1,1,1,2,1,2,1,1,2,1,1,2,2,1,1,2,1,1,2,2,1,1,2,1,1,2,1,1,1,1,1,1,1,2,1,1,1,1,1,1,1,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,1,1,1,1,1,1,1,1,1,1,2,1,1,1,1,1,1,2,2,1,1,2,1,1,1,1,2,1,1,1,1,1,2,1,1,1,1,1,1,1,1,1,1,1,2,2,2,1,1,1,1,1,1,1,2,2,1,2,1,1,2,1,2,2,1,1,2,1,2,1,1,1,1,1,1,2,2,1,1,1,1,2,1,1,1,1,1,1,1,1,1,1,1,2,1,1,1,1,1,1,2,1,1,1,1,2,2,1,1,2,1,1,2,1,1,1,2,1,1,1,1,1,2,2,1,1,2,1,1,1,1,1,1,1,1,2,1,1,1,1,1,2,1,1,1,1,2,1,1,1,2,2,2,1,1,1,2,2,1,2,1,1,1,2,1,1,1,1,1,1,1,1,1,1,1,1,2,1,1,1,1,2,1,1,1,1,2,1,1,2,1,1,1,1,2,1,2,1,1,1,2,1,2,2,1,1,1,1,1,1,2,1,1,2,1,1,1,1,1,2,1,1,2,1,1,1,1,1,1,2,1,1,1,1,1,1,1,1,1,1,2,2,2,1,2,1,1,1,1,2,1,1,1,2,1,2,1,2,1,2,2,1,1,1,1,1,2,2,1,1,1,1,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,1,1,2,2,1,2,1,2,1,1,2,1,1,1,1,1,2,1,2,1,1,2,2,2,1,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,1,1,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,2,1,2,2,1,1,2,2,1,1,2,1,1,1,1,1,2,1,1,2,1,1,1,1,2,1,2,2,2,1,1,2,1,2,1,2,1,1,1,1,1,1,1,1,1,1,2,1,2,2,1,1,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,2,1,1,1,1,1,1,1,1,1,2,1,1,1,1,1,1,1,1,1,1,2,1,2,2,1,1,1,1,1,2,1,1,2,1,1,1,2,2,2,1,2,2,1,1,2,2,1,1,1,1,1,2,1,1,1,1,1,2,2,1,2,1,1,1,1,1,2,1,1,1,1,2,1,1,2,1,1,1,1,1,1,1,1,1,1,1,1,2,1,1,1,2,2,2,2,2,1,1,1,1,1,1,1,1,2,1,1,1,1,2,1,1,1,1,2,1,1,1,2,2,2,1,1,2,2,2,1,1,1,2,1,1,1,2,2,1,1,2,2,1,2,1,1,1,1,2,1,1,1,1,1,1,1,1,1,1,1,1,2,1,1,1,1,2,1,1,1,1,2,1,1,1,1,2,2,1,2,1,2,1,1,1,1,1,2,1,1,2,1,1,1,1,2,1,1,2,1,1,1,1,2,1,1,1,2,1,2,2,2,1,1,1,2,2,1,1,2,1,1,1,1,1,1,2,1,2,1,1,1,2,1,2,1,2,1,1,1,1,1,1,1,1,2,1,1,1,1,2,1,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,1,1,1,1,1,1,1,1,1,1,2,1,1,1,1,1,1,2,2,1,2,1,1,1,2,1,1,2,1,1,1,1,2,1,1,1,2,1,1,1,2,1,1,1,1,1,1,1,1,1,1,2,1,1,2,1,1,1,1,1,1,2,1,1,1,1,1,1,2,1,1,1,1,1,1,1,1,1,1,2,1,1,1,1,1,2,1,1,2,1,1,1,2,2,1,1,1,1,1,2,2,2,1,1,1,1,2,1,2,1,2,2,1,1,1,1,2,1,1,1,2,1,1,1,1,2,1,2,2,1,1,1,1,1,1,2,2,1,1,1,1,1,2,1,1,1,1,2,1,1,1,1,2,2,2,1,1,1,1,1,1,2,2,1,1,1,2,1,1,1,1,2,1,1,1,2,2,2,2,1,2,1,1,1,2,1,1,1,2,1,2,1,2,1,1,2,1,1,1,1,1,2,1,1,1,1,1,1,2,2,1,1,1,1,2,1,2,1,1,2,1,1,1,1,1,1,2,1,1,2,1,2,1,1,1,1,2,1,1,1,1,1,1,2,1,1,1,2,1,1,1,1,2,1,1,1,1,2,2,1,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,2,1,1,1,2,1,2,1,2,1,1,2,1,1,2,1,1,1,1,1,1,1,2,1,1,1,1,1,1,1,1,1,2,1,1,1,1,2,1,2,2,1,1,1,1,1,1,1,1,1,1,2,2,2,2,1,1,2,1,2,2,2,1,1,1,1,1,2,1,1,1,1,2,2,1,1,2,2,1,1,2,1,1,1,2,2,2,1,1,1,2,1,1,1,2,1,2,1,2,2,1,1,2,2,1,2,1,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,1,2,1,1,1,1,2,1,1,1,1,1,1,1,1,1,1,1,2,1,1,2,1,2,1,1,1,2,1,1,1,1,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,1,1,1,1,1,1,1,1,1,1,1,2,2,1,1,1,2,2,1,1,1,2,1,1,1,1,1,1,1,1,1,1,2,1,1,1,1,1,1,1,1,2,1,1,1,1,1,2,1,2,1,2,1,1,1,1,1,1,1,1,2,1,2,1,1,1,1,1,1,2,1,1,1,1,1,2,2,1,1,1,1,1,1,2,1,2,1,1,1,1,2,1,1,1,1,2,1,1,1,1,1,1,1,1,1,2,1,1,1,2,1,1,2,1,1,2,2,2,1,1,1,1,2,1,2,1,1,1,2,2,1,1,1,1,2,1,2,2,1,1,1,2,1,2,1,1,2,1,1,1,1,2,1,1,1,1,1,1,1,1,1,2,2,1,1,1,1,1,1,1,1,2,1,1,1,1,2,2,1,1,1,1,1,2,1,2,1,1,1,2,1,1,1,1,2,1,2,1,1,1,1,1,1,1,1,2,2,1,1,1,1,2,1,1,1,1,2,1,2,1,1,1,2,1,1,2,1,1,1,2,2,1,1,1,1,1,2,1,2,1,1,1,1,1,1,1,1,1,2,1,1,1,2,2,1,2,1,1,1,1,1,1,1,1,1,2,1,2,1,1,1,1,1,1,2,1,1,2,1,1,1,2,2,1,1,1,1,1,1,1,2,1,2,2,1,1,1,1,2,1,1,1,1,2,1,1,1,2,1,1,2,2,2,1,1,1,1,1,2,2,1,1,2,1,1,1,1,1,1,1,1,1,1,1,2,2,1,1,1,1,1,1,2,1,2,1,1,1,1,2,1,1,1,1,1,2,2,2,1,2,1,1,1,1,1,2,1,2,1,1,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,2,2,1,1,1,1,1,2,1,1,1,1,1,2,2,1,1,1,1,1,1,1,1,2,2,1,1,2,1,1,1,1,2,1,1,1,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,2,1,1,1,2,1,2,2,2,1,2,1,2,1,1,1,1,1,1,1,1,2,1,1,2,1,1,2,1,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,1,1,1,1,2,1,2,1,2,1,1,2,1,1,1,1,1,2,2,1,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,1,1,1,2,1,1,1,1,1,1,1,1,2,1,1,2,1,1,1,2,2,1,1,2,1,1,2,1,2,1,1,1,1,2,1,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,1,1,1,1,1,1,1,1,1,1,1,1,1,2,1,1,2,2,1,1,1,1,1,2,2,1,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,1,1,1,2,1,1,1,2,1,2,2,1,2,1,1,2,1,1,1,1,2,1,2,2,1,2,1,1,1,1,1,1,1,1,1,1,2,1,1,2,1,2,2,1,1,1,1,1,2,1,2,2,1,2,1,2,1,1,1,1,1,2,2,1,2,2,2,1,1,1,2,1,1,2,1,2,1,1,2,1,1,2,1,2,1,2,1,1,1,1,1,1,1,1,1,2,1,2,2,1,2,1,1,1,1,2,1,2,2,1,1,1,2,1,1,1,2,1,1,2,1,1,1,2,1,1,2,2,1,1,1,2,1,1,2,2,1,1,1,1,1,1,1,1,1,1,2,1,2,1,1,2,1,1,1,1,2,2,1,2,1,1,1,1,1,1,1,1,1,1,2,1,1,1,2,1,1,2,1,1,2,1,1,1,2,2,1,2,1,1,2,2,2,2,1,1,2,1,1,1,1,1,1,2,2,1,1,2,2,1,1,1,1,1,1,2,1,1,2,2,2,2,1,1,1,1,1,2,1,2,1,2,1,1,1,2,1,2,1,1,2,1,1,1,1,2,2,1,1,1,1,1,2,2,1,1,1,2,1,1,1,1,1,1,1,2,1,2,1,1,1,2,1,1,2,1,1,1,1,1,1,1,1,1,1,1,2,1,1,1,1,1,1,2,2,2,1,1,1,1,1,1,1,1,1,1,1,2,1,1,1,1,1,1,1,1,1,2,1,1,1,1,1,1,2,1,2,1,1,1,1,1,1,2,2,2,1,2,1,1,1,1,1,1,2,1,1,1,1,1,1,2,1,1,1,1,1,1,1,1,1,1,1,1,2,1,2,1,1,1,1,2,1,1,2,1,1,2,2,2,2,1,2,1,1,2,1,1,2,1,2,2,2,1,1,1,1,2,2,1,1,1,1,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,2,1,1,1,1,1,1,1,1,1,2,1,2,2,2,2,1,2,2,1,2,1,2,1,1,2,1,1,1,1,2,1,1,1,1,1,1,1,1,1,2,1,1,1,1,1,1,1,2,2,1,1,2,1,1,1,2,2,1,1,2,1,1,1,1,2,2,1,1,2,2,1,1,1,1,1,1,1,1,1,1,2,1,2,1,2,1,2,1,1,1,2,1,1,1,1,2,1,1,1,1,1,1,1,2,1,1,1,2,1,1,1,2,1,1,1,2,1,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,1,1,2,1,1,1,1,1,2,1,1,1,1,1,1,1,1,1,1,1,2,2,2,1,1,2,1,2,1,1,2,1,1,1,1,1,1,1,1,2,1,2,1,1,1,1,2,1,1,2,1,2,1,2,1,1,1,2,1,1,1,2,1,1,1,1,2,2,2,1,1,1,2,2,2,1,1,1,1,2,1,1,2,2,1,1,1,1,1,1,1,1,1,1,2,2,2,1,1,1,1,1,1,1,1,1,1,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,2,2,1,2,1,1,2,2,2,1,1,2,1,2,1,2,1,1,2,1,1,1,1,1,1,2,1,1,1,1,2,2,2,1,1,1,1,1,2,2,1,1,1,1,1,1,2,1,2,1,1,1,1,1,1,1,2,1,1,1,2,1,1,1,2,1,1,1,1,1,2,1,1,1,1,1,2,1,2,1,1,2,1,1,1,1,1,2,1,1,1,2,2,2,1,2,1,1,1,1,2,1,1,1,1,2,1,1,2,1,1,1,1,1,1,1,2,1,2,1,1,1,1,1,1,1,1,1,2,1,2,1,1,2,1,1,1,1,2,2,1,1,1,1,1,1,1,2,1,2,1,1,1,1,1,1,1,1,1,1,2,2,1,2,1,2,1,1,1,1,1,1,1,1,1,2,1,1,1,2,1,1,1,2,1,2,1,1,1,2,1,1,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,2,1,1,1,1,1,2,1,2,1,1,1,2,2,1,2,1,2,1,1,1,2,1,1,1,1,1,1,1,1,1,1,1,1,1,2,1,1,1,2,1,1,2,1,1,2,1,1,1,1,1,2,1,2,1,1,1,2,1,1,1,2,2,2,1,1,2,2,1,1,2,1,1,2,1,1,1,2,2,1,1,2,1,1,1,1,1,1,2,1,1,1,1,1,1,1,1,1,1,2,2,2,1,2,2,1,2,1,1,1,1,1,1,2,1,1,1,1,1,1,1,1,1,2,2,2,1,1,1,1,1,2,1,1,2,1,1,1,2,1,1,1,1,1,1,1,1,1,2,1,1,2,2,1,1,1,2,1,1,1,1,1,1,1,1,1,1,2,1,1,1,1,2,1,1,1,1,1,1,1,1,1,2,1,1,1,1,1,1,2,2,1,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,2,1,1,2,1,2,2,2,1,1,1,2,1,1,1,2,1,1,1,1,1,1,2,1,1,2,1,1,2,2,1,2,1,1,1,1,1,1,1,2,2,1,1,1,1,2,2,2,1,1,1,1,2,1,1,1,2,1,2,2,1,1,1,1,1,2,2,1,1,2,1,1,1,1,1,2,1,1,2,1,2,1,1,1,1,1,1,1,1,1,1,1,2,1,1,2,1,1,2,2,1,2,1,1,2,1,1,1,1,1,1,2,1,1,1,1,2,1,2,2,1,2,1,1,1,1,1,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,1,1,1,1,1,1,1,1,1,2,1,1,1,2,1,1,1,1,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,1,1,1,2,1,1,1,2,1,1,2,2,1,2,2,1,1,1,1,1,2,1,1,1,1,1,1,1,1,1,2,1,1,2,2,1,1,1,1,1,1,2,1,1,1,1,1,1,1,2,1,1,2,2,1,1,1,1,2,1,2,1,1,1,1,1,1,2,1,2,1,1,2,1,1,1});
    cout << endl;
    return 0;
}