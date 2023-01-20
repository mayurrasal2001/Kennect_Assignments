#include <iostream>
using namespace std;

long long fibonacciFinder50() {
    long long a = 0, b = 1, c, i;
    for (i = 2; i <= 50; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

int main() {
    cout << "The 50th number in the Fibonacci sequence is: " << fibonacciFinder50() <<endl;
    return 0;
}