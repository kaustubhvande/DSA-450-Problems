#include<iostream>
#include<vector> 
using namespace std;

void printarray(vector<int> &ar1)
{
    //print array
    for (int i=0; i<ar1.size(); i++)
        cout<<ar1[i]<<" ";
    cout<<endl;
}

//iterative method
/*void reversearray(vector<int> &ar1, int start, int end)
{
    int temp;
    while(start < end)
    {
        //swap start with end then increment start & decrement end 
        temp = ar1[start];
        ar1[start] = ar1[end];
        ar1[end] = temp;
        start++;
        end--;
    }
}*/

//recursive method
void reversearray(vector<int> &ar1, int start, int end)
{  
    if(start>=end)
        return;

    int temp;
    //swap start with end
    temp = ar1[start];
    ar1[start] = ar1[end];
    ar1[end] = temp;        

    reversearray(ar1, start+1, end-1);
}

int main()
{
    vector<int> ar1={3,6,4,2,1};
    int start=0, end=ar1.size()-1;
    
    printarray(ar1);
    reversearray(ar1, start, end);
    printarray(ar1);
    
    return 0;
}

