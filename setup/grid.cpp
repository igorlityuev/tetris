#include "grid.hpp"


Grid::Grid()
{
    height = 20;
    width = 10;
    for (int i =0; i < height;i++){
        for (int j =0; j < width;j++){
            grid[i][j] =0;
        }
    }
    colors = GetColors();
}



void Grid::Draw()
{
    for (int i =0; i<height; i++){
        for (int j=0; j<width; j++){
            int idcolor = grid[i][j]; 
            DrawRectangle(j * Size + 1,i * Size + 1,Size - 1,Size - 1,colors[idcolor]);
   
        }
    }
}


