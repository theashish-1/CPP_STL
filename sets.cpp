#include<set>
#include<iostream>
using namespace std;
int main(){
    set<int> s;
    s.insert(3);
    s.insert(5);
    s.insert(1);
    for(auto value : s){
        cout<<value<<" ";
    }
    cout<<endl;

    //Remove Elements
    set<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};
    cars.erase("Volvo");
    cars.erase("Mazda");
    for(string car : cars){
        cout<<car <<" ";
    }
    cout<<endl;
    //Find the Size of a Set
    cout << "Size of cars is  : " <<cars.size()<<endl;

    //clear a set 
    cars.clear();
    cout << "Size of cars is  : " <<cars.size();

}