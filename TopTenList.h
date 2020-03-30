//Manages a list of top ten hyperlinks
#ifndef TOPTENLIST_H
#define TOPTENLIST_H
#include <string>
#include <vector>
#include "Hyperlink.h"
#include "IDirectionable.h"

using std::string;
using std::vector;

class TopTenList : public IDirectionable
{
  private:
    vector<Hyperlink> _list;
    string title;

  public:
    void display_forward();
    void display_backward();
    TopTenList(string title);
    void set_at(int index, Hyperlink link);
    Hyperlink get(int index);
    string get_title();
};

#endif
