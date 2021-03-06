/* Find the two non-repeating elements in an array of repeating elements */
#include<bits/stdc++.h>
using namespace std;

void get2NonRepeatingNumbers(int arr[], int n){

    int setBitPos, xorr = 0;

    /* XOR all elements */
    for (int i = 0; i < n; i++)
    {
        xorr ^= arr[i];
    }


    /* Now, xorr variable contains, XOR of two non-repeating elements */

    /* Get the rightmost set bit in any number, FORMULLA : n ^ ~(n-1)*/
    setBitPos = xorr & ~(xorr - 1); /* in this position (setBitPos) the two non-repeating elements bits will be different */


    int x = xorr, y = xorr; /* Or, initially it can be x = 0, y = 0 , it'll give same result */
    /* Now divide elements in two sets by
    comparing rightmost set bit of Xor with bit
    at same position in each element. */
    for (int i = 0; i < n; i++)
    {
        /*xorr of first set */
        if(arr[i] & setBitPos){
            x = x ^ arr[i];
        }else{ /*xorr of second set */
            y = y ^ arr[i];
        }
    }
    cout << "The non-repeating elements are " << x << " and " << y;
}

int main(){

    int arr[] = { 1, 4, 2, 7, 9, 8, 1, 4, 2, 7 };
    int n = (sizeof(arr) / sizeof(arr[0]));
    get2NonRepeatingNumbers(arr, n);
    return 0;
}