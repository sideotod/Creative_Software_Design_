#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;

const int NUM_OF_CHAT = 200;

int getChatCount(string *_chatList)
{
    int i;
    for(i=0; i<NUM_OF_CHAT; ++i)
    {
        string s = _chatList[i];
        if(s.empty() == true) break;
    }
    return i;
}

void printChat(string *_chatList)
{
    int count = getChatCount(_chatList);
    for(int i=0; i<count; ++i)
    {
        cout << i << " " << _chatList[i] << endl;
    }
}

// Implement these functions
bool addChat(string *_chatList, string _chat) // returns true when adding chat is succeeded
{
    int count = getChatCount(_chatList);
    if (count>NUM_OF_CHAT)
    {
        return false;
    }
    _chatList[count] = _chat;
    return true;
}
bool removeChat(string *_chatList, string _index) // returns true when removing chat is succeeded
{
    
}

// Implement commented (/* */) areas in main function
int main(void)
{
    string* chats = new string[NUM_OF_CHAT];

    addChat(chats, "Hello, Comment Administrator!");
    addChat(chats, "How have you been?");
    addChat(chats, "I am an undergraduate.");
    addChat(chats, "I am taking Creative Software Design.");
    addChat(chats, "This class is awesome.");
    
    while(true)
    {
        string command;
        getline(cin, command);
        if(command[1]=='q') break;
        else if(command[1]=='r')
        {
            /* remove chat */
            if(/* remove is succeeded */) printChat(chats);
        }
        else if(addChat(chats, command)) printChat(chats);
    }
    
    // delete chatting list
    delete[] chats;
    
    return 0;
}