#include <iostream>
#include <vector>
#include <list>
#include <map>
#include <set>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    cout << "====VECTOR OPERATIONS====" << endl;
    vector<int> v;
    int n, val;
    cout << "Enter number of elements for vector: ";
    cin >> n;
    cout << "Enter " << n << " elements: ";
    for(int i = 0; i < n; i++) {
        cin >> val;
        v.push_back(val);
    }
    
    cout << "Original: ";
    for(int x : v) cout << x << " ";
    cout << endl;
    
    sort(v.begin(), v.end());
    cout << "After sort: ";
    for(int x : v) cout << x << " ";
    cout << endl;
    
    cout << "Enter value to find in vector: ";
    cin >> val;
    auto it = find(v.begin(), v.end(), val);
    if(it != v.end()) {
        cout << "Found " << val << endl;
    } else {
        cout << val << " not found" << endl;
    }
    
    cout << "Enter value to count in vector: ";
    cin >> val;
    int cnt = count(v.begin(), v.end(), val);
    cout << "Count of " << val << ": " << cnt << endl;
    cout << endl;
    
    cout << "====LIST OPERATIONS====" << endl;
    list<int> l;
    cout << "Enter number of elements for list: ";
    cin >> n;
    cout << "Enter " << n << " elements: ";
    for(int i = 0; i < n; i++) {
        cin >> val;
        l.push_back(val);
    }
    
    cout << "Original: ";
    for(int x : l) cout << x << " ";
    cout << endl;
    
    l.sort();
    cout << "After sort: ";
    for(int x : l) cout << x << " ";
    cout << endl;
    
    cout << "Enter value to find in list: ";
    cin >> val;
    auto it2 = find(l.begin(), l.end(), val);
    if(it2 != l.end()) {
        cout << "Found " << val << endl;
    } else {
        cout << val << " not found" << endl;
    }
    
    cout << "Enter value to count in list: ";
    cin >> val;
    cnt = count(l.begin(), l.end(), val);
    cout << "Count of " << val << ": " << cnt << endl;
    cout << endl;
    
    cout << "====MAP OPERATIONS====" << endl;
    map<string, int> mp;
    string name;
    int score;
    cout << "Enter number of entries for map: ";
    cin >> n;
    for(int i = 0; i < n; i++) {
        cout << "Enter name and score: ";
        cin >> name >> score;
        mp[name] = score;
    }
    
    cout << "Map contents (sorted by key):" << endl;
    for(auto& p : mp) {
        cout << p.first << ": " << p.second << endl;
    }
    
    cout << "Enter name to find in map: ";
    cin >> name;
    auto it3 = mp.find(name);
    if(it3 != mp.end()) {
        cout << "Found " << name << " with score: " << it3->second << endl;
    } else {
        cout << name << " not found" << endl;
    }
    
    cout << "Enter name to count in map: ";
    cin >> name;
    cnt = mp.count(name);
    cout << "Count of " << name << ": " << cnt << endl;
    cout << endl;
    
    cout << "====SET OPERATIONS====" << endl;
    set<int> st;
    cout << "Enter number of elements for set: ";
    cin >> n;
    cout << "Enter " << n << " elements: ";
    for(int i = 0; i < n; i++) {
        cin >> val;
        st.insert(val);
    }
    
    cout << "Set contents (automatically sorted, no duplicates): ";
    for(int x : st) cout << x << " ";
    cout << endl;
    
    cout << "Enter value to find in set: ";
    cin >> val;
    auto it4 = st.find(val);
    if(it4 != st.end()) {
        cout << "Found " << val << endl;
    } else {
        cout << val << " not found" << endl;
    }
    return 0;
}