//PROGRAM TO CHECK UPPER CASE, LOWER CASE & NUMERIC CASE
#include <iostream>
using namespace std;

void check(char ch)
{
    if (isupper(ch))
        cout << ch << " is an upperCase character\n";

    else if (islower(ch))
        cout << ch << " is a lowerCase character\n";

    else
        cout << ch << " is not an alphabetic character\n";
}

int main(){
    char ch;
    check (ch);
    // Get the character
    ch = 'a';
    // Check the character
    check(ch);
    // Get the character
    ch = '0';
    // Check the character
    check(ch);

    return 0;

}
