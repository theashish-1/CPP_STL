#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    //sort algorithm 
    vector<int> vec = {4,2,1,9,12}; 
    sort(vec.begin(),vec.end());
    for(auto value : vec){
        cout<<value <<" ";
    }  
    cout<<"\n";
    sort(vec.begin(), vec.end(), greater<int>());
        for(auto value : vec){
        cout<<value <<" ";
    }
    
    //searching 
    auto value = find(vec.begin(), vec.end(), 9);
    cout<<"found  value  is :\n" <<*value;
    //to count occurances count methord  
    vector<int> v = {4,2,1,9,12,12,12,12,15};
    int occurances = count(v.begin(), v.end(), 12); 
    cout<<"occurance of  12 is : "<<occurances<<endl;

    //min and max funtion(algorithm )
    cout<<"minimum value is  : "<<*min_element(v.begin(), v.end())<<endl;
    cout<<"maximum value is  : "<<*max_element(v.begin(), v.end())<<endl;

    //reverse function 
    reverse(v.begin(), v.end());
    cout<<"Reversed vector is "<<endl;
    for(auto val : v){
        cout<<val <<" ";
    }
    cout<<"\n";
    cout<<"lower bound example "<<endl;
    vector<int> v1 = {4,2,1,9,12,12,12,12,15};
    

    sort(v1.begin(), v1.end());  // 1 2 4 9 12 12 12 12 15

    cout << *(lower_bound(v1.begin(), v1.end(), 4)); // if 10 is present it will return 10 or else it will return the immediate next element that is greated than 10 works only for sorted  
    cout<<"\n";
    cout << *(upper_bound(v1.begin() , v1.end(),4));


    // lower_bound(x) return first element >=x
    //upper_bound(x) returns first element strictly >x

    return 0;
}