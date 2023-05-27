#pragma once
#include <iostream>
#include <assert.h>
#include <string>

#include "sort/Sort.h"
#include "sort/Sort.cpp"


namespace SortTestHelper
{
    template <typename T>
    bool isSort(T*, int);
    template <typename T>
    void testSort(T* arr, void (* sort(T* arr, int)), int n);

    int* generateRandomArray(int n, int rangeL, int rangeR)
    {
        int* arr = new int[n];
        srand(time(nullptr));
        assert(rangeL<rangeR);
        for (int i = 0; i < n; ++i)
        {
            arr[i] = rand() % (rangeR + 1 - rangeL) + rangeL;
        }
        return arr;
    }

    template <class T>
    void printArr(T* arr, int len)
    {
        for (int i = 0; i < len; ++i)
        {
            std::cout << arr[i] << " ";
        }
    }

    template <typename T>
    void testSort(std::string sortName, T* arr, void (sort(T* arr, int)), int n)
    {
        clock_t startTime = clock();
        sort(arr, n);
        //SelectSort<int>::selectSort(arr, n);
        clock_t endtTime = clock();
        double time1 = double(endtTime - startTime) / CLOCKS_PER_SEC;

        if (!isSort(arr, n))
        {
            return;
        }
        std::cout << sortName << "time: " << time1 << std::endl;
    }

    template <typename T>
    bool isSort(T* arr, int n)
    {
        for (int i = 0; i < n - 1; ++i)
        {
            if (arr[i] > arr[i + 1])
            {
                return false;
            }
        }
        return true;
    }
}
