#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector <int> intvec;
    int temp;

    for (int i=0; i<3; i++){
        cout << "input! ";
        cin >> temp;
        intvec.push_back(temp);
    }
    for (int i = 0; i<(int)intvec.size(); i++){
        cout << intvec[i] << " ";
    }
    cout << endl;
    cout << "size" << intvec.size() << endl;
    intvec.resize(intvec.size()+3);
    cout << "size" << intvec.size() << endl;
    for (int i = (int)intvec.size()-3; i < (int)intvec.size(); i++){
        intvec[i] = i;
    }
    for (int i = 0; i<(int)intvec.size(); i++){
        cout << intvec[i] << " ";
    }
    cout << endl;
    return 0;
}