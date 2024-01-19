#include <iostream>

void matriz1(int mat1[6][3])
{
    std::cout<<"Insira o numero das matrizes: "<<std::endl;
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            std::cin >> mat1[i][j];
        }
        std::cout << std::endl;
    }   
}


int main()
{
    int teste[6][3];
    matriz1(teste);
    return 0;
}