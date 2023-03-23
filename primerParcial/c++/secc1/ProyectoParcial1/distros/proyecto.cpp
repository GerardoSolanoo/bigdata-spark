
#include <iostream>
#include <fstream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    int N = 231; // Longitud de los patrones
    vector<vector<int>> patrones; // Matriz de patrones
    vector<int> temp(N,0);
    
    // Leer patrones desde archivo
    ifstream inputFile("patrones.txt");
    while (inputFile >> temp[0]) {
        for (int i = 1; i < N; i++) {
            inputFile >> temp[i];
        }
        patrones.push_back(temp);
    }
    inputFile.close();
    
    // Definir la matriz de conexión de Hopfield
    vector<vector<int>> W(N, vector<int>(N, 0));
    for (int i = 0; i < patrones.size(); i++) {
        for (int j = 0; j < N; j++) {
            for (int k = 0; k < N; k++) {
                W[j][k] += patrones[i][j] * patrones[i][k];
            }
        }
    }
    for (int i = 0; i < N; i++) {
        W[i][i] = 0;
    }
    
    // Recuperar un patrón a partir de un patrón ruidoso
    vector<int> pat_noise(N, 0);
    for (int i = 0; i < N; i++) {
        pat_noise[i] = 2 * rand() % 2 - 1;
    }
    for (int i = 0; i < N; i++) {
        int h = 0;
        for (int j = 0; j < N; j++) {
            h += W[i][j] * pat_noise[j];
        }
        pat_noise[i] = (h >= 0) ? 1 : -1;
    }
    vector<vector<int>> pat_recuperado(21, vector<int>(11, 0));
    for (int i = 0; i < 21; i++) {
        for (int j = 0; j < 11; j++) {
            pat_recuperado[i][j] = pat_noise[i * 11 + j];
        }
    }
    
    // Mostrar matrices de los patrones en la consola
    cout << "Matriz del patrón original:" << endl;
    for (int i = 0; i < 21; i++) {
        for (int j = 0; j < 11; j++) {
            cout << patrones[0][i * 11 + j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    
    cout << "Matriz del patrón noising:" << endl;
    for (int i = 0; i < 21; i++) {
        for (int j = 0; j < 11; j++) {
            cout << pat_noise[i * 11 + j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    
    cout << "Matriz del patrón recuperado:" << endl;
    for (int i = 0; i < 21; i++) {
        for(int j =0; j<21; j++){
            cout << pat_recuperado[i][j] << " ";
        }
        cout << endl;
    }
        
}