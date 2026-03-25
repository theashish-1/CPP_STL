#include <iostream>
#include <map>
#include <string>
using namespace std;
void printMap(const map<int, string>& m) {
    cout << "Current map elements:\n";
    for (const auto& p : m) {
        cout << "Key: " << p.first << ", Value: " << p.second << endl;
    }
    cout << "-------------------------\n";
}

int main() {

    // 1. Initialization
    //note maps are sored as per key 
    map<int, string> m;
    cout << "Map created.\n\n";

    // 2. Insertion
    m.insert({1, "Apple"});
    m.insert(pair<int, string>(2, "Banana"));
    //2nd way of inserting 
    m[3] = "Cherry";   // using []
    m[4] = "Mango";

    cout << "After insertion:\n";
    printMap(m);

     // 3. Accessing elements
    cout << "Access using key m[2]: " << m[2] << endl;
    cout << "Access using at(3): " << m.at(3) << endl;

    // 4. Size and empty
    cout << "\nSize of map: " << m.size() << endl;
    cout << "Is map empty? " << (m.empty() ? "Yes" : "No") << endl;

    // 5. Find
    auto it = m.find(2);
    if (it != m.end()) {
        cout << "\nElement with key 2 found: " << it->second << endl;
    }

     // 7. Erase
    cout << "\nErasing key 3...\n";
    m.erase(3);
    printMap(m);

    // 8. Erase using iterator
    cout << "Erasing first element...\n";
    m.erase(m.begin());
    printMap(m);


    
    // 10. Iterators
    cout << "\nTraversing using iterator:\n";
    for (auto it = m.begin(); it != m.end(); ++it) {
        cout << it->first << " -> " << it->second << endl;
    }

        // 12. Clear
    cout << "\nClearing map...\n";
    m.clear();
    cout << "Map size after clear: " << m.size() << endl;

    // 13. Emplace (efficient insertion)
    m.emplace(100, "Watermelon");
    m.emplace(200, "Papaya");

    cout << "\nAfter emplace:\n";
    printMap(m);
    return 0;
}