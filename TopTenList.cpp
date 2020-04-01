//Manages a list of top ten hyperlinks
#include <iostream>
#include <string>
#include "TopTenList.h"
#include "Hyperlink.h"

using std::cout;
using std::string;

// Display all Hyperlinks in the top ten list from beginning to end
void TopTenList::display_forward() {
  for(int i = 0; i < 10; i++) {
    Hyperlink hyperlink = this->_list.at(i);
    cout << i+1 << ": " << hyperlink.text << '\n';
    cout << hyperlink.url << '\n';
  }
}

// Display all Hyperlinks in the top ten list from end to beginning
void TopTenList::display_backward() {
  for(int i = 9; i >= 0; i--) {
    Hyperlink hyperlink = this->_list.at(i);
    cout << i+1 << ": " << hyperlink.text << '\n';
    cout << hyperlink.url << '\n';
  }
}

// Initialize the top ten list with a title
TopTenList::TopTenList(string title) : title(title) {
  this->_list.resize(10);
}

// Add a Hyperlink to the top ten list at given index
void TopTenList::set_at(int index, Hyperlink link) {
  this->_list[index-1] = link;
}

// Returns a Hyperlink at a given index
Hyperlink TopTenList::get(int index) {
  return this->_list.at(index-1);
}

// Returns the title of the top ten list
string TopTenList::get_title() {
  return this->title;
}
