#include "Sort.h"

#include <array>


template <class T>
void Sort<T>::selectSort(T* arr, int len)
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
        swap(arr[i], arr[min]);
    }
}

template <class T>
void Sort<T>::swap(T& target, T& data)
{
    T temp = target;
    target = data;
    data = temp;
}

template <class T>
void Sort<T>::insertSort(T* arr, int len)
{
    /*for (int i = 1; i < len; ++i)
    {
       // int max = i;
        for (int j = i; j > 0 && (arr[j] < arr[j-1]); --j)
        {
             swap(arr[j], arr[j-1]);
               // max = j;
        }
    }*/

    for (int i = 1; i < len; ++i)
    {
        
        for (int j = i; j > 0 && (arr[j] < arr[j-1]); --j)
        {
            swap(arr[j], arr[j-1]);
            // max = j;
        }
    }
}
