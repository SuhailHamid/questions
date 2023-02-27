#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    // To find the compliment of number
    // if n=5 its binary is 101 and compliment of 101 is 010 which is 2 so compliment of 5 is 2

    int n;
    cin >> n;
    int m = n;
    int mask = 0;

    // Edge case
    if (n == 0)
    {
        return 1;
    }

    while (m != 0)
    {
        mask = (mask << 1) | 1; // mask=000000 by or with 1 it becomes 000000001
        m = m >> 1;             // right shift
    }

    int ans = (~n) & mask;
    cout << ans;
}