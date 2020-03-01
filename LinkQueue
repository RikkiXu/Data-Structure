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
class LinkQueue
{
protected:
    Node<Elemtype>* front,*rear;
public:
    LinkQueue()
    {
        front=rear=new Node<Elemtype>;
    }
    bool IsEmpty()
    {
        return (front->next==NULL);
    }
    bool Push(Elemtype e)
    {
        rear->next=new Node<Elemtype>(e,NULL);
        rear=rear->next;
        return true;
    }
    bool Pop(Elemtype &e)
    {
        if(IsEmpty())
            return false;
        Node<Elemtype> *p=front->next;
        e=p->data;
        front->next=p->next;
        if(front->next==rear)
            rear=front;
        delete p;
        return true;
    }
    void show()
    {
        Node<Elemtype>* p=front->next;
        for(; p!=NULL; p=p->next)
            cout<<p->data<<"->";
        cout<<endl;
    }
};
int main()
{
    LinkQueue<int> s;
    s.Push(1);
    s.Push(2);
    s.Push(3);
    s.show();
    int e;
    s.Pop(e);
    s.show();
    return 0;
}













