#include <SFML/Graphics.hpp>
#include <iostream>

using namespace sf;

int main(){
    
    RenderWindow window(VideoMode(600, 500), "Contraseña");
    RectangleShape rs(Vector2f(60.f, 30.f));
    Texture t;
    t.loadFromFile("Black_Hole.png");
    rs.setTexture(&t);


    
    while (window.isOpen()){
        Event event;

        while (window.pollEvent(event)){
            if (event.type == Event::Closed)
                window.close();
        }
        window.clear();

        for (int i = 0; i <= 10; i++){
                rs.setPosition(i * 30.0, 200.);
                window.draw(rs);
        }
         window.display();

    }


    return 0;
}
