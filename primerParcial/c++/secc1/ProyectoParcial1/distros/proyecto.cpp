#include <iostream>
#include <fstream>
#include <vector>
#include <cmath>
#include <string>
using namespace std;

// Definir la función readfile para cargar los patrones desde un archivo de texto externo
void readfile(string filename, vector<vector<double>>& patrones) {
    ifstream file(filename);
    if (file.is_open()) {
        string line;
        while (getline(file, line)) {
            vector<double> patron;
            for (int i = 0; i < line.length(); i++) {
                if (line[i] == '1') {
                    patron.push_back(1.0);
                } else if (line[i] == '0') {
                    patron.push_back(-1.0);
                }
            }
            patrones.push_back(patron);
        }
        file.close();
    } else {
        cout << "Error al abrir el archivo." << endl;
    }
}

// Función principal
int main() {
    // Cargar los patrones del archivo 'patrones.txt'
    vector<vector<double>> patrones;
    readfile("patrones.txt", patrones);
    
    // Definir la matriz de conexión de Hopfield
    int N = patrones[0].size();
    vector<vector<double>> W(N, vector<double>(N, 0.0));
    for (int i = 0; i < patrones.size(); i++) {
        for (int j = 0; j < N; j++) {
            for (int k = 0; k < N; k++) {
                W[j][k] += patrones[i][j] * patrones[i][k];
            }
        }
    }
    for (int i = 0; i < N; i++) {
        W[i][i] = 0.0;
    }
    
    // Recuperar un patrón a partir de un patrón ruidoso
    vector<vector<double>> noise(21, vector<double>(11, 0.0));
    for (int i = 0; i < 21; i++) {
        for (int j = 0; j < 11; j++) {
            noise[i][j] = (2 * rand() % 2) - 1;
        }
    }
    vector<double> pat_noise(N, 0.0);
    for (int i = 0; i < N; i++) {
        double h = 0.0;
        for (int j = 0; j < N; j++) {
            h += W[i][j] * noise[j / 11][j % 11];
        }
        pat_noise[i] = (h >= 0.0) ? 1.0 : -1.0;
    }
    vector<vector<double>> pat_recuperado(21, vector<double>(11, 0.0));
    for (int i = 0; i < N; i++) {
        pat_recuperado[i / 11][i % 11] = pat_noise[i];
    }
    
    // Mostrar matrices de los patrones en la consola
    cout << "Matriz del patrón original:" << endl;
    for (int i = 0; i < 21; i++) {
        for (int j = 0; j < 11; j++) {
            cout << patrones[0][i * 11 + j] << "
