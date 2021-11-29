#include <bits/stdc++.h>
#include <iostream>

using namespace std;
/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Quinn Barber
 */

bool isOdd(int num)
{
    if(num % 2 == 0){
        return false;
    }
    else
        return true;
}

int main(void)
{
    int num;
    cout << "Enter a number to test if it is even or odd!\n";
    cin >> num;
    if(isOdd(num))
    {
        cout << "The number " << num << " is an odd number.";
        return 0;
    }
    else{
        cout << "The number " << num << " is an even number.";
    }

}
