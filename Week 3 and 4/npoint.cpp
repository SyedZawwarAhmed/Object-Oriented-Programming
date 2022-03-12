#include<iostream>
using namespace std;

class nPOINT
{
    private:
    static int length;
    int *p;
    

    public:
    nPOINT()
    {
        length+=4;
    }
    ~nPOINT()
    {
    }
    void set(int index,int val)
    {
        p[index]=val;
    }
    int Get(int index)const
    {
        return p[index];
    }
    static int Length()
    {
        return length;
    }
};

int nPOINT::length=4;


int main()
{
    cout<<"Length before object creation:"<<nPOINT::Length()<<endl;
    nPOINT *obj1=new nPOINT();
    obj1->set(0,4);
    cout<<obj1->Get(0)<<endl;
    obj1->set(1,8);
    cout<<obj1->Get(1)<<endl;
    nPOINT *obj2=new nPOINT();
    cout<<"Length after creation of object 1:"<<obj1->Length()<<endl;
    cout<<"Length after creation of object 2:"<<obj2->Length()<<endl;
    //Both are same bcz they share same copy.
}