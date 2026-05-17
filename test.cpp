#include <iostream>
using namespace std;

int main() {
    float side, area;

    cout << "បញ្ចូលប្រវែងជ្រុងការ៉េ (cm): ";
    cin >> side; 

    // ក្រឡាផ្ទៃការ៉េ = ជ្រុង * ជ្រុង
    area = side * side;

    cout << "ក្រឡាផ្ទៃការ៉េ = " << area << " cm^2" << endl;

    return 0;
}