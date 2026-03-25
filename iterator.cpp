#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> vec = {1,2,3,45,5};
    vector<int>:: iterator it;

   
    
    for ( it = vec.begin(); it < vec.end(); it++)
    {
        *it = *it+1;
        cout<<*(it)<<endl;
        
    }
    cout<<"example of rbegin nad rend "<<endl;
    for (auto it = vec.rbegin(); it != vec.rend(); it++)
    {
        cout<<*(it)<<endl;
        
    }

    // Constant iterator
    cout << "Forward (read-only) iteration: ";
    for (auto it = vec.cbegin(); it != vec.cend(); ++it)
    {
        // *it = *it+1; //does ot allow coz its constant 
        cout << *it  << " ";
    }
    cout << endl;




    return 0;
    
}