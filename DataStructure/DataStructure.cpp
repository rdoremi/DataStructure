#pragma once
//#include "sort/SelectSort.h"
#include "tools/SortTestHelper.h"
//#include "sort/SelectSort.cpp"


template <class T>
void selectSort1(T* arr)
{
    for (int i = 0; i < 10; ++i)
    {
        std::cout << arr[i] << " ";
    }
}

int main(int argc, char* argv[])
{
    int len = 100;
    int* arr = SortTestHelper::generateRandomArray(len, 20, 100);
    
   //SelectSort<int>::selectSort(arr,len);

    //SortTestHelper::printArr(arr,len);
   
    //SortTestHelper::testSort("selectSort",arr,Sort<int>::selectSort,len);
    SortTestHelper::testSort("selectSort",arr,Sort<int>::insertSort,len);
   SortTestHelper::printArr(arr,len);
    return 0;
}
