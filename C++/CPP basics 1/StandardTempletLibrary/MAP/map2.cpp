#include<iostream>
#include<map>
#include<string>

using namespace std;

int main(){
    map<string, string> m1;
    m1["gujarat"] = "gandhinagar";
    m1["maharashtra"] = "mumbai";
    m1["rajasthan"] = "jaipur";
    m1["punjab"] = "chandigarh";
    m1["harayana"] = "chandigarh";
    m1["karnataka"] = "bangalore";

    for(auto it: m1){
        cout << it.first << " " << it.second << endl;
    }
}