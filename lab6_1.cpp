#include <iostream>
using namespace std;

int main()
{
    int even = 0, odd = 0;
    while (true)
    {
        int x;
        cout << "Enter an integer: ";
        cin >> x;
        if (x == 0)
            break;
        else if (x % 2 == 0)
            even++;
        else
            odd++;
    }

    cout << "#Even numbers = " << even << endl;
    cout << "#Odd numbers = " << odd;
    return 0;
}
