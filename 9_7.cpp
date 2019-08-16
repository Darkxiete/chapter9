//
// Created by xk on 2019/8/16.
//
#include <iostream>
int tom = 3;
int dick = 30;
static int harry = 300;

void remote_access();

int main(){
    using namespace std;
    cout << "main() reports the following addresses: \n";
    cout << &tom << " = &tom, " << &dick << " = &dict, ";
    cout << &harry << " = &harry\n";
    remote_access();
    return 0;
}