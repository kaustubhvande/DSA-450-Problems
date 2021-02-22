#include<iostream>
#include<vector>
using namespace std;

void sortarray(vector<int> &ar)
{
    int count0=0, count1=0, count2=0, i;

    for (i=0; i<ar.size(); i++)
    {
        if (ar[i]==0)
            count0++;
        if (ar[i]==1)
            count1++;
        if (ar[i]==2)
            count2++;
    }

    i=0;
    while (count0)
    {
        ar[i]=0;
        count0--;
        i++;
    }
    while (count1)
    {
        ar[i]=1;
        count1--;
        i++;
    }
    while (count2)
    {
        ar[i]=2;
        count2--;
        i++;
    }
}

void printarray(vector<int> &ar)
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
    
    cout<<endl<<"Sort array containing only 0, 1, 2 without using sort algorithm:";
    cout<<endl<<"Array :";
    printarray(ar);
    sortarray(ar);
    cout<<endl<<"Sorted Array :";
    printarray(ar);

    return 0;
}