#include <iostream>
using namespace std;
int nstairs(int n)
{
    // base case
    if (n < 0)
        return -1;
    if (n == 0 || n == 1)
        return 1;

    // recurive relation
    return nstairs(n - 1) + nstairs(n - 2);
}
int main()
{
    int n;
    cin >> n;
    cout << nstairs(n);
}