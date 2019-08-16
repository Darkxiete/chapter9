//
// Created by xk on 2019/8/16.
//

#include <iostream>
extern int tom;
// 不用static会导致多次定义，编译失败
static int dick = 10;
int harry = 200;

void remote_access(){
    using namespace std;
    cout << "remote_access() reports the following addresses:\n";
    cout << &tom << " = &tom, " << &dick << " = &dick, ";
    cout << &harry << " = &harry\n";
}