//
// Created by xk on 2019/8/16.
//

#include<iostream>
#include <cstring>

const int ArSize = 10;

void strcount(const char * str);
void strcount(std::string &str);
int show_length_1();
int show_length_2();

int main(){
//    show_length_1();
    show_length_2();
}

int show_length_1(){
    using namespace std;
    char input[ArSize];
    char next;

    cout << "Enter a line:\n";
    cin.get(input, ArSize);
    while (cin){
        cin.get(next);
        while (next != '\n')
            cin.get(next);
        strcount(input);
        cout << "Enter next line (empty line to quit): \n";
        cin.get(input, ArSize);
    }
    cout << "Bye\n";
    return 0;
};

int show_length_2(){
    using namespace std;
    string input;
    char next;

    cout << "Enter a line:\n";
    getline(cin, input);
    while (cin){
        strcount(input);
        cout << "Enter next line (empty line to quit): \n";
        getline(cin, input);
    }
    cout << "Bye\n";
    return 0;
};

void strcount(const char * str){
    using namespace std;
    static int total = 0;
    int count = 0;

    cout << "\"" << str << "\" contains ";
    while (*str++)
        count += 1;
    total += count;
    cout << count << " characters\n";
    cout << total << " characters total \n";
}

void strcount(std::string &str){
    using namespace std;

    static int total = 0;
    int count = 0;

    cout << "\"" << str << "\" contains ";
    if (str == "")
        count = 0;
    else
        count = str.length();
    total += count;
    cout << count << " characters\n";
    cout << total << " characters total \n";
}