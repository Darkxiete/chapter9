//
// Created by xk on 2019/8/17.
//
#include <iostream>
#include <cstring>
#include <limits>
#include "golf.h"

using namespace std;

void setgolf(golf &g, const char * name, int hc){
    for (int i = 0; name[i] || i < Len; name++, i++){
        g.fullname[i] = name[i];
    }
    g.handicap = hc;
}

int setgolf(golf &g){
    /*
     * > istream::getline sets the fail bit if the input is too long,
     * and that prevents further input.
     * so we can use cin.clear.
     */
    cout << "Enter fullname: ";
    if (!cin.getline(g.fullname, Len)){
        cin.clear();
        cin.ignore(std::numeric_limits <char> ::max(), '\n' );
    }
    cout << "Enter handicap: ";
    cin >> g.handicap;
    if (strlen(g.fullname) > 0)
        return 1;
    return 0;
}

void handicap(golf &g, int hc){
    g.handicap = hc;
}
void showgolf(const golf &g){
    cout << "Full name = " << g.fullname << '\n';
    cout << "Handicap = " << g.handicap << endl;
}