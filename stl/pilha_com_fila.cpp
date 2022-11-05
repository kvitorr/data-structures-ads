#include <queue>
#include <iostream>
using namespace std;

template <class T>
class Queue: public queue<T> {
	protected:
		queue<T> fila;
	public:
	T popQueue(){
		T tmp=fila.front();
		fila.pop();
		return tmp;
	}
	
	
	void popTodos(){				
		while(!fila.empty()){
			cout << fila.front() << endl;
			fila.pop();
		}
    }
    
    void simulaPilha(T novo){
		queue<T> filaAux;
		if(fila.empty()){
			fila.push(novo);
		} else {
			while(!fila.empty()){
				//T tmp=fila.front();
				filaAux.push(fila.front());
				fila.pop();
			}

			fila.push(novo);

			while(!filaAux.empty()){
				fila.push(filaAux.front());
				filaAux.pop();
			}
		}
    }
};

int main(){
	Queue<int> fila;
	fila.simulaPilha(1);
	fila.simulaPilha(2);
	fila.simulaPilha(3);

	//cout << fila.popQueue() << endl;
	fila.popTodos();

}