//
//  app.hpp
//  MiniGamesSFML
//
//  Created by Lenyn Alcantara. on 9/22/20.
//
#pragma once

#ifndef app_hpp
#define app_hpp

#include <SFML/Graphics.hpp>
#include <time.h>
#include <stdio.h>


namespace Tetris{
    class Board {
    public:
        Board(int rows, int cols);
        Board();
        
        std::vector<std::vector<int>> initFigures();
        void draw();
        
        ~Board();
    private:
        int rows, cols;
        int** field;
        sf::Vector2<int> *figurePositionA, *figurePositionB;
        std::vector<std::vector<int>> figures;
    };
}
#endif /* app_hpp */
