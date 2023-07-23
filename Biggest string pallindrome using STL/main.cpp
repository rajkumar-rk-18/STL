#include <iostream>
#include<string> //Include string
#include<algorithm> //Include algorithm

using namespace std;


string longestPallindrome(string str)
{
    string longPallindrome;
    size_t i,j;
    size_t lng=0;

    //This loop performs reversing of string and substring
    //Then check for pallindrome and returns the longest pallindrome
    for(i=0;i<str.length();i++)
    {
        for(j=1;j<=str.length()-i;j++)
        {
            string sub=str.substr(i,j);
            string rev=sub;
            reverse(sub.begin(),sub.end());
            if(rev==sub)
            {
                if(j >lng)
                {
                    lng=j;
                    longPallindrome = sub;
                }
            }
            else
            {
                return "Not Found";
            }
        }
    }
    return longPallindrome;
}
int main()
{
    string str;
    cout<<"Enter string :";
    getline(cin,str);

    string longest=longestPallindrome(str);

    if(longest!="Not Found")
        cout<<"The longest pallindrome is : "<<longest;
    else
        cout<<"No pallindrome found"<<endl;
    return 0;
}
