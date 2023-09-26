#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    int n, m, k;
    cout << "Введите число n: ";
    cin >> n;
    cout << "\n";

    cout << "Введите число m: ";
    cin >> m;
    cout << "\n";

    cout << "Введите число k: ";
    cin >> k;
    cout << "\n";

    cout << "Матрица A: " << endl;
    int aMatrix[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            aMatrix[i][j] = rand() % 10;
            cout << aMatrix[i][j] <<"\t";
        }
        cout << "\n";
    }
    cout << "\n\n";
    
    cout << "Матрица B: " << endl;
    int bMatrix[m][k];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < k; j++) {
            bMatrix[i][j] = rand() % 10;
            cout << bMatrix[i][j] <<"\t";
        }
        cout << "\n";
    }
    cout << "\n\n";


    int cMatrix[n][k];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < k; j++) {
            cMatrix[i][j] = 0;
            cout << cMatrix[i][j] <<"\t";
        }
        cout << "\n";
    }

    cout << "Матрица, полученная A * B: " << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < k; j++) {
            for (int r = 0; r < m; r++) {
                cMatrix[i][j] += aMatrix[i][r] * bMatrix[r][j];
            }
            cout << cMatrix[i][j] <<"\t";
        }
        cout << "\n";
    }
}
    
