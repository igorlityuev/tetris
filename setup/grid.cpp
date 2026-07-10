#include "grid.hpp"

Grid::Grid()
{
    height = 20;
    width = 10;
    for (int i =0; i < height;i++){
        for (int j =0; j < width;j++){
            grid[i][j] = 0;
        }
    }
    colors = GetColors();
}

void Grid::ClearY(int y){
    for (int x = 0; x < 10; x++ ){
        grid[y][x] = 0;
    }
}


void Grid::Down(int y, int count){
    for (int x = 0; x<10; x++){
        grid[y + count][x] = grid[y][x]; 
        grid[y][x] = 0;
    }
}




void Grid::Draw()
{
    for (int i =0; i<height; i++){
        for (int j=0; j<width; j++){
            int idcolor = grid[i][j]; 
            DrawRectangle(j * SizeGame + 1,i * SizeGame + 1,SizeGame - 1,SizeGame - 1,colors[idcolor]);
   
        }
    }
}


