//
// Created by xk on 2019/8/16.
//

#include <iostream>

int fib(int n);
int tail_fib(int a, int b, int n);

int main() {
    using namespace std;
    int n;
    std::cout << "address of n = " << &n << endl;
    std::cout << "Enter a number: \n";
    std::cin >> n;
//    std::cout << "Fib " << n << " = " << fib(n);
    std::cout << "Tail Fib " << n << " = " << tail_fib(0, 1, n);
    return 0;
}


int fib(int n) {
    if (n == 1 || n == 2)
        return 1;
    return fib(n - 1) + fib(n - 2);
}

int tail_fib(int a, int b, int n) {
    if (n < 1)
        return 0;
    if (n == 1)
        return b;
    return tail_fib(b, a + b, n-1);
}