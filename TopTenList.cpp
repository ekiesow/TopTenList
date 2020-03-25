//Manages a list of top ten hyperlinks
#include <string>
#include "TopTenList.h"
#include "Hyperlink.h"

using std::string;

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
