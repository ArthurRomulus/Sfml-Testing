#include <SFML/Graphics.hpp>
#include <iostream>

using sf::RenderWindow;

class window{

    public:

    RenderWindow window;

    void setWindowSize(float x, float y){
        window(sf::VideoMode(x, y));
    }

    void OpenWindow(){

        while (window.isOpen()){
            
            window.display();
            sf::Event event;
            
            while (window.pollEvent(event)){
                if (event.type == sf::Event::Closed){
                    window.close();
                }
            
            
        }   
    }
}

};

int main(){

    window w;
    w.OpenWindow();


    return 0;
}
