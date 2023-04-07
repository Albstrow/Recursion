// fibnocci is is
// if n<=1 then fib(n)=n
// otherwise f(n)=f(n-1)+f(n-2)
#include <iostream>
using namespace std;
int fib(int n)
{
    // base case
    if (n <= 1)
        return 1;
    // recursive relation
    return fib(n - 1) + fib(n - 2);
}

int main()
{
    int n;
    cin >> n;
    cout << fib(n);
}