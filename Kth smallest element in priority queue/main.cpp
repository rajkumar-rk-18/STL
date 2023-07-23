#include <iostream>
#include<queue>
#include<vector>

using namespace std;

//In this program we will push the elements of the priority queue
//And finds the given kth smallest element in the queue
int main()
{
    priority_queue<int,vector<int>,greater<int>> q;//syntacx for min heap queue
    size_t n;
    cout<<"Enter no of elements"<<endl;
    cin>>n;
    //user input elements
    for(size_t i=0;i<n;i++)
    {
        int element;
        cout<<"Enter element "<<i+1<<" ";
        cin>>element;
        q.push(element);
    }
    size_t k;//enter k to get kth smallest number
    int small=0;
    cout<<"Enter k value"<<endl;
    cin>>k;
    for(size_t i=0;i<k;i++)
    {
        small=q.top();
        q.pop();
    }

    cout<<"The "<<k<<"th smallest element is : "<<small<<endl;
    return 0;
}
