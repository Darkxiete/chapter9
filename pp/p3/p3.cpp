//
// Created by xk on 2019/8/17.
//

#include <iostream>

const int BUF_SIZE = 40;
char buffer[BUF_SIZE];
struct chaff{
    char dross[20];
    int slag;
};

void show_chaff(chaff *c);

int main(){
    using namespace std;
    chaff * arr[2];
    arr[0] = new chaff;
    arr[1] = new (buffer) chaff;
    for (auto & i : arr){
        cout << "dross = ";
        cin.getline(i->dross, 20);
        cout << "slag = ";
        (cin >> i->slag).get();
        show_chaff(i);
    }
}

void show_chaff(chaff *c){
    using namespace std;
    cout << "dross: " << c->dross << "\n";
    cout << "slag: " << c->slag << endl;
}