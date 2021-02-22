#include<iostream>
#include<vector>
using namespace std;

struct Pair
{
    int min;
    int max;
};

struct Pair findMinMax(vector<int> &ar1)
{
    struct Pair minmax;

    if(ar1.size()==0)
    {
        cout<<"array is empty";
    }
    
    if(ar1.size()==1)
    {
        minmax.min = ar1[0];
        minmax.max = ar1[0];
    }
    
    if (ar1[0] < ar1[1])
    {
        minmax.min = ar1[0];            
        minmax.max = ar1[1];
    }
    else
    {
        minmax.min = ar1[1];
        minmax.max = ar1[0];
    }

    for(int i=2; i<ar1.size(); i++)
    {            
        if (ar1[i] < minmax.min)
            minmax.min = ar1[i];
        else if(ar1[i] > minmax.max)
            minmax.max = ar1[i];
    }
    
    return minmax;
}

int main()
{
    vector<int> ar1;
    int n, value=0;
    
    cout<<"Number of elements to enter : ";
    cin>>n;
    
    cout<<"Enter elements : ";
    for (int i=0; i<n; i++)
    {
        cin>>value;
        ar1.push_back(value);
    }

    cout<<"Array: ";
    for (auto i:ar1)
        cout<<i<<" ";
    
    struct Pair minmax = findMinMax(ar1);
    cout<<endl<<"MIN : "<<minmax.min;
    cout<<endl<<"MAX : "<<minmax.max;

    return 0;
}


