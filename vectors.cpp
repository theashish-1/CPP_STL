#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> vec;

    vec.push_back(2);
    vec.push_back(4);
    vec.push_back(7);
    vec.push_back(34);
    vec.push_back(56);
    cout<<"vector size is "<<vec.size()<<endl;
    cout<<"vectory capacity is  "<<vec.capacity()<<endl;

    cout<<vec.front()<<endl;
    cout<<vec.back()<<endl;
    //pop back to remove last element of the vector 
    vec.pop_back();
    cout<<endl;
    // //looping in vector 
    for(int value : vec){
        cout<<value<<" "<<endl;
    }
    cout<<"value at index 2 is "<<vec.at(2)<<endl;
    // cout<<"value at index 2 is "<<vec[2]<<endl;
    return 0;
}