#include <iostream>
#include <algorithm>

using namespace std;

int main()
{   int n;
    cout<<"enter size of array:";
    cin>>n;
    int array[n];
    cout<<"enter array elements";
    for(int i=0;i<n;i++)
       cin>>array[i];
    int x = 3;
    for(int i = 0; i < n; i++) {
        if (array[i] == x) {
            cout << "Fount at index: " << i;
        }
    }


}
