#pragma once
#include <iostream>

template<class T>
class Sort
{
private:
   static void swap(T &target,T &data);
public:
    static void selectSort(T* arr,int len);
    static void insertSort(T* arr,int len);
   
};

