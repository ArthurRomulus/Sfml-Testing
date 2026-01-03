#include <SFML/Graphics.hpp>
#include <iostream>

class world{


}

class menu {
    private:
    sf::RenderWindow Menu;

    public:

    void executemenu(){
            float y = 800, x = 600;
    
    
    Menu(sf::VideoMode(x, y), "Menu");

    float sx = 200, sy = 100; 
    sf::RectangleShape playb(sf::Vector2f(sx, sy));
    playb.setFillColor(sf::Color(240, 240, 240));
    playb.setPosition((x - sx) / 2, (y - sy) / 2);

    while (window.isOpen()){
        sf::Event event;

        while (window.pollEvent(event)){
            if (event.type == sf::Event::Closed){
                window.close();
            }

            if (event.type == sf::Event::MouseButtonPressed && event.mouseButton.button == sf::Mouse::Left){
                sf::Vector2f mousepos(event.mouseButton.x, event.mouseButton.y);
                
                    if (playb.getGlobalBounds().contains(mousepos)){
                        window.close();
                    }
                }
            }
        window.clear();

        window.draw(playb);

       window.display();
        }
    }
}


int main(){


    return 0;
}