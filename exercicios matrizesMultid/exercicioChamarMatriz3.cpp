#include <iostream>

void chamarMartriz(int mat[5][5])
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            std::cout<<mat[i][j];
        }
        std::cout<<std::endl;
    }
    
}
int main()
{
    int matriz[5][5]=
    {{0,0,0,0,0},
    {1,1,1,1,1},
    {0,0,0,0,0},
    {1,1,1,1,1},
    {0,0,0,0,0}};
    chamarMartriz(matriz);
    return 0;
}