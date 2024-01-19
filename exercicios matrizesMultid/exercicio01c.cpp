#include <iostream>

void matriz(int mat[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            std::cout << mat[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

void multiplicar(int mat1[3][3], int mat2[3][3], int resultado[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            resultado[i][j] = 0; // Inicializa o resultado para a posição (i, j)
            for (int k = 0; k < 3; k++)
            {
                resultado[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

int main()
{
    int valoresIniciais[3][3] = {{2, 3, 1}, {2, 3, 4}, {5, 6, 7}};
    int valoresIniciais2[3][3] = {{2, 3, 1}, {2, 3, 4}, {5, 6, 7}};
    int multip[3][3];
    multiplicar(valoresIniciais, valoresIniciais2, multip);
    matriz(multip);
    return 0;
}