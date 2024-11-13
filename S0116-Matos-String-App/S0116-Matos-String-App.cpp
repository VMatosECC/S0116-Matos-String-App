// S0116-Matos-String-App.cpp :

#include <iostream>
#include <string>
using namespace std;

//Prototypes --------------------------------
void experiment01();
void experiment02();
void experiment03();
void reverse1(string& s);
bool isPalindrome1(string s);
bool isPalindrome2(string s);

int main()
{
    experiment01();
    cout << "\nAll Done!\n";
}
//-----------------------------------------------
// User-defined methods
void experiment01()
{
    //Show individual characters of a given string
    string s1 = "Bart Simpson";
    for (int i = 0; i < s1.length(); i++)
    {
        char c = s1[i];
        cout << c << "\t" << (int)c << endl;
    }

    cout << endl;
    cout << "s1 (before): " << s1 << endl;
    reverse1(s1);
    cout << "s1 (after):  " << s1 << endl;


    string s2 = "tattarrattat";
    s2 = "AMANAPLANACANALPANAMA";
    cout << "Is " << s2 << " a palindrome? " 
        << (isPalindrome2(s2)? "TRUE" : "FALSE") << endl;
}
//----------------------------------------------------------------------
bool isPalindrome1(string s)
{
    string rs = s;
    reverse1(rs);
    return (s == rs);
}

bool isPalindrome2(string s)
{
    int first = 0;
    int last = s.length() - 1;

    while (first < last) {
        if (s[first++] != s[last--]) { return false; } //not a palindrome!
    }
    return true;
}

//----------------------------------------------------------------------
void reverse1(string& s)
{
    int first = 0;
    int last = s.length() - 1;
    while (first < last) {
        swap(s[first], s[last]);
        first++;
        last--;
    }
}