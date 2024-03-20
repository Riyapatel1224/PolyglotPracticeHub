#include<iostream>
#include<string>
using namespace std;

class binary
{
    string s;
    public:
        void read(void)
        {
            cout << "Enter a binary number: ";
            cin >> s;
        }

        void chk_bin(void)
        {
            for (int i = 0; i < s.length();i++)
            {
                if(s.at(i)!='0' && s.at(i)!='1')
                {
                    cout << "\nIncorrect binary number formate....the program will quit";
                    exit(0);
                }
            }
        }

        void ones(void)
        {
            chk_bin();
            for (int i = 0; i < s.length(); i++)
            {
                if(s.at(i)=='0')
                {
                    s.at(i) = '1';
                }
                else
                {
                    s.at(i) = '0';
                }
            }
        }
        
        void display(void)
        {
            ones();
            cout << "\nThe 1's complement of the above binary number is: " << s;
        }
};

int main()
{
    binary b;
    b.read();
    b.display();
    return 0;
}