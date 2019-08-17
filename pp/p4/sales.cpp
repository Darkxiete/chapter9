//
// Created by xk on 2019/8/17.
//
#include <iostream>
#include "sales.h"

namespace SALES {
    void setSales(Sales &s, const double ar[], int n) {
        double sum = 0;
        int i = 0;
        s.max = ar[0];
        s.min = ar[0];
        for (; i < (4 > n ? n : 4); i++) {
            s.sales[i] = ar[i];
            sum += ar[i];
            if (ar[i] > s.max)
                s.max = ar[i];
            if (ar[i] < s.min)
                s.min = ar[i];
        }
        s.average = sum / QUARTERS;
        for (int j = i; j < 4; j++) {
            s.sales[j] = 0;
        }
    }

    void setSales(Sales *s) {
        double sum = 0;
        double min = INT32_MAX;
        double max = INT32_MIN;
        for (double &sale : s->sales) {
            std::cout << "Enter the sales" << std::endl;
            std::cin >> sale;
            sum += sale;
            if (sale > max)
                s->max = sale;
            if (sale < min)
                s->min = sale;
        }
        s->average = sum / QUARTERS;
    }

    void showSales(const Sales &s) {
        std::cout << "Sales" << std::endl;
        for (auto sale: s.sales)
            std::cout << sale << std::endl;
        std::cout << "average = " << s.average << std::endl;
        std::cout << "max = " << s.max << std::endl;
        std::cout << "min = " << s.min << std::endl;
    }
}

