#include <algorithm>
#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <sstream>
#include <string>
#include "comment_admin_class.hpp"
using namespace std;

int main(void)
{
    CommentAdmin* admin = new CommentAdmin();
    string s;
    s = "Hello, Comment Administrator!";
    admin->addChat(s);
    s = "How have you been?";
    admin->addChat(s);
    s = "I am an undergraduate.";
    admin->addChat(s);
    s = "I am taking Creative Software Design.";
    admin->addChat(s);
    s = "This class is awesome.";
    admin->addChat(s);
    
    while(true)
    {
        string command;
        getline(cin, command);
        
        if (command == "#quit") break;
        else if (command.substr(0, 7) == "#remove")
        {
            /* remove chat */
            int numCommas;
            string substr = command.substr(8);
            stringstream ss(substr);
            bool hasComma =  command.find(',') != string::npos;
            bool hasHyphen = command.find('-') != string::npos;
            bool succeed = false;
            if (hasComma && hasHyphen) {
                cerr<<"Invalid input: combination of different commands."<<endl;
                exit(1);
            }
            else if (hasComma) {
                numCommas = count(substr.begin(), substr.end(), ',');
                list<int> indices;
                int cnt = 0;
                for (int i; ss >> i && cnt <= numCommas; ) {
                    indices.push_back(i);
                    if (ss.peek() == ',')
                        ss.ignore();
                }
                succeed = admin->removeChat(indices);
            }
            else if (hasHyphen) {
                int start, end;
                if (! (ss >> start)) 
                    continue;
                ss.ignore();
                if (! (ss >> end)) 
                    continue;
                succeed = admin->removeChat(start, end);
            }
            else {
                int ind;
                if (! (ss >> ind))
                    continue;
                succeed = admin->removeChat(ind);
            }
            if (succeed)
                admin->printChat();
        }
	else if (command[0] == '#') continue;
        else if (admin->addChat(command)) 
            admin->printChat();
    }
    return 0;
}
