//
// Created by xk on 2019/8/17.
//

#include <iostream>

int f_3();
int f_4();

int main(){
    f_3();
    f_4();
}

int f_3() {
    double x;
    std::cout << "Enter value: ";
    while (!(std::cin >> x)){
        std::cout << "Bad input. Please enter a number: ";
        continue;
    }
    std::cout << "Value = " << x << std::endl;
    return 0;
}

int f_4(){
    using std::cin;
    using std::cout;
    using std::endl;
    double x;
    cout << "Enter value: ";
    while (!(std::cin >> x)){
        std::cout << "Bad input. Please enter a number: ";
        continue;
    }
    std::cout << "Value = " << x << endl;
    return 0;
}

int f_5() {
    //
}