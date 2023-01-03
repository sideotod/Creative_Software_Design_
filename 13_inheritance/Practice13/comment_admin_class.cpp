#include <cstdlib>
#include <cstdio>
#include <iostream>
#include <list>
#include <string>
#include "comment_admin_class.hpp"
using namespace std;

void CommentAdmin::printChat() {
    list<string>::iterator it;
    /*TODO*/
    int count = getChatCount();
    for(int i=0; i<count; ++i)
    {
        cout << i << " " << _chats[i] << endl;
    }
}

// Add _chat into chats
// If it fails, return false; otherwise, return true
bool CommentAdmin::addChat(string& _chat) {
    /*TODO*/
    return true;
    // returns true when adding chat is succeeded
}

// Remove the chat at _index from chats
// if _index does not exists, return false; otherwise, return true
bool CommentAdmin::removeChat(int _index) {
    if (_index >= chats.size())
        return false;
    // returns true when removing chat is succeeded
    list<string>::iterator it = chats.begin();
    /*TODO*/
    return true;
}

// Remove the comments at indices form _indices[0] to _indices[_count-1] 
// (inclusive)
// Return true if at least one is removed; false otherwise
// Do nothing if an index does not exist
bool CommentAdmin::removeChat(list<int>& _indices) {
    bool isRemoved = false;
    _indices.sort();
    list<string>::iterator it = chats.begin();
    list<int>::iterator iit = _indices.begin();
    /* TODO */
    return isRemoved;
}

// Remove the comments at indices from _start to _end in chats
// Return true if at least one is removed.
// If _start is a negative number or _end >= NUM_CHATS,
// remove only the chats at valid indices.
bool CommentAdmin::removeChat(int _start, int _end) {
    /* TODO */
    bool isRemoved = false;
    return isRemoved;
}