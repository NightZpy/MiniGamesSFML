//
//  Board.cpp
//  MiniGamesSFML
//
//  Created by Lenyn Alcantara. on 9/22/20.
//

#include "Board.hpp"

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

    Board::Board()
    {
        rows = 20;
        cols = 20;
        field = initArray2D<int>(cols, rows, 0);
        figurePositionA = new sf::Vector2<int>[4];
        figurePositionB = new sf::Vector2<int>[4];
        figures = initFigures();
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

