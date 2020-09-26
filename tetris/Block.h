#pragma once

#include <SFML/Graphics.hpp>

namespace Tetris {
	class Block
	{
	public:
		Block(int x, int y, int size);
		Block();

	private:
		sf::Vector2<int> point;
		int size;
	};
}