#include<iostream>
#include<cstdio>
using namespace std;
template <class Elemtype>
class SeqStack
{
protected:
    int MaxSize;
    int top;
    Elemtype *elems;
public:
    SeqStack(int size=0)
    {
        MaxSize=size;
        elems=new Elemtype [size];
        top=-1;
    }
    virtual ~SeqStack()
    {
        delete [] elems;
    }
    bool IsEmpty()
    {
        return(top==MaxSize-1);
    }
    bool Push(Elemtype e)
    {
        if(IsEmpty())
            return false;
        elems[++top]=e;
        return true;
    }
    bool Pop(Elemtype & e)
    {
        if(IsEmpty())
            return false;
        e=elems[top--];
        return true;
    }
    void show()
    {
        for(int j=0;j<=top;j++)
            cout<<elems[j];
        cout<<endl;
    }
};

int main()
{
    SeqStack<int> s(5);
    s.Push(1);
    s.Push(2);
    s.Push(7);
    s.show();
    int e;
    s.Pop(e);
    s.show();
    return 0;
}


