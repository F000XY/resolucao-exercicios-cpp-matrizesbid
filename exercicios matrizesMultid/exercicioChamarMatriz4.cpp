#include <iostream>

void exibirMatriz(int matriz[3][3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                std::cout << matriz[i][j][k] << " ";
            }
            std::cout << std::endl;
        }
    }
}

int main()
{
    int matriz[3][3][3] = {
        {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}},
        {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}},
        {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}}
    };

    exibirMatriz(matriz);

    return 0;
}