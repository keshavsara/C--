/* Find the second largest element in the given array. */
#include<bits/stdc++.h>
using namespace std;

int largest_elementindex(int array[], int size) {
    int max = INT_MIN;
    int maxindex = -1;
    for(int i = 0; i < size; i++) {
        if(array[i] > max) {
            max = array[i];
            maxindex = i;
        }
    }
    return maxindex;
}

int main() {
    int array[] = {2, 3, 5, 7, 6, 1,7};
    int n=7;
    
    int indexoflargest = largest_elementindex(array, n);
    
    //array[indexoflargest] = -1;
    int largestelement = array[indexoflargest];
    for(int i = 0;i<n;i++)
    {
        if(array[i]==largestelement)
        {
            array[i]=-1;
        }
    }
    int indexofsecondlargest = largest_elementindex(array, n);
    cout << "The second largest element is: " << array[indexofsecondlargest] << endl;

    return 0;
}
