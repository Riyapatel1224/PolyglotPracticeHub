#include<iostream>
using namespace std;

class Msg{
    public:
        virtual void receiver() = 0;
};

class user1 : public Msg{
    public:
        void receiver()
        {
            cout << "message received by user 1" << endl;
        }
};

class user2 : public Msg
{
public:
    void receiver()
    {
        cout << "message received by user 2" << endl;
    }
};

int main()
{
    Msg *msg;
    user1 us1;
    msg=&us1;
    msg->receiver();
}