// Password gen.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<cstdlib>
#include<ctime>

using namespace std;
const char char_and_num[] = "0123456789!@#$%^&*abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"; // All the values that can go into a password.
int string_length = sizeof(char_and_num)-1;

int main()
{
    int n;
   cout << "Enter your desired length of your password ";
   cin >> n; //user inputs desirable legnth
   srand(time(0));
   cout << "Generated Password: ";
   for (int i = 0; i < n; i++)
       cout << char_and_num[rand() % string_length]; //random generator for the characters in the password, given the length
   return 0;

}

