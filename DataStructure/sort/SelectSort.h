#pragma once
#include <iostream>

template<class T>
class SelectSort
{
private:
   static void swap(T &target,T &data);
public:
    static void selectSort(T* arr,int len);
   
};

