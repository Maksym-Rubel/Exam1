#include <iostream>
using namespace std;


void maxmin(int* arr, size_t size,int* max1,int* min2)
{
    int max = arr[0];
    int min = arr[0];
    for (size_t i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    *max1 = max;
    *min2 = min;

}

int main()
{
    int arr[5] = { 1,2,3,4,5 };
    int max12 = 0, min12 = 0;
    maxmin(arr, 5, &max12, &min12);
    cout << "Max --> " << max12 << endl;
    cout << "Min --> " << min12 << endl;

}
    

