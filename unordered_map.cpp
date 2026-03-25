#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

void printMap(const unordered_map<int, string>& um) {
    cout << "Current unordered_map elements:\n";
    for (const auto& p : um) {
        cout << "Key: " << p.first << ", Value: " << p.second << endl;
    }
    cout << "-------------------------\n";
}

int main() {

    // 1. Declaration
    unordered_map<int, string> um;
    cout << "Unordered_map created.\n\n";

    // 2. Insertion
    um.insert({1, "Apple"});
    um.insert(pair<int, string>(2, "Banana"));
    um[3] = "Cherry";
    um[4] = "Mango";

    cout << "After insertion:\n";
    printMap(um);

    // 3. Access
    cout << "Access using []: " << um[2] << endl;
    cout << "Access using at(): " << um.at(3) << endl;

    // 4. Size & Empty
    cout << "\nSize: " << um.size() << endl;
    cout << "Is empty? " << (um.empty() ? "Yes" : "No") << endl;

    // 5. Find
    auto it = um.find(2);
    if (it != um.end()) {
        cout << "\nFound key 2: " << it->second << endl;
    }


    //6 . Erase
    cout << "\nErasing key 3...\n";
    um.erase(3);
    printMap(um);

    // 7. Emplace
    um.emplace(10, "Orange");
    um.emplace(20, "Grapes");

    cout << "After emplace:\n";
    printMap(um);

    // 8. Bucket info (IMPORTANT for understanding hashing)
    cout << "\nBucket count: " << um.bucket_count() << endl;

    for (int i = 0; i < um.bucket_count(); i++) {
        cout << "Bucket " << i << " has "
             << um.bucket_size(i) << " elements\n";
    }

    cout<<"total size of hashmap "<<um.size()<<endl;
    

//     [Bucket 0] → (key1, val1) → (key2, val2)
//     [Bucket 1] → (key3, val3)
//     [Bucket 2] → empty
//     [Bucket 3] → (key4, val4) → (key5, val5)

    // | Concept          | Meaning                    |
    // | ---------------- | -------------------------- |
    // | `bucket_count()` | Total buckets (array size) |
    // | `bucket_size(i)` | Elements inside bucket i   |
    // | `size()`         | Total elements in map      |


    // 10. Load factor  , Load Factor = Total elements / Total buckets
    cout << "\nLoad factor: " << um.load_factor() << endl;
    cout << "Max load factor: " << um.max_load_factor() << endl;

    // 11. Rehash
    cout << "\nRehashing to 20 buckets...\n";
    um.rehash(20);

    cout << "New bucket count: " << um.bucket_count() << endl;

    // 12. Iteration
    cout << "\nTraversing unordered_map:\n";
    for (auto& p : um) {
        cout << p.first << " -> " << p.second << endl;
    }

    // 13. Clear
    cout << "\nClearing unordered_map...\n";
    um.clear();
    cout << "Size after clear: " << um.size() << endl;

    return 0;
}