#include <SFML/Graphics.hpp>
#include <iostream>
#include <vector>

using std::cout, std::cin, std::string, sf::Keyboard;




void window1(string title){
    float x = 800, y = 600, r = 50.0;
    
    sf:: RenderWindow window(sf::VideoMode(x, y), title);
    sf::CircleShape shape(r);         
    shape.setFillColor(sf::Color::Red);   
    float xs = 0;
    float ys = 0;
    shape.setPosition(xs, ys);  

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
                        if (xs >= 0){
                            xs -= 1;
                            shape.setPosition(xs, ys);
                        }
                    } if (sf::Keyboard::isKeyPressed(sf::Keyboard::D) || Keyboard::isKeyPressed(Keyboard::Right)){
                        if (xs < (x - (r * 2))){
                            xs += 1;
                            shape.setPosition(xs, ys);
                        }
                    } if (Keyboard::isKeyPressed(Keyboard::W) || Keyboard::isKeyPressed(Keyboard::Up)) {
                        if (ys >= 0){
                            ys -= 1;
                            shape.setPosition(xs, ys);
                        }

                    } if (Keyboard::isKeyPressed(Keyboard::S) || Keyboard::isKeyPressed(Keyboard::Down)) {
                        if (ys <  (y - (r * 2))){
                            ys += 1;
                            shape.setPosition(xs, ys);
                        }

                    } if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape)){
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
            window.display();     
        }
    
}

int main() {
    
    string title = "my first cpp videogame";

    window1(title);
    
    return 0;
}
