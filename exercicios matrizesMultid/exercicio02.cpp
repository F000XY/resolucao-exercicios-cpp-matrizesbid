#include <iostream>
#include <climits>
void acharNum(int mat1[10][2]) {
    int menorNum = INT_MAX;
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 2; j++) {
            if (mat1[i][j] < menorNum) {
                menorNum = mat1[i][j];
            }
        }
    }
    std::cout << "Menor Numero: " << menorNum << std::endl;
}

int main() {
    int valoresIniciais2[10][2] = {{2, 3}, {2, 3}, {5, 6}};
    acharNum(valoresIniciais2);
    return 0;
}
