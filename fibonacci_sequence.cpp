//Fibonacci Sequence Printer

#include <iostream>
using namespace std;

void fibonacci() {
    double f_num = 1;
    double s_num = 1;
    for (int i = 4; i<=1000; i++)
    {
    double sum = f_num + s_num;
    cout << i << " " << sum << endl;
    f_num = s_num;
    s_num = sum;
    }
}

int main() {
    cout << 0 << '\n';
    cout << 1 << '\n';
    cout << 1 << '\n';
    fibonacci();
    return 0;
}
