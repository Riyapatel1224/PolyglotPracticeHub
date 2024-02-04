#include<iostream>
using namespace std;

class Netflix{
    public:
        int id;
        char name[10] = "Riya";
        void userAcc()
        {
            cout << "User Account : " << name << endl;
        }
};

class movie:public Netflix{
    public:
        char movie[10] = "MovieName";
        void Movie()
        {
            cout << "User Account : " << name << endl;
            cout << "Movie Name : " << movie << endl;
        }
};

class series : public Netflix
{
public:
    char series[20] = "SeriesName";
    void Series()
    {
        cout << "User Account : " << name << endl;
        cout << "Movie Name : " << series << endl;
    }
};

int main()
{
    movie m1;
    m1.Movie();

    series s1;
    s1.Series();
}