#include <iostream>
using namespace std;

struct Node3 {
    int id;
    public:
        Node3(){
            id = 2;
        }

        void setNode3(int i){
            id = i;
        }

        int getNode3(){
            return id;
        }
};


int main(){

    Node3 a1;
    a1.setNode3(4);
    Node3 b1;
    b1=a1;
    cout << b1.getNode3()<<endl;
    b1 = a1;
    b1.setNode3(5);

    cout << "b1.getNode3(): " << b1.getNode3() << endl;
    cout << "ai.getNode3(): " << a1.getNode3() << endl;
    return 0;
}