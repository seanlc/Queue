#include <iostream>
#include "Queue.h"

using namespace std;

void constr_test()
{
    Queue myQ;
    Queue mySecQ(1000);
}

void isEmpty_test()
{
    Queue myQ;
    cout << "empty queue isEmpty return val: " << myQ.isEmpty() << endl;
    myQ.enqueue(50);
    cout << "not empty queue isEmpty return val: " << myQ.isEmpty() << endl;
}

void isFull_test()
{
    Queue myQ(10);
    cout << "not full queue isFull return val: " << myQ.isFull() << endl;
    for(int i = 0; i < 5; ++i)
	myQ.enqueue(i);
    cout << "not full queue isFull return val: " << myQ.isFull() << endl;
    for(int i = 0; i < 5; ++i)
	myQ.enqueue(2*i);
    cout << "full queue isFull return val: " << myQ.isFull() << endl;    
}

void enq_deq_peek_test()
{
    Queue myQ(10);
    cout << "not full queue isFull return val: " << myQ.isFull() << endl;
    for(int i = 0; i < 5; ++i)
	myQ.enqueue(i);
    for(int i = 0; i < 5; ++i)
	cout << "peek val: " << myQ.peek() << endl;
    for(int i = 0; i < 5; ++i)
	cout << "dequeue val: " << myQ.dequeue() << endl;

}

int main()
{
//    constr_test();
//    isEmpty_test();
//    isFull_test();
    enq_deq_peek_test();
    return 0;
}
