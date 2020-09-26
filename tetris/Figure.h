//
//  Board.cpp
//  MiniGamesSFML
//
//  Created by Lenyn Alcantara. on 9/22/20.
//
#pragma once

#include "Block.h"

namespace Tetris{
	
	class Figure
	{
	public:
		Figure(int blockQuantity, int color, int** initBlockPoints);
		
		void rotate();
	private:
		std::vector<Block> blocks;
	};
}