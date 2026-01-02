#include <SFML/Graphics.hpp>
#include <iostream>
#include <vector>

using std::cout, std::cin, std::string, sf::Keyboard;

void window1(string title){

    sf:: RenderWindow window(sf::VideoMode(800, 600), title);
    sf::CircleShape shape(50.f);          // radio
    shape.setFillColor(sf::Color::Red);   // color
    float x = 0;
    float y = 0;
    shape.setPosition(x, y);  

    int i = 0;
    while (window.isOpen()){
        if (i == 0){
            window.clear();
        }
        i += 1;

        if (i >= 60){
            i = 1;
        }

        sf::Event event;

            if (sf::Keyboard::isKeyPressed(sf::Keyboard::A) || Keyboard::isKeyPressed(Keyboard::Left)){
                    x += 1;
         
                    shape.setPosition(x, y);
            }else if (true){
            } else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape)){
                window.close();

            }
        
        while (window.pollEvent(event)){
            if (event.type == sf::Event::Closed){
                window.close();
                cout << "closing " << title << "\n";
                
            }
        }
        window.clear();
        window.draw(shape);
        window.display();     // mostrar en pantalla
    }
}

int main() {
    
    string title;
    cin >> title;

    window1(title);
    
    return 0;
}
