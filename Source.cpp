/*POinters analysis*/
#include<iostream>
using namespace std;
void swap(char*& str1, char*& str2)
{
    char* temp = str1;
    str1 = str2;
    str2 = temp;
}

int main()
{
    int* ptr = NULL;
    int& ref = *ptr;
    cout << ref;
    return 0;
}