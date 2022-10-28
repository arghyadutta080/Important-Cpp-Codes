#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[10] = {34, 1, 90, 54, 89, 0, 10, 12, 8, 34};

    for (int i = 0; i < 10; i++){
        
        int min = i;

        for (int j = i+1; j < 10; j++){
            if (arr[j] < arr[min])
                min = j;          
        }
        swap(arr[i], arr[min]);       
    }
    
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
    
}