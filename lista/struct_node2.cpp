#include <iostream>
using namespace std;

struct Node2 {
    int id;
    Node2(){
        id = 0;
    }

    void setNode2(int i){
        id = i;
    }

    int getNode2(){
        return id;
    }
};


int main(){

    struct Node2 *x = new Node2();
    struct Node2 *x2 = new Node2();

    x2 = x;

    cout << "x2->getNode2()" << x2->getNode2() << endl;

    x2->setNode2(4);
    cout << "x2->getNode2()"<<x2->getNode2()<<endl;
    cout << "x->getNode2()"<<x->getNode2() << endl;
    cout << "-----------------" << endl; 

    return 0;
}