#include <iostream>
#include <string>
#include <cctype>
using namespace std;

bool isPalindromeRecursive(const string& str, int start, int end) 
{
    if (start >= end) 
    {
        return true;  // Base case: single character or empty string is a palindrome
    }

    if (str[start] != str[end])
    {
        return false;
    }

    // Recurse on the substring excluding the first and last characters
    return isPalindromeRecursive(str, start + 1, end - 1);
}

bool isPalindrome(const  string& str) 
{
    return isPalindromeRecursive(str, 0, str.length() - 1);
}

int main() 
{
     string input;
     cout << "Enter a string: ";
     cin >> input;

    if (isPalindrome(input)) 
    {
         cout << "It's a palindrome!" <<  endl;
    }
    else 
    {
         cout << "It's not a palindrome." <<  endl;
    }

    return 0;
}
