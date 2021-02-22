#include<iostream>
#include<vector>
using namespace std;

void rearrangeArray(vector<int> &ar)
{
    int j=0;
    for(int i=0; i<ar.size(); i++)
    {
        if(ar[i]<0)
        {
            if(i!=j)
                swap(ar[j], ar[i]);
            j++;
        }
    }
}

void printArray(vector<int> &ar)
{
    for (auto i:ar)
        cout<<i<<" ";
}

int main()
{
    vector<int> ar;
    int n, value=0;
    
    cout<<"Number of elements to enter : ";
    cin>>n;
    cout<<"Enter elements : ";
    for (int i=0; i<n; i++)
    {
        cin>>value;
        ar.push_back(value);
    }

    rearrangeArray(ar);
    cout<<endl<<"Rearranged Array :";
    printArray(ar);

    return 0;
}