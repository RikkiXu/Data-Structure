#include<iostream>
using namespace std;
template <class Elemtype>
struct Node
{
    Elemtype data;
    Node<Elemtype> *next;
    Node()
    {
        next=NULL;
    }
    Node(Elemtype a,Node<Elemtype> *link)
    {
        data=a;
        next=link;
    }
};

template <class Elemtype>
class LinkStack
{
protected:
    Node<Elemtype>* top;
public:
    LinkStack()
    {
        top=NULL;
    }
    bool IsEmpty()
    {
        return (top==NULL);
    }
    bool Push(Elemtype e)
    {
        top=new Node<Elemtype>(e,top);
        if (top==NULL)
            return false;
        return true;
    }
    bool Pop(Elemtype &e)
    {
        if(IsEmpty())
            return false;
        Node<Elemtype> *p=top;
        top=p->next;
        delete p;
        return true;
    }
    void show()
    {
        Node<Elemtype>* p=top;
        for(; p!=NULL; p=p->next)
            cout<<p->data<<"->";
        cout<<endl;
    }
};
int main()
{
    LinkStack<int> s;
    s.Push(1);
    s.Push(2);
    s.Push(3);
    s.show();
    int e;
    s.Pop(e);
    s.show();
    return 0;
}












