// str.size() - str.length() 와 동일, 길이를 반환

#include <iostream>
#include <string>
using namespace std;

int main(){
    string t1 = "I";
    string t2 = "Brian";
    cout << t1.size() << endl;
    t1 += " love";
    t1 += " ";
    t1 += t2;
    cout << t1.size() << endl;
    cout << t1 << endl;
    cout << t2 << endl;

    if (t1 != t2){
        cout << "Oops!" << endl;
    }
}