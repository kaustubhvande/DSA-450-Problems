#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;

struct Pair
{
    int min;
    int max;
};

struct Pair kthMinMax(vector<int> ar, int k, int n)
{
    struct Pair minmax;
    sort(ar.begin(), ar.end());
    minmax.min = ar[k-1];
    minmax.max = ar[n-k];
    return minmax;
}


int main()
{
    vector<int> ar;
    int n, k, value=0;
    
    cout<<"Number of elements to enter : ";
    cin>>n;
    
    cout<<"Enter elements : ";
    for (int i=0; i<n; i++)
    {
        cin>>value;
        ar.push_back(value);
    }

    cout<<"Enter value of K : ";
    cin>>k;

    cout<<"Array: ";
    for (auto i:ar)
        cout<<i<<" ";

    struct Pair minmax = kthMinMax(ar, k, ar.size());
    cout<<endl<<"MIN : "<<minmax.min;
    cout<<endl<<"MAX : "<<minmax.max;

    return 0;
}
