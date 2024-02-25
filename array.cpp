#include<iostream>
using namespace std;

void get_array(int array[] , int n)
{
    for(int i = 0 ; i < n ; i++)
    {
        cout << "Enter a[" << i<< "]=" ;
        cin >> array[i];
    }
}

void print_array(int array[] , int n)
{
    for(int i = 0 ; i < n ; i++)
    {
        cout << "array[" << i << "]= " << array[i] << "\n";
    }
}

int find_max(int array[] , int n)
{
    int max = array[0] , index = 0;
    for(int i = 0 ; i < n ; i++)
    {
        if(array[i] > max)
        {
            max = array[i];
            index = i;
        }
    }
    return index;
}

int find_item(int array[] , int n , int item)
{
    for(int i = 0 ; i < n ; i++)
    {
        if(array[i] == item)
        {
            return i;//Item found.
        }
    }
    return -1;//Item not found.
}

int main()
{
    const int n = 4;
    int array[n] , item = 5;
    get_array(array , n);
    print_array(array , n);
    cout << "The cell number of the largest cell is " << find_max(array , n) << ".\n";
    int a = find_item(array , n , item);
    if (a == -1)
    {
        cout << "The item not found." << "\n";
    }
    else
    {
        cout << "The cell number of the item is " << a <<".\n";
    }
}