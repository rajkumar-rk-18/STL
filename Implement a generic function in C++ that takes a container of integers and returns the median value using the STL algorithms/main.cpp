#include <iostream>
#include<vector> //Add vector & algorithm header files
#include<algorithm>

using namespace std;

//Use template to get any type of containers like vector,list,set...etc
template <typename Container>

//Declare a function from the container and value_type refers to the type of the container elements
//For eg: if vector<int> then 'int' will be value_type
typename Container::value_type getMedian(Container numbers)
{
    sort(numbers.begin(),numbers.end());//Sort the given elements
    int size=numbers.size();//Get the size of the element
    int mid=size/2;// Get mid position from size

    if(mid%2==0)//check if the size is even then return the the element that position
    {
        return numbers[mid];
    }
    else//else find the median value for the middle 2 elements
    {
        return (numbers[mid-1]+numbers[mid])/2;
    }
}

//Main function
int main()
{
    //Here user can give any type of container and value_type
    vector<int> num{5,2,6,3,7};
    int medianValue=getMedian(num); //Calling getMedian function()

    //This will give 5 as output after sorting 5 will be the middle element
    cout <<"The median value of the given container is : "<<medianValue<<endl;

    return 0;
}
