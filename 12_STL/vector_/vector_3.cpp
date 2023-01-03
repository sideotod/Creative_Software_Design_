// Vector - Resizable
#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector <int> a;
    for (int i=0; i<10; i++){
        a.push_back(i+1);
        cout << a.size() << " " << a.capacity() << " ";
        cout << a.front() << " " << a.back() << endl;
    }
    int m = a.size();
    for (int i=0; i<m; i++){
        a.pop_back();
        if (! a.empty()){
            cout << a.size() << " " << a.capacity() << " ";
            cout << a.front() << " " << a.back() << endl;
        }
    }
    return 0;
}