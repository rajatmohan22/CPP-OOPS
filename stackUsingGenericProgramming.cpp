#include <iostream>
using namespace std;
template <class T>

class Stack{
    int size;
    T S[size];
    int top=-1;

    public:
    Stack(int size){
        this->size=size;
    }

    void Push(T item);
    T Pop();
};

template <class T>
void Stack<T>::Push(T item){
    S[++top]=item;
}

template <class T>
T Stack<T>::Pop(){
    return S[top--];
}

