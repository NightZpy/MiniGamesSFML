#include "Block.h"

namespace Tetris {
	Block::Block(int x, int y, int size)
	{
		point = sf::Vector2<int>(x, y);
		this->size = size;
	}

	Block::Block() {}
}