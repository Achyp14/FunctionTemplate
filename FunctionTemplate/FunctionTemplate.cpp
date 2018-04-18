//
//  FunctionTemplate.cpp
//  FunctionTemplate
//
//  Created by Andrew Chypurko on 4/17/18.
//  Copyright © 2018 Andrew Chypurko. All rights reserved.
//

#include "FunctionTemplate.hpp"
#include <iostream>
using namespace std;

class FunctionTemplate {
public:
    template <class T> static T getValue(T value)
    {
        return value;
    };
    
    template <class T> static T getMax(T a, T b)
    {
        return (a > b ? a : b);
    };
    
    template <class T, class U> static void printBoth(T a, U b)
    {
        cout << a << " -- " << b << "\n";
    };
    
    template <class T, class U = int> static void printDefault(T a, U b)
    {
        cout << a << " " << b << "\n";
    };
    
    template <class T, int max> static int arrayMin(T arr[], int n)
    {
        int m = max;
        for (int i = 0; i < n; i++)
            if (arr[i] < m)
                m = arr[i];
        
        return m;
    }
};
