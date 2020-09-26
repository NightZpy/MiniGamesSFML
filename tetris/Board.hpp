//
//  app.hpp
//  MiniGamesSFML
//
//  Created by Lenyn Alcantara. on 9/22/20.
//
#pragma once

#ifndef app_hpp
#define app_hpp

#include <vector>

namespace Tetris{
    class Board {
    public:
        Board(int rows, int cols, int deadCellFlag, int emptyCellFlag);
        Board();
        void updateCurrentFigure(Figure &figure);
        
        ~Board();
    private:
        int emptyCellFlag;
        int deadCellFlag;
        int rows;
        int cols;
        std::vector<std::vector<int>> field;

        void initField();
        void draw();
    };
}
#endif /* app_hpp */
