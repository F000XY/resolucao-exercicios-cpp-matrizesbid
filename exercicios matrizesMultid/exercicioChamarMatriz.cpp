#include <iostream>

void chamarMartriz(int mat[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)  // Corrigido: Trocado "i" por "j" aqui
        {
            std::cout << mat[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

int main()
{
    int valoresIniciais[3][3] = {{1, 0, 1}, {1, 1, 0}, {0, 0, 1}};
    chamarMartriz(valoresIniciais);
    return 0;
}