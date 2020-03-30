//Manages a list of top ten hyperlinks
#include <iostream>
#include <string>
#include "TopTenList.h"
#include "Hyperlink.h"

using std::cout;
using std::string;

void TopTenList::display_forward() {
  for(int i = 0; i < 10; i++) {
    Hyperlink hyperlink = this->_list.at(i);
    cout << i+1 << ": " << hyperlink.text << '\n';
    cout << hyperlink.url << '\n';
  }
}

void TopTenList::display_backward() {
  for(int i = 9; i >= 0; i--) {
    Hyperlink hyperlink = this->_list.at(i);
    cout << i+1 << ": " << hyperlink.text << '\n';
    cout << hyperlink.url << '\n';
  }
}

TopTenList::TopTenList(string title) : title(title) {
  this->_list.resize(10);
}

void TopTenList::set_at(int index, Hyperlink link) {
  this->_list[index-1] = link;
}

Hyperlink TopTenList::get(int index) {
  return this->_list.at(index-1);
}

string TopTenList::get_title() {
  return this->title;
}
