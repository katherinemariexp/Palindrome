#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(string str)
{
    if (str.size() <= 1)
    {
        return true;
    }
    else if (str == string(str.rbegin(), str.rend()))
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    string testStrings[6] = 
        {
            "ABLE WAS I ERE I SAW ELBA",
            "FOUR SCORE AND SEVEN YEARS AGO",
            "NOW IS THE TIME FOR ALL GOOD MEN",
            "DESSERTS I STRESSED",
            "ASK NOT WHAT YOUR COUNTRY CAN DO FOR YOU",
            "KAYAK"
        };
        
        for (int i = 0; i < 6; i++)
        {
            if (!(isPalindrome(testStrings[i])))
            {
                cout << "\"" << testStrings[i] << "\"" << " is NOT a palindrome." << endl;
            }
            else
            {
                cout << "\"" << testStrings[i] << "\"" << " is a palindrome." << endl;
            }
        }
        
        return 0;
}