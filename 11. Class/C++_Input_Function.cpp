#include <iostream>
using namespace std;

/*int main(){
    string line;
    cout << "write a line" << endl;
    while (cin >> line && line != "q"){cout << line << "---" << endl;}
    return 0;
}*/
// Input: I love you
// output: I---
//         love---
//         you---

/*int main(){
    string line;
    cout << "write a line" << endl;
    while (getline(cin, line)){cout << line << "---" << endl;}
    return 0;
}*/
// Input: I love you
// output: I love you---

int main(){
    string line;
    cout << "write a line" << endl;
    while (getline(cin, line, ':') && line != "q"){cout << line << "---" << endl;}
    return 0;
}
// Input: I love you
// output: I:love:you