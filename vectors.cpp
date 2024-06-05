#include <vector>
#include <iostream>

using namespace std;

int main() {
    vector<int> vec1 = {1, 2, 3, 4, 5};

    for (int i : vec1) {
        cout << i << " ";
    }

    vector<int> vec1 = {1, 2, 3, 4, 5};

    vec1.push_back(6);
    vec1.push_back(7);

    cout << "Element at index 2: " << vec1[2] << endl;
    cout << "Element at index 2 (using at): " << vec1.at(2) << endl;
    cout << "First element: " << vec1.front() << endl;
    cout << "Last element: " << vec1.back() << endl;

    vec1[2] = 10;

    vec1.pop_back(); 
    vec1.erase(vec1.begin() + 1); 


    for (int i : vec1) {
        cout << i << " ";
    }
    cout << endl;

    cout << "Size: " << vec1.size() << endl;
    cout << "Capacity: " << vec1.capacity() << endl;
    return 0;
}
