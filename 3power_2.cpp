// In this question we have to find wheather the no is in the powers of 2 or not
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < 30; i++) // Because 30 is the range for the question
    {
        int ans = pow(2, i);
        if (ans == n)
        {
            return 1;
        }
        return 0;
    }
}