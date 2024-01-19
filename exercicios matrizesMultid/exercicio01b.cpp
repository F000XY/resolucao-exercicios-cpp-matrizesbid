#include <iostream>

void matriz(int mat[3][3])
{
    std::cout << "Matriz Resultante:" << std::endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            std::cout << mat[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

void subtrairMatrizes(int mat1[3][3], int mat2[3][3], int resultado[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            resultado[i][j] = mat1[i][j] - mat2[i][j];
        }
    }
}

int main()
{
    int valoresIniciais[3][3] = {{2, 3, 1}, {2, 3, 4}, {5, 6, 7}};
    int valoresIniciais2[3][3] = {{2, 3, 1}, {2, 3, 4}, {5, 6, 7}};
    int subtracao[3][3];
    subtrairMatrizes(valoresIniciais, valoresIniciais2, subtracao);
    matriz(subtracao);

    return 0;
}