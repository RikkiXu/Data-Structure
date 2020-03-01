#include<iostream>
#include<cstdio>
using namespace std;
template <class Elemtype>
class SeqQueue
{
protected:
    int MaxSize;
    int front,rear;
    Elemtype *elems;
public:
    SeqQueue(int size=0)
    {
        MaxSize=size;
        elems=new Elemtype [size];
        front=rear=0;
    }
    virtual ~SeqQueue()
    {
        delete [] elems;
    }
    bool IsEmpty()
    {
        return(front==rear);
    }
    bool IsFull()
    {
        return ((rear+1)%MaxSize==front);
    }
    bool Push(Elemtype e)
    {
        if(IsFull())
            return false;
        rear=(rear+1)%MaxSize;
        elems[rear]=e;
        return true;
    }
    bool Pop(Elemtype & e)
    {
        if(IsEmpty())
            return false;
        front=(front+1)%MaxSize;
        elems[front]=e;
        return true;
    }
    void show()
    {
        for(int j=front+1;j<=rear;j++)
            cout<<elems[j];
        cout<<endl;
    }
};

int main()
{
    SeqQueue<int> s(5);
    s.Push(1);
    s.Push(2);
    s.Push(7);
    s.show();
    int e;
    s.Pop(e);
    s.show();
    return 0;
}



