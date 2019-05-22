//
// Created by Theo Bessel on 2019-05-22.
//

#include <SFML/Graphics.hpp>

int main() {
    sf::RenderWindow window(sf::VideoMode(1500, 1000),"First window !");

    while(window.isOpen()) {
        sf::Event event;
        while(window.pollEvent(event))
            if(event.type == sf::Event::Closed)
                window.close();
        window.clear();
        window.display();
    }
    return 0;
}