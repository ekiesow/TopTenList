#include <iostream>
#include <vector>
#include "Hyperlink.h"
#include "TopTenList.h"

using std::cout;

int main()
{
    TopTenList* languages = new TopTenList("Programming Languages");
    Hyperlink cpp;

    cpp.text = "C++";
    cpp.url = "https://www.cplusplus.com/";
    languages->set_at(1, cpp);

    cout<<"Top Ten "<<languages->get_title()<<"\n";

    languages->display_backward();

    cout << '\n';

    languages->display_forward();

    delete languages;

    return 0;
}
