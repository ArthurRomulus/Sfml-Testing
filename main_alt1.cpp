#include <SFML/Graphics.hpp>
#include <iostream>

using namespace sf;

int main(){
    
    RenderWindow window(VideoMode(600, 500), "Contraseña");
    RectangleShape rs(Vector2f(60.f, 30.f));
    Texture t;
    t.loadFromFile("Black_Hole.png");
    rs.setTexture(&t);

    RectangleShape lego[1] = {rs};


    while (window.isOpen()){
        Event event;

        while (window.pollEvent(event)){
            if (event.type == Event::Closed)
                window.close();
            if (event.type == Event::MouseButtonPressed && event.mouseButton.button == Mouse::Left){
                while (true)
                {
                    rs.setPosition(Mouse::getPosition(window).x, Mouse::getPosition(window).y);
                }
            }
        }
                window.clear();
                window.draw(lego[1]);
            

        window.display();
    }
    return 0;
}
