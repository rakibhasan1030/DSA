#include<bits/stdc++.h>
using namespace std;
int main(){
    int N, M;
    cout<< "Enter ROW for the MATRIX : ";
    cin>>N;
    cout<< "Enter COLUMN for the MATRIX : ";
    cin>>M;

    int arr[N][M];
    for (size_t i = 0; i < N; i++)
    {
        for (size_t j = 0; j < M; j++)
        {
            cout<< "Enter [" << i << j << "]-th element : ";
            cin>>arr[i][j];
        }
    }
    
    cout << endl;
    cout << "Your matrix is : " << endl;

    for (size_t i = 0; i < N; i++)
    {
        for (size_t j = 0; j < M; j++)
        {
            cout<<arr[i][j] << " ";
        }
        cout << endl;
    }

    /* SPIRAL PRINT */
    
    cout << endl;
    cout << "Your SPIRAL matrix is : ";

    int i, top = 0, bottom = N-1, left = 0, right = M-1; /* this four variable are marking the boundary of our spiral movement */
    int direction = 0; /* Here, direction can be 0 (left to right), 1 (top to bottom), 2 (right to left) or 3 (bottom to top) */

    while(top <= bottom && left <= right){

        /* first condition : left to right */
        if (direction == 0){
            for(i = left; i <= right; i++){
                cout << arr[top][i] << " ";
            }
            top++; /* shift the top, one position down by inreasing its value */
        }

        /* second condition : top to bottom */
        else if(direction == 1){
            for (i = top; i <= bottom; i++){
                cout << arr[i][right] << " ";
            }
            right--; /* shift the right, one position left by decreasing its value */
        }

        /* third condition : right to left */
        else if (direction == 2){
            for (i = right; i >= left; i--){
                cout << arr[bottom][i] << " ";
            }
            bottom--; /* shift the bottom, one position up by decreasing its value */
        }

        /* forth condition : bottom to top */
        else if (direction == 3){
            for (i = bottom; i >= top; i--){
                cout << arr[i][left] << " ";
            }
            left++; /* shift the left, one position right by inreasing its value */
        }

        direction = (direction + 1) % 4;
    }
    return 0;
}
































