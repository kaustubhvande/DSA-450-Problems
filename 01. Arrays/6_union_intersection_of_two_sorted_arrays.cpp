using namespace std;
#include<vector>
#include<iostream>


vector<int> findUnion(vector<int> &ar1, vector<int> &ar2)
{
    vector<int> t;
    int i=0, j=0;

    if (ar1[0]<ar2[0]){
        t.push_back(ar1[0]);
        i++;
    }
    else if(ar1[0]>ar2[0]){
        t.push_back(ar2[0]);
        j++;
    }
    else{
        t.push_back(ar1[0]);
        i++; j++;
    }

    for(int k=1; i!=ar1.size() && j!=ar2.size(); k++)
    {
        if (ar1[i]<ar2[j]){
            if(t[k-1]<ar1[i])
                t.push_back(ar1[i]);
            i++;   
        }
        else if (ar1[i]>ar2[j]){
            if(t[k-1]<ar2[j])
                t.push_back(ar2[j]);
            j++;   
        }
        else{
            if (t[k-1]<ar1[i])
                t.push_back(ar1[i]);
            i++; j++;          
        }
    }  
    return t;
}

/*vector<int> findIntersection(vector<int> &ar1, vector<int> &ar2)
{
    vector<int> temp;

    return temp;
}*/

int main()
{
    vector<int> ar1={1,3,4,6,8,8,8}, ar2={1,3,5,7,8,9}, arunion, arintersection;

    cout<<endl<<"Array 1 : ";
    for(auto i : ar1)
        cout<<i<<" ";

    cout<<endl<<"Array 2 : ";
    for(auto i : ar2)
        cout<<i<<" ";

    arunion = findUnion(ar1, ar2);
    cout<<"\n\nUnion : ";
    for(auto i : arunion)
        cout<<i<<" ";

    /*arintersection = findIntersection(ar1, ar2);
    cout<<"\n\nIntersection : ";
    for(auto i : arintersection)
        cout<<i<<" ";*/

    return 0;
}