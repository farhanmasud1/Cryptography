#include <iostream>
#include <string>
using namespace std;

int main() {
    string my[2];         
    string my1;          
    cin >> my1;          

    for (int i = 0; i < my1.size(); i++) {
        my[i % 2].push_back(my1[i]);
    }

    for (int i = 0; i < 2; i++) {
        cout << my[i] << endl;
    }

    return 0;
}
