#include <iostream>
#include<set> //Include set
#include<algorithm>

using namespace std;

int main()
{
    set<int> numbers;//Declare a set
    int element;
    size_t n; //Set size of the set
    cout<<"Enter size of set : ";
    cin>>n;
    cout<<endl<<"Enter the set elements "<<endl;
    //Set elements of the set
    for(size_t i=0;i<n;i++)
    {
        cin>>element;
        numbers.insert(element);
    }
    //Printing set elements
    cout<<"Set elements are : "<<endl;
    for(auto i:numbers)
        cout<<i<<" ";
    cout<<endl;
    set<int> uniq; //Declare another set
    int start,last;
    //Get start and end range
    cout<<"Enter start range and end range"<<endl;
    cin>>start>>last;
    //Run for each element in numbers set
    for (auto num : numbers) {
            //Check is the number is inside the range
        if(num>=start && num<=last)
        {
            uniq.insert(num);//Assign those numbers to uniq set
            cout<<num<<" ";
        }
    }
    //Prints the output
    if(!uniq.empty())
        cout<<endl<<"The Total number of unique elements presents in the range "<<start<<" to " <<last<<" are "<<uniq.size();
    else
        cout<<"Elements not found";
    return 0;
}
