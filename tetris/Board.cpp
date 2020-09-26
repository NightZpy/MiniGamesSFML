//
//  Board.cpp
//  MiniGamesSFML
//
//  Created by Lenyn Alcantara. on 9/22/20.
//

#include "Board.hpp"
#include <SFML/Graphics.hpp>

namespace Tetris {

    template<typename T>
    static T** initArray2D(int cols, int rows, T initValue) {
        T** array = new T*[rows];
        for (int i=0; i < rows; i++) {
            array[i] = new T[cols];
            array[i] = 0;
        }
        
        return array;
    }
    
    Board::Board(int rows, int cols, int deadCellFlag, int emptyCellFlag)
    {
        this->rows = rows;
        this->cols = cols;
        this->deadCellFlag = deadCellFlag;
        this->emptyCellFlag = emptyCellFlag;
        initField();
    }

    Board::Board()
    {
        rows = 20;
        cols = 20;
        deadCellFlag = -1;
        emptyCellFlag = 0;
        initField();
    }

    void Board::initField()
    {
        field = std::vector<std::vector<int>>(rows, std::vector<int>(cols, emptyCellFlag));
    }


    std::vector<std::vector<int>> Board::initFigures() {
        return figures =
        {
            {1,3,5,7}, // I
            {2,4,5,7}, // Z
            {3,5,4,6}, // S
            {3,5,4,7}, // T
            {2,3,5,7}, // L
            {3,5,7,6}, // J
            {2,3,4,5} // O
        };
    }

}

1, 0
1, 1
1, 2
1, 3

