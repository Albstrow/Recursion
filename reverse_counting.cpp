#include <iostream>
using namespace std;
void print(int n)
{
    // base case
    if (n == 0)
        return;
    // recusrive relation
    print(n - 1);
    // tail recursion
    cout << n << " ";
}
int main()
{
    int n;
    cin >> n;
    print(n);
}