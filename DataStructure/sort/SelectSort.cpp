#include "SelectSort.h"

#include <array>


template <class T>
void SelectSort<T>::selectSort(T* arr, int len)
{
    
    for (int i = 0; i < len; ++i)
    {
        int min = i;
        for (int j = i + 1; j < len; ++j)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
            
        }
        swap(arr[i],arr[min]);
    }
}

template <class T>
void SelectSort<T>::swap(T& target, T& data)
{
    T temp = target;
    target = data;
    data = temp;
}
