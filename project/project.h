#pragma once

int main() {
#include <iostream>
    using namespace std;

    const int SIZE = 5;

    int main(); {
        int A[SIZE][SIZE];
        int B[SIZE][SIZE]; int sum[SIZE][SIZE]{};int product[SIZE][SIZE] = { 0 };

        for (int i = 0; i < SIZE; i++)
            for (int j = 0; j < SIZE; j++)
                cin >> A[i][j];

        for (int i = 0; i < SIZE; i++)
            for (int j = 0; j < SIZE; j++)
                cin >> B[i][j];

        for (int i = 0; i < SIZE; i++)
            for (int j = 0; j < SIZE; j++)
                sum[i][j] = A[i][j] + B[i][j];

        for (int i = 0; i < SIZE; i++) {
            for (int j = 0; j < SIZE; j++) {
                for (int k = 0; k < SIZE; k++) {
                    product[i][j] += A[i][k] * B[k][j];
                }
            }
        };

        for (int i = 0; i < SIZE; i++) {
            for (int j = 0; j < SIZE; j++)
                cout << sum[i][j] << " ";
            cout << endl;
        }

        for (int i = 0; i < SIZE; i++) {
            for (int j = 0; j < SIZE; j++)
                cout << product[i][j] << " ";
            cout << endl;
        }

        return 0;
    }






}
