#include <iostream>
#include<vector>//include vector
#include<algorithm>//include algorithm

using namespace std;

//This function represents the matrix multiplication
//It has parameters of 2 matrices size of rows and columns
void matrixMultiply(vector<vector<int>> mat1,vector<vector<int>> mat2,size_t r1,size_t c1, size_t c2)
{
    vector<vector<int>> result(r1,vector<int> (c2));
    for(size_t i=0;i<r1;i++){ //According to matrix multiplication matrix 1's row size is same as result
            for(size_t j=0;j<c2;j++){
                    for(size_t k=0;k<c1;k++)
                    {
                        result[i][j]+=mat1[i][k]*mat2[k][j];
                    }
            }
    }
    //This is the loop for printing vector matrix
    for(vector<int> res:result)
    {
        for(auto x:res)
        {
            cout<<x<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    size_t r1,c1,r2,c2;


    cout<<"Enter no of rows in matrix 1: ";
    cin>>r1;
    cout<<endl<<"Enter no of rows in matrix 2: ";
    cin>>r2;
    cout<<endl<<"Enter no of columns in matrix 1: ";
    cin>>c1;
    cout<<endl<<"Enter no of columns in matrix 2: ";
    cin>>c2;

    //Get matrix 1 elements
    cout<<endl<<"Enter matrix 1 elements "<<endl;
    vector<vector<int>> mat1(r1,vector<int> (c1));
    for(size_t i=0;i<r1;i++)
    {
        for(size_t j=0;j<c1;j++)
        {
            cin>>mat1[i][j];
        }
    }

    //Get matrix 2 elements
    cout<<"Enter matrix 2"<<endl;
    vector<vector<int>> mat2(r2,vector<int>(c2));
    for(size_t i=0;i<r2;i++)
    {
        for(size_t j=0;j<c2;j++)
        {
            cin>>mat2[i][j];
        }
    }
    matrixMultiply(mat1,mat2,r1,c1,c2);
    return 0;
}
