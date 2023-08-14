#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of aray: ";
    cin >> n;
    int arr[n];
    cout<<"Enter the elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    int hash[13] = {0};
    

    for (int i = 0; i < n; i++)
    {
        hash[arr[i]] += 1;
    }
    for (int i = 0; i < 13; i++)
    {
        if (hash[i] != 0)
        {
            cout <<"Element: "<< i << " frequency: " << hash[i] << endl;
        }
    }
    return 0;
}