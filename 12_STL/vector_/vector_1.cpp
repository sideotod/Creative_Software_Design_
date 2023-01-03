#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> intvec(10);
    for(int i=0; i<10; i++){
        cout << "input ";
        cin >> intvec[i];
    }
    for(int i=0; i<10; i++){cout << intvec[i] << " ";}
    cout << endl;
    return 0;
}