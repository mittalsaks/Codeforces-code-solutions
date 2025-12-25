#include <iostream>
using namespace std;

int main() {
    int a1, a2, a3;
    int b1, b2, b3;
    int n;

    cin >> a1 >> a2 >> a3;
    cin >> b1 >> b2 >> b3;
    cin >> n;

    int totalCups = a1 + a2 + a3;
    int totalMedals = b1 + b2 + b3;

    // Shelves needed
    int cupShelves = (totalCups + 4) / 5;     // ceil(totalCups / 5)
    int medalShelves = (totalMedals + 9) / 10; // ceil(totalMedals / 10)

    if (cupShelves + medalShelves <= n)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
