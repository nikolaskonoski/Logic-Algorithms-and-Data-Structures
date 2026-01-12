#include <iostream>
#include <vector>   

using namespace std;

int main() {
    vector<string> fruits = {"Apple", "Banana", "Cherry", "Date"};

    int x[10]{10, 20, 30, 40, 50, 60, 70, 80, 90, 100};

    /*
    // Using traditional for loop to iterate over the array
    for (int i = 0; i < sizeof(x) / 4; i++) {
        cout << x[i] << " ";
    }
    cout << endl;
    */

    // Using range-based for loop to iterate over the array
    //Too use auto keyword before the variable declaration
    for(int i: x) {
        cout << i << " ";
    }
    cout << endl;

    //string nome = "Nikolas";
    const char* nome = "Nikolas"; //Modern C++ style,not is possible iterate with range-based for loop, use pointer arithmetic


    // Using range-based delcaration for loop to iterate over the vector
    for (const string& fruit : fruits) {
        cout << fruit << endl;
    }

    return 0;
}