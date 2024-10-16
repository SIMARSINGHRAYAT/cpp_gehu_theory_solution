#include <iostream>  
using namespace std;  

int main() {  
    int n, m;  
    cout << "Enter Size of the matrix: " << endl;  
    cout << "n: ";  
    cin >> n;  
    cout << "m: ";  
    cin >> m;  

    int arr[100][100];  
    cout << "Enter Elements of the matrix: " << endl;  
    for (int i = 0; i < n; i++) {  
        for (int j = 0; j < m; j++) {  
            cin >> arr[i][j];  
        }  
    }  

    int top = 0, bottom = n - 1, left = 0, right = m - 1;  

    while (top <= bottom && left <= right) {  
        for (int i = left; i <= right; i++) {  
            cout << arr[top][i] << " ";  
        }  
        top++;  

        for (int i = top; i <= bottom; i++) {  
            cout << arr[i][right] << " ";  
        }  
        right--;  

        if (top <= bottom) {  
            for (int i = right; i >= left; i--) {  
                cout << arr[bottom][i] << " ";  
            }  
            bottom--;  
        }  

        if (left <= right) {  
            for (int i = bottom; i >= top; i--) {  
                cout << arr[i][left] << " ";  
            }  
            left++;  
        }  
    }  

    cout << endl;  
    return 0;  
}