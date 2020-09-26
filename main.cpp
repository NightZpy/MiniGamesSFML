//
//  main.cpp
//  GameEngine
//
//  Created by Lenyn Alcantara. on 9/21/20.
//

#include <SFML/Graphics.hpp>
#include <iostream>

#define SCREEN_WIDTH 400
#define SCREEN_HEIGHT 600


struct Figure {
    std::vector<sf::Sprite> blocks;
    sf::Vector2<int> quad1;
    sf::Vector2<int> quad2;
    sf::Vector2<int> quad3;
    sf::Vector2<int> quad4;
};

Figure buildFigure(sf::Sprite block) {
    char selectedFigure = 'I';
    
    Figure figure;
    figure.blocks.reserve(4);
    
    switch (selectedFigure) {
        case 'I':
            figure.quad1 = sf::Vector2<int>(1, 1);
            figure.quad2 = sf::Vector2<int>(0, 0);
            figure.quad3 = sf::Vector2<int>(0, 0);
            figure.quad4 = sf::Vector2<int>(0, 0);
            std::fill(figure.blocks.begin(), figure.blocks.end(), block);
            break;
            
        default:
            break;
    }
    
    return figure;
}

void loadBlocks(sf::Texture &blockTexture, std::vector<sf::Sprite> &blocks){
    int posX = 0;
    int posY = 0;
    int blockSize = 30;
    
    for (int i = 0; i < 5; i ++) {
        sf::Sprite block(blockTexture, sf::IntRect(posX, posY, blockSize, blockSize));
        blocks.push_back(block);
        posX += blockSize;
    }
}

static void drawBlocks(const std::vector<sf::Sprite> &blocks, sf::RenderWindow &window) {
    int posX = 0;
    int posY = 0;
    int blockSize = 30;
    
    for (sf::Sprite block: blocks) {
        block.move(posX, posY);
        window.draw(block);
        posX += blockSize;
    }
}

void drawFigure(Figure figure,
                int figurePosX,
                int figurePosY,
                int figureBlockOffsetX,
                int figureBlockOfssetY,
                sf::RenderWindow &window) {
    
    
    for (sf::Sprite block: figure.blocks) {
        block.move(posX, posY);
        window.draw(block);
        posX += blockSize;
    }
};

int main(int argc, const char * argv[]) {
    sf::RenderWindow window(sf::VideoMode(SCREEN_WIDTH, SCREEN_HEIGHT), "Test SFML");
    
    sf::Texture backgroundTexture;
    backgroundTexture.loadFromFile("assets/background_game_scene.png");
    sf::Sprite backgroundScene(backgroundTexture);
    
    sf::Texture blockTexture;
    blockTexture.loadFromFile("assets/blocks.png");
    std::vector<sf::Sprite> blocks;
    loadBlocks(blockTexture, blocks);
    
    int figureBlockOffsetX = 30;
    int figureBlockOfssetY = 30;
    int figurePosX = 0;
    int figurePosY = 0;
    
    Figure figure = buildFigure(blocks[0]);
    
    while (window.isOpen()) {
        sf::Event event;
        
        while (window.pollEvent(event)) {
            switch (event.type) {
                case sf::Event::Closed:
                    window.close();
                    break;
                    
                default:
                    break;
            }
        }
        //backgroundSprite.setPosition(100, 100);
        window.clear(sf::Color::White);
        window.draw(backgroundScene);
        drawFigure(figure, figurePosX, figurePosY, figureBlockOffsetX, figureBlockOfssetY);
        
        drawBlocks(blocks, window);
        window.display();
    }
    
    return EXIT_SUCCESS;
}
