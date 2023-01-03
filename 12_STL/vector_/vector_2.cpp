#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> intvec = {1, 2, 3, 4, 5};
    cout << intvec.size() << endl;
    intvec = {11, 12, 13};
    cout << intvec.size() << endl;
    return 0;
}