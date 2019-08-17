//
// Created by xk on 2019/8/17.
//

#include <iostream>
#include "sales.h"

int main(){
    using namespace SALES;
    Sales s1;
    Sales *s2 = new Sales;
    double arr[4] = {1.1, 2.2, 3.3, 4.4};
    setSales(s1, arr, 3);
    showSales(s1);
    setSales(s2);
    showSales(*s2);
}