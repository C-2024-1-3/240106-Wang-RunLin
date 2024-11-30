#include <iostream>
using namespace std;

void acsend(int arr[],int size);

int main()
{
    int arrSize=0;
    cout<<"Enter the size of the array: ";
    cin>>arrSize;
    int *p_arr=new int[arrSize];
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<arrSize;i++) {
        cin>>p_arr[i];
    }
    acsend(p_arr,arrSize);
    cout<<"The elements of the array are: ";
    for(int i=0;i<arrSize;i++) {
        cout<<*(p_arr+i)<<" ";
    }
    delete[] p_arr;
    return 0;
}

void acsend(int arr[],int size) {
    bool changed = true;
    do
    {
        changed = false;
        for (int j = 0; j < (size-1); j++)
            if (arr[j] > arr[j + 1])
            {
                int temp;
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                changed = true;
            }
    } while (changed);
}

