//
//  main.cpp
//  FunctionTemplate
//
//  Created by Andrew Chypurko on 4/17/18.
//  Copyright © 2018 Andrew Chypurko. All rights reserved.
//

#include <iostream>
#include "FunctionTemplate.cpp"
using namespace std;

int main(int argc, const char * argv[]) {
    
    cout << "|------------------ Get Value --------------------|" << "\n\n";
    
    int intValue = FunctionTemplate::getValue<int>(4);
    cout << intValue << "\n";
    
    string stringValue = FunctionTemplate::getValue<string>("Hello world");
    cout << stringValue << "\n";
    
    char charValue = FunctionTemplate::getValue<char>('W');
    cout << charValue << "\n";
    
    float floatValue = FunctionTemplate::getValue<float>(3.14);
    cout << floatValue << "\n";
    
    bool boolValue = FunctionTemplate::getValue<bool>(true);
    cout << boolValue << "\n\n";
    
    cout << "|------------------ Find max --------------------|" << "\n\n";
    
    cout << FunctionTemplate::getMax<int>(12, 10) << "\n";
    cout << FunctionTemplate::getMax<float>(99.999999, 100) << "\n";
    cout << FunctionTemplate::getMax<char>('m', 'n') << "\n";
    cout << FunctionTemplate::getMax<string>("abcdd", "abcde") << "\n\n";
    
    cout << "|------------------ Different types --------------------|" << "\n\n";
    
    FunctionTemplate::printBoth<int, float>(12, 12.123456789);
    FunctionTemplate::printBoth<string, double>("Banan", 22);
    FunctionTemplate::printBoth<char, bool>('5', true);
    
    cout << "\n";
    cout << "|------------------ Default argument --------------------|" << "\n\n";
    
    FunctionTemplate::printDefault<int>(3, 4);
    FunctionTemplate::printDefault<double, string>(10.10, "string");
    
    cout << "\n";
    cout << "|------------------ NonType parameter --------------------|" << "\n\n";
    
    int arr1[]  = {10, 20, 15, 12};
    int n1 = sizeof(arr1)/sizeof(arr1[0]);

    char arr2[] = {1, 2, 3};
    int n2 = sizeof(arr2)/sizeof(arr2[0]);

    cout << FunctionTemplate::arrayMin<int, 10000>(arr1, n1) << "\n";
    cout << FunctionTemplate::arrayMin<char, 256>(arr2, n2) << "\n";
    
    return 0;
}
