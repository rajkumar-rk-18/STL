/*In this example, we've created a CustomStack class that uses std::vector to store the elements.
 The class provides standard stack operations like push, pop, top, empty and size.
 We've used the STL algorithms push_back, back, pop_back, empty, and size for these operations.*/

#include<iostream>
#include<vector>  //vector headerfile

using namespace std;

class container
{
private:
    //Declaring vector as private variable
    vector<int> nums;
public:
    //It acts like push() in STACK
    void push(int a)
    {
        nums.push_back(a);
    }
    //It acts like pop() in STACK
    void pop()
    {
        if(nums.empty())
            cout<<"Stack is empty"<<endl;
         nums.pop_back();
    }
    //It acts like top() in STACK
    int top()
    {
        return nums.back();
    }
    //It acts like empty() in STACK
    bool empty()
    {
        return nums.empty();
    }
    //It acts like size() in STACK
    int size()
    {
         return nums.size();
    }

};

int main()
{
    container Stack;
    Stack.push(1);
    Stack.push(2);
    Stack.push(3);
    Stack.push(4);
    Stack.push(5);
    cout<<"Stack size before popping out the elements : "<<Stack.size()<<endl;

    while(!Stack.empty())
    {
        cout<<Stack.top()<<" "; //It prints the top element one by one
        Stack.pop(); //It removes the top element after printing
    }
    cout<<endl;

    cout<<"Stack size after printing and popping out is : "<<Stack.size()<<endl;

    return 0;
}
