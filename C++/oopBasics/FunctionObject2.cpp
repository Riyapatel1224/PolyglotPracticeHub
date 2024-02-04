#include <iostream>
using namespace std;

class Collage
{

public:
    int studentCount;

    void getScienceStudentCount(Collage c1)
    { 

        cout << "Science student count is " << c1.studentCount << endl;
    }
    void getCommerceStudentCount(Collage c1)
    {

        cout << "Commerce student count is " << c1.studentCount << endl;
    }
    void getArtsStudentCount(Collage c1)
    {

        cout << "Arts student count is " << c1.studentCount << endl;
    }
};

int main()
{

    Collage science;
    science.studentCount = 100;
    science.getScienceStudentCount(science);

    Collage commerce;
    commerce.studentCount = 200;
    commerce.getCommerceStudentCount(commerce);

    Collage arts;
    arts.studentCount = 300;
    arts.getCommerceStudentCount(arts);
}