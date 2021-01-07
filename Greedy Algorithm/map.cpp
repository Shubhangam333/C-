#include <iostream>
#include <map>
#include <string>
using namespace std;
int main() {
    map<string,int> m;

    //Insert
    m.insert(make_pair("Mango",100));

    pair<string,int> p;
    p.first="Apple";
    p.second=120;

    m.insert(p);  

    m["Banana"] = 20;

    //2.Search
    string fruit;
    cin>>fruit;

    //update the fruit
    m[fruit]+=22;

    auto it = m.find(fruit);
    if(it!=m.end()){
        cout<<"price of "<<fruit <<"is"<<m[fruit]<<endl;
    }else{
        cout<<"fruit is not present "<<endl;
    }

    //3.erase
    m.erase(fruit);

    //another way to find a particular map
    //it stores unique key only once

    if(m.count(fruit)){
        cout<<"Price is "<<m[fruit]<<endl;
    }

    m["lichi"]=60;
    m["pineapple"]=80;
    for(auto it=m.begin();it!=m.end();it++){
        cout<<it->first<<" and "<<it->second<<endl;
    }

    //for each loop
}
