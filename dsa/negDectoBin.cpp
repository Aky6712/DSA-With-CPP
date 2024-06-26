#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int n;
    cout << "Enter any number: ";
    cin >> n;

    // Save the original number for display
    int original_n = n;

    // Initialize variables
    int ans = 0;
    int i = 0;

    // Use unsigned for the manipulation to correctly handle negative numbers
    unsigned int un = static_cast<unsigned int>(n);

    // Process each bit
    while (un != 0) {
        int bit = un & 1;
        ans = (bit * pow(10, i)) + ans;
        cout << "Intermediate binary representation: " << ans << endl;
        un = un >> 1;
        i++;
    }

    cout << "Binary representation of " << original_n << " is: " << ans << endl;

    return 0;
}
