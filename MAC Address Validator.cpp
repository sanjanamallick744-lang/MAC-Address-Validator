#include <iostream>
#include <string>
#include <cctype>

using namespace std;

bool isHex(char c)
{
    return (c >= '0' && c <= '9') ||
           (c >= 'A' && c <= 'F') ||
           (c >= 'a' && c <= 'f');
}

bool isValidMAC(string mac)
{
    // MAC address must contain 17 characters
    if (mac.length() != 17)
        return false;

    // Check every character
    for (int i = 0; i < 17; i++)
    {
        // Positions 2, 5, 8, 11, 14 must contain separator
        if (i == 2 || i == 5 || i == 8 || i == 11 || i == 14)
        {
            if (mac[i] != ':' && mac[i] != '-')
                return false;
        }
        else
        {
            if (!isHex(mac[i]))
                return false;
        }
    }

    // Make sure the same separator is used throughout
    char separator = mac[2];

    if (mac[5] != separator ||
        mac[8] != separator ||
        mac[11] != separator ||
        mac[14] != separator)
        return false;

    return true;
}

int main()
{
    string mac;

    cout << "=====================================\n";
    cout << "       MAC ADDRESS VALIDATOR\n";
    cout << "=====================================\n";

    cout << "Enter MAC Address: ";
    cin >> mac;

    if (isValidMAC(mac))
    {
        cout << "\nResult: VALID MAC ADDRESS\n";
    }
    else
    {
        cout << "\nResult: INVALID MAC ADDRESS\n";
    }

    cout << "\nExamples:\n";
    cout << "Valid   : 00:1A:2B:3C:4D:5E\n";
    cout << "Valid   : AA-BB-CC-DD-EE-FF\n";
    cout << "Invalid : 00:1A:2B:3C:4D\n";

    return 0;
}
