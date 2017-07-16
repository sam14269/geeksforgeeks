#include <iostream>
using namespace std;
int main()
{
    int arr[] = {16, 17, 4, 3, 5, 2};
    int n = sizeof(arr)/sizeof(arr[0]);
    int max =  arr[n-1];
    cout << max << " ";
     
    for (int i = n-2; i >= 0; i--)
    {
        if (max < arr[i])
        {           
            max = arr[i];
            cout << max << " ";
        }
    }    
    return 0;
}    
