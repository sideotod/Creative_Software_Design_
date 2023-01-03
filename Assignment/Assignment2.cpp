#include <iostream>
#include <fstream> // std::ifstream, std::ofstream
#include <string>
#include <map>
#include <vector>
#include <cmath>
using namespace std;

vector<string> vecs;

string Open(const char* Address) {
	string word;
	ifstream file(Address);
	if(file.is_open()){
		while(file >> word) {vecs.push_back(word);}
		file.close();
	} else {
		cout << "Unable to open file";
	}
}


int main()
{
    string Biden = Open("C:\\Users\\chmin\\Downloads\\text_analysis_skeleton.cpp\\biden_inauguration.txt");
    string Trump = Open("C:\\Users\\chmin\\Downloads\\text_analysis_skeleton.cpp\\Trump_inauguration.txt");
    cout << Biden <<endl;




    // TODO. Compute measures  
    cout<<"Biden's inauguration speech"<<endl;
    // TODO. Print out the result for Biden's
    cout<<"Trump's inauguration speech"<<endl;
    // TODO. Print out the result for Trump's
}