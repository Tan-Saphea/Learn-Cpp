#include <iostream>
using namespace std;

int main() {
    string fruits[] = {"Apple", "Banana", "Cherry"};

    cout << "My fruits is : " << fruits[0] << endl;
    cout << "My fruits is : " << fruits[1] << endl;
    cout << "My fruits is : " << fruits[2] << endl;

    // loop array
    cout << "Looping through the fruits array:" << endl;
    
    for (int i = 0; i < 3; i++)
    {
        cout << "My fruits is : " << fruits[i] << endl;
    }
    

    

    return 0;
}