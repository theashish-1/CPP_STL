#include<iostream>
#include<list>
#include<deque>
#include<vector>
#include<queue>
using namespace std;
int main(){
    // list<int> lst;
    // lst.push_back(10);
    // lst.push_back(12);
    // lst.push_front(9);
    // lst.push_front(5);
    // for (int value:lst){
    //     cout<<value<<" ";
    // }

    deque<int> q;
    q.push_back(10);
    q.push_back(12);
    q.push_front(9);
    q.push_front(5);
    for (int value:q){
        cout<<value<<" ";
    }
    cout<<endl;
    cout<<q[2]<<endl;

    //pair 
    pair<int,int> p = {1,2};
    cout<<p.first<<endl;
    cout<<p.second<<endl;

    //pair inside a vector
    vector<pair<int,int>> vec = { {1,2} ,{3,4},{5,6}};
    cout<<"pair inside a vector"<<endl;
    for(auto i : vec){
        cout<<i.first << " "<<i.second<<endl;
    }
    
    // priority queue
    priority_queue<int> priority;
    priority.push(2);
    priority.push(12);
    priority.push(6);
    priority.push(89);

    cout<<priority.top()<<endl;

    while(!priority.empty()){
        cout<<priority.top()<<" ";
        priority.pop();
    }
    cout<<endl;

    
    

    return 0;
    
}