//
//  main.cpp
//  GameEngine
//
//  Created by Lenyn Alcantara. on 9/21/20.
//

#include <SFML/Graphics.hpp>
#include <iostream>

#define SCREEN_WIDTH 1024
#define SCREEN_HEIGHT 720

int main(int argc, const char * argv[]) {
    sf::RenderWindow window(sf::VideoMode(SCREEN_WIDTH, SCREEN_HEIGHT), "Test SFML");
    
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
        window.clear();
        window.display();
    }
    
    return EXIT_SUCCESS;
}
