// #include<iostream>
// using namespace std;

// class Account{
//     public:
//         int accno;
//         string name;
//         static float rateOfInterest;

//         Account(int accno,string name){
//             cout << "accno: " << accno << endl;
//             cout << "name :" << name << endl;
//             cout << "name and Rate Of Interest: " << name << " " << rateOfInterest << endl;
//         }
// };

// float Account :: rateOfInterest = 2.6;

// int main()
// {
//     Account a1=Account(101, "John");
//     Account a2=Account(102, "Mike");
// }

// static field example : Counting Objects

// #include <iostream>
// using namespace std;

// class Account
// {
// public:
//     int accno;
//     string name;
//     static int count;

//     Account(int accno, string name)
//     {
//         cout << "accno: " << accno << endl;
//         cout << "name :" << name << endl;
//         count++;
//     }
// };

// int Account::count = 0;

// int main()
// {
//     Account a1 = Account(101, "John");
//     Account a2 = Account(102, "Mike");
//     Account a3 = Account(103, "David");
//     cout << "total Objects Created: " << Account::count;
// }