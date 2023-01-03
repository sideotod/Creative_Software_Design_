#include <iostream>
#include <fstream> // std::ifstream, std::ofstream
#include <string>
#include <map>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

string Open(const char* Address, string& str) {
	string word;
	ifstream file(Address);
	if(file.is_open()){
		while(file >> word) {str.append(word); str.append(" ");}
        return str;
		file.close();
	} else {
		cout << "Unable to open file";
	}
}

void TermFrequency(string str, map<string, float>& M)
{
    map<string, float> m;
    string Word, word = "";
 
    for (int i = 0; i < str.size(); i++) {
        if (str[i] == ' ') {
            if (M.find(Word) == M.end()) {
                M.insert(make_pair(Word, 1));
                Word = "";
            }
            else {
                M[Word]++;
                Word = "";
            }
        }
        else
            Word += str[i];
    }

    if (M.find(Word) == M.end())
        M.insert(make_pair(Word, 1));
    else
        M[Word]++;

    M.erase("the");
    M.erase("and");
    M.erase("of");

    for (auto& it : M) {
        m[it.first] = (it.second)/(M.size());
    }

    auto pr = max_element(m.begin(), m.end(), [](const auto &x, const auto &y) {
        return x.second < y.second;
        });
    
    cout << "Max TF(except 'the', 'and', 'of'):  " << pr->second <<endl;
    cout << "Max TF Term(except 'the', 'and', 'of'):  " << pr->first <<endl;
}

void TF_IDF(map<string, float> D1, map<string, float> D2){
    map<string, float> M, m;
    for (auto& it : D1) {
        M[it.first] = log2(2/(it.second + (D2.at(it.first))));
    }

    for (auto& it : M) {
        m[it.first] = (it.second)*(D1.at(it.first));
    }

    auto pr = max_element(m.begin(), m.end(), [](const auto &x, const auto &y) {
        return x.second < y.second;
        });
    
    cout << "Max TF_IDF(except 'the', 'and', 'of'):  " << pr->second <<endl;
    cout << "Max TF-IDF Term(except 'the', 'and', 'of'):  " << pr->first <<endl;    
}

int main()
{
    string Bidenspeech = "";
    string Trumpspeech = "";
    string Biden = Open("C:\\Users\\chmin\\Downloads\\text_analysis_skeleton.cpp\\biden_inauguration.txt", Bidenspeech);
    string Trump = Open("C:\\Users\\chmin\\Downloads\\text_analysis_skeleton.cpp\\Trump_inauguration.txt", Trumpspeech);
    map<string, float> B, T;
        // TODO. Compute measures  
    cout<<"Biden's inauguration speech"<<endl;
    // TODO. Print out the result for Biden's
    TermFrequency(Bidenspeech, B);
    cout<<"Trump's inauguration speech"<<endl;
    // TODO. Print out the result for Trump's
    TermFrequency(Trumpspeech, T);
    cout<<"Biden's inauguration speech"<<endl;
    TF_IDF(B, T);
    cout<<"Trump's inauguration speech"<<endl;
    TF_IDF(T, B);
}
