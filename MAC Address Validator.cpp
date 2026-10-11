
#include <iostream>
#include <string>
#include <cctype>

using namespace std;

// Check whether a character is hexadecimal
bool isHex(char c)
{
    return (c >= '0' && c <= '9') ||
           (c >= 'A' && c <= 'F') ||
           (c >= 'a' && c <= 'f');
}

// Validate MAC address
bool isValidMAC(string mac)
{
    // MAC address must have exactly 17 characters
    if (mac.length() != 17)
        return false;

    char separator = mac[2];

    // Separator must be colon or hyphen
    if (separator != ':' && separator != '-')
        return false;

    for (int i = 0; i < 17; i++)
    {
        // Check separator positions
        if (i == 2 || i == 5 || i == 8 ||
            i == 11 || i == 14)
        {
            if (mac[i] != separator)
                return false;
        }
        else
        {
            if (!isHex(mac[i]))
                return false;
        }
    }

    return true;
}

// Display validation result
void displayResult(string mac)
{
    cout << "\n-------------------------------------\n";
    cout << "          VALIDATION RESULT\n";
    cout << "-------------------------------------\n";
    cout << "MAC Address : " << mac << endl;

    if (isValidMAC(mac))
    {
        cout << "Status      : VALID\n";
        cout << "Message     : Correct MAC address format.\n";
    }
    else
    {
        cout << "Status      : INVALID\n";
        cout << "Message     : Incorrect MAC address format.\n";
    }

    cout << "-------------------------------------\n";
}

int main()
{
    string mac;
    char choice;

    do
    {
        cout << "\n=====================================\n";
        cout << "        MAC ADDRESS VALIDATOR\n";
        cout << "=====================================\n";
        cout << "Supported formats:\n";
        cout << "  00:1A:2B:3C:4D:5E\n";
        cout << "  AA-BB-CC-DD-EE-FF\n";
        cout << "=====================================\n";

        cout << "Enter MAC Address: ";
        cin >> mac;

        displayResult(mac);

        cout << "\nCheck another address? (Y/N): ";
        cin >> choice;

    } while (choice == 'Y' || choice == 'y');

    cout << "\nThank you for using MAC Address Validator!\n";

    return 0;
}
