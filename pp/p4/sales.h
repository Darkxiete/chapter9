//
// Created by xk on 2019/8/17.
//

#ifndef CHAPTER9_SALES_H
#define CHAPTER9_SALES_H
namespace SALES{
    const int QUARTERS = 4;
    struct Sales{
        double sales[QUARTERS];
        double average;
        double max;
        double min;
    };
    void setSales(Sales &s, const double ar[], int n);
    void setSales(Sales *s);
    void showSales(const Sales &s);
}
#endif //CHAPTER9_SALES_H
