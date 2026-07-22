// Figure out how to find if a number is power of 2 using loop.

/*
Algorithm:
    Input a number n.
    If n <= 0, it is not a power of 2.
    While n > 1:
        If n % 2 != 0, it is not a power of 2.
        Otherwise, divide n by 2.
    If n becomes 1, it is a power of 2.
*/

#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter a number: ";
    cin >> n;

    if (n <= 0)
    {
        cout << "Not a power of 2";
        return 0;
    }

    while (n > 1)
    {
        if (n % 2 != 0)
        {
            cout << "Not a power of 2";
            return 0;
        }
        n = n / 2;
    }

    cout << "Power of 2";
    return 0;
}

// Figure out how to find if a number is power of 2 without using any loop.

// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter a number: ";
//     cin >> n;

//     if (n > 0 && (n & (n - 1)) == 0)
//         cout << n << " is a power of 2.\n";
//     else
//         cout << n <<" is not a power of 2.\n";

//     return 0;
// }

/*
 Logic

A power of 2 has only one bit set in its binary representation.

Examples:

1 → 0001 ✅
2 → 0010 ✅
4 → 0100 ✅
8 → 1000 ✅

If you subtract 1 from a power of 2:

8 → 1000
7 → 0111

Now,

1000
0111
----
0000

So, for any positive power of 2:

n & (n - 1) == 0
*/