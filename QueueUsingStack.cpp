#include<stdlib.h>
#include<iostream>
#include<stack>
using namespace std;

struct Queue {
    stack<int> s1, s2;

    void enQueue(int x)
    {
        s1.push(x);
    }
    int deQueue()
    {
        int x;
        while(!s1.empty()){
            s2.push(s1.top());
            s1.pop();
        }
        if(s2.empty()){
            cout << "Queue is empty";
            exit(0);
        }
        else{
             x = s2.top();
        }
        s2.pop();
        while(!s2.empty()){
            s1.push(s2.top());
            s2.pop();
        }
        return x;
    }
};

int main()
{
    Queue q;
    q.enQueue(1);
    q.enQueue(2);
    q.enQueue(3);

    cout << q.deQueue() << "\n";
    cout << q.deQueue() << "\n";
    cout << q.deQueue() << "\n";
    cout << q.deQueue() << "\n";
    
    return 0;
}
