#include <iostream>
#include <string>
using namespace std;



bool recursiveIsPalindrome(string str, int f, int l)
{
    if (str.length() <= 1)
    {
        return true;
    }
    
    if (str[f] == str[l])
    {
        return true;
    }
    else
    {
        return false;
    }
    
    return recursiveIsPalindrome(str, f + 1, l - 1);
}

bool isPalindrome(string str)
{
    return recursiveIsPalindrome(str, 0, str.length() - 1);
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