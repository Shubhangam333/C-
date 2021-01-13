#include <iostream>
#include <list>
using namespace std;
//push_back()
//push_front()
//pop_front()
//pop_back()
//.insert()
//.erase()
//.remove()

int main() {
    //init
    list<int> l1{1,2,3,10,8,5};

    //Different datatype
    list<string> l2{"apple","guava","mango","banana"};

    l2.push_back("pineapple");

    l2.sort();

    //reverse
    l2.reverse();

    //pop front
    cout<<l2.front()<<endl;
    l2.pop_front();

    //Iterate over the string and print the data
    for(string s:l2){
        cout<<s<<"-->";
    }
    return 0;
}
