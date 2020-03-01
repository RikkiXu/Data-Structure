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
class LinkList
{
protected:
    Node<Elemtype>* head;
public:
    LinkList()
    {
        head=new Node<Elemtype>;
    }
    int Find(Elemtype x)
    {
        int j=0;
        Node<Elemtype> *p=head;
        for(; p->data!=x&&p!=NULL; p=p->next,j++);
        if(p!=NULL)
            return j;
        return -1;
    }
    bool Insert(int i,Elemtype e)
    {
        Node<Elemtype> *rear=head;
        for(int j=0; j<i-1&&rear!=NULL; j++,rear=rear->next);
        if(rear==NULL)
            return false;
        rear->next=new Node<Elemtype>(e,rear->next);
        return true;
    }
    bool Delete(int i,Elemtype &e)
    {
        Node<Elemtype> *rear=head;
        Node<Elemtype>* tmp;
        for(int j=0; j<i-1&&rear!=NULL; j++,rear=rear->next);
        if(rear==NULL)
            return false;
        tmp=rear->next;
        rear->next=tmp->next;
        e=tmp->data;
        delete tmp;
        return true;
    }
    void show()
    {
        Node<Elemtype>* rear=head;
        for(; rear!=NULL; rear=rear->next)
            cout<<rear->data<<"->";
        cout<<endl;
    }
};
int main()
{
    LinkList<int> s;
    s.Insert(0,1);
    s.Insert(1,2);
    s.Insert(2,3);
    s.show();
    int e;
    s.Delete(1,e);
    s.show();
    return 0;
}











