#include<iostream>
#include<cstdio>
using namespace std;
template <class Elemtype>
class Seqlist
{
protected:
    int MaxSize;
    int length;
    Elemtype *elems;
public:
    Seqlist(int size=0)
    {
        MaxSize=size;
        elems=new Elemtype [size];
        length=0;
    }
    virtual ~Seqlist()
    {
        delete [] elems ;
    }
    int Find(Elemtype e)
    {
        int j=0;
        while(j<length&&elems[j]!=e)
            j++;
        if(j==length)
            return -1;
        return j;
    }
    bool Insert(int i, Elemtype e)
    {
        if(i<0||i>length)
            return false;
        if(MaxSize==length)
            return false;
        for(int j=length;j>i;j--)
        {
            elems[j]=elems[j--];
        }
        elems[i]=e;
        length++;
        return true;
    }
    bool Delete(int i,Elemtype &e)
    {
        if(i<0||i>=length)
            return false;
        for(int j=length-1;j>i;j--)
        {
            elems[j-1]=elems[j];
        }
        length--;
        e=elems[i];
        return true;
    }
    void show()
    {
        for(int i=0;i<length;i++)
            cout<<elems[i];
        cout<<endl;
    }
};
int main()
{
    Seqlist<int> s(5);
   // s.Seqlist(5);
    s.Insert(0,1);
    s.Insert(1,2);
    s.Insert(2,3);
    s.show();
    int e;
    s.Delete(1,e);
    s.show();
    return 0;
}

