#include <iostream>
#include <vector>
#include "Hyperlink.h"
#include "TopTenList.h"
#include "Gallery.h"

using std::cout;

int main()
{
    // variable delcarations
    TopTenList* languages = new TopTenList("Programming Languages");
    Gallery* emoticons = new Gallery();
    Hyperlink cpp;

    // add the languages to the top ten list
    cpp.text = "C++";
    cpp.url = "https://www.cplusplus.com/";
    languages->set_at(1, cpp);
    cpp.text = "Python";
    cpp.url = "https://www.python.org/";
    languages->set_at(2, cpp);
    cpp.text = "JavaScript";
    cpp.url = "https://www.javascript.com/";
    languages->set_at(3, cpp);
    cpp.text = "Java";
    cpp.url = "https://www.java.com/";
    languages->set_at(4, cpp);
    cpp.text = "C";
    cpp.url = "https://en.cppreference.com/w/c/language";
    languages->set_at(5, cpp);
    cpp.text = "R";
    cpp.url = "https://www.r-project.org/";
    languages->set_at(6, cpp);
    cpp.text = "Ruby";
    cpp.url = "https://www.ruby-lang.org/en/";
    languages->set_at(7, cpp);
    cpp.text = "Swift";
    cpp.url = "https://developer.apple.com/swift/";
    languages->set_at(8, cpp);
    cpp.text = "Go";
    cpp.url = "https://golang.org/";
    languages->set_at(9, cpp);
    cpp.text = "Dart";
    cpp.url = "https://dart.dev/";
    languages->set_at(10, cpp);

    // UTF-8 emojis
    emoticons->add("\xF0\x9F\x98\x8A","Smile");
    emoticons->add("\xF0\x9F\x98\x9E","Frown");
    emoticons->add("\xF0\x9F\x99\x89","Monkey");

    // display the emoticons backwards
    emoticons->display_backward();
    
    cout << '\n';
    
    // print the title of the top ten list
    cout<<"Top Ten "<<languages->get_title()<<"\n";

    // display the top ten list forward
    languages->display_forward();

    // clean up
    delete languages;
    delete emoticons;

    return 0;
}
