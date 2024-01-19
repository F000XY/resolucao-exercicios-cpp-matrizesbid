#include <iostream>

void chamarMartriz(int mat[2][2])
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            std::cout<<mat[i][j];
        }
        std::cout<<std::endl;
    }   
}

int main()
{
    int matriz[2][2]={{0,1},{1,0}};
    chamarMartriz(matriz);
}