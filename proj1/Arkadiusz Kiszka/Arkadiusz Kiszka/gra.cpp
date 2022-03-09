#include "gra.h"
#include "boxes.h"

#include <SFML/Graphics.hpp>
#include <iostream>
extern int wybor;
void gra::Graruszaj(int n,int m)
{
	wielkoscx = n * 6;
	wielkoscy = m * 6;


}

void gra::interfacewyswietl()
{
    wybor = 0;
    sf::RenderWindow interface(sf::VideoMode(500, 500), "Gra w zycie");
    
    std::string playerInput;
    std::string playerInput2;
    int n;
    int m;
    boxes wyb;
    sf::Text playerText;
    sf::Text playerText2;
    sf::Text SchematRakietaTekst;
    sf::Text SchematPistoletTekst;
        sf::RectangleShape interfac(sf::Vector2f(0, 0));
        sf::RectangleShape buttonX(sf::Vector2f(0, 0));
        sf::RectangleShape buttonY(sf::Vector2f(0, 0));
        sf::RectangleShape SchematRakieta(sf::Vector2f(0, 0));
        sf::RectangleShape SchematPistolet(sf::Vector2f(0, 0));
        sf::RectangleShape Tlo(sf::Vector2f(500, 500));
        int mouseX, mouseY;
        sf::Texture texture;
        sf::Text text;
        sf::Font font;
       if (!font.loadFromFile("arial.ttf"))
       {}
        text.setFont(font);
        playerText.setFont(font);
        playerText2.setFont(font);
        SchematRakietaTekst.setFont(font);
        SchematPistoletTekst.setFont(font);

        
        text.setString("Witaj w grze o zycie");
        text.setPosition(100, 30);
        text.setCharacterSize(20); 
        text.setFillColor(sf::Color::White);
        text.setStyle(sf::Text::Bold);
        texture.create(200, 200);

        sf::Sprite sprite;
      
       
        text.setPosition(200, 30);
        
       
        

            interfac.setFillColor(sf::Color(120, 0, 0));
            buttonX.setFillColor(sf::Color(12, 120, 0));
            buttonY.setFillColor(sf::Color(12, 0, 120));
            SchematRakieta.setFillColor(sf::Color(12, 0, 120));
            SchematPistolet.setFillColor(sf::Color(12, 0, 120));
            Tlo.setFillColor(sf::Color(12, 27, 20));
            interfac.setPosition(250, 250);
            buttonX.setPosition(150, 250);
            buttonY.setPosition(330, 250);
            SchematRakieta.setPosition(10,440);
            SchematPistolet.setPosition(110,440);
            interfac.setSize(sf::Vector2f(60,30));
            buttonX.setSize(sf::Vector2f(60,30));
            buttonY.setSize(sf::Vector2f(60,30));
            SchematRakieta.setSize(sf::Vector2f(60,30));
            SchematPistolet.setSize(sf::Vector2f(60,30));
            Tlo.setSize(sf::Vector2f(60,30));
           
            while (interface.isOpen())
            {
                
                if (widocz == 0)
                {
                    interface.close();
                }
                // Event processing
                sf::Event event;
                while (interface.pollEvent(event))
                {
                    if (widocz == 0)
                    {
                        interface.close();
                    }
                    if (event.type == sf::Event::MouseButtonPressed)
                    {
                        if (event.mouseButton.button == sf::Mouse::Left)
                        {

                            std::cout << "the right button was pressed" << std::endl;
                            std::cout << "mouse x: " << event.mouseButton.x << std::endl;
                            std::cout << "mouse y: " << event.mouseButton.y << std::endl;
                            

                            mouseX = event.mouseButton.x ;
                            mouseY = event.mouseButton.y ;
                            //buttonX.setPosition(150, 250); buttonY.setPosition(330, 250);
                            //interfac.setSize(sf::Vector2f(60, 30)); buttonY.setPosition(330, 250);
                            if (mouseX > 250 && mouseX < 310 && mouseY>250 && mouseY < 280)
                            {
                                widocz = 0;
                                nn=std::atoi(playerInput.c_str());
                                mm=std::atoi(playerInput2.c_str());
                            }
                            if (mouseX > 150 && mouseX < 210 && mouseY>250 && mouseY < 280)
                            {
                                if (widoky == 1)
                                {
                                    widoky = 0;
                                }
                                if(widokx==0)
                                {
                                    widokx = 1;
                                }
                                else
                                {
                                    widokx = 0;
                                }
                                
                            }
                            if (mouseX > 330 && mouseX < 390 && mouseY>250 && mouseY < 280)
                            {
                                if(widokx==1)
                                {
                                    widokx = 0;
                                }
                                if (widoky == 0)
                                {
                                    widoky = 1;
                                }
                                else
                                {
                                    widoky = 0;
                                }
                            }//buttonY.setPosition(330, 250);
                            //   SchematRakieta.setPosition(10,440);
                           // SchematPistolet.setPosition(110, 440);
                            //
                            if (mouseX > 10 && mouseX < 70 && mouseY>440 && mouseY < 470)
                            {
                                wybor = 1;
                            }
                            if (mouseX > 110 && mouseX < 170 && mouseY>440 && mouseY < 470)
                            {
                                wybor = 2;
                            }
                        }
                    }
                    if (event.type == sf::Event::TextEntered&& widokx==1)
                    {
                        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Backspace))
                        {
                            if (playerInput.length() > 0)
                            {
                                playerInput.pop_back();
                            }
                            
                        }
                        else
                        {
                            if ((int)event.text.unicode >= 48 && (int)event.text.unicode <= 58&&playerInput.length()<3)
                            {
                                playerInput += event.text.unicode;
                            }
                            
                        }
                            playerText.setString(playerInput);
                        
                    }
                    if (event.type == sf::Event::TextEntered && widoky == 1)
                    {
                        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Backspace))
                        {
                            if (playerInput2.length() > 0)
                            {
                                playerInput2.pop_back();
                            }
                            
                        }
                        else
                        {
                            if((int)event.text.unicode>=48&& (int)event.text.unicode<=58&&playerInput2.length() < 3)
                            {
                                playerInput2 += event.text.unicode;
                            }
                            
                            
                        }
                        playerText2.setString(playerInput2);
                        
                    }
                    // Request for closing the window
                    if (event.type == sf::Event::Closed)
                        interface.close();
                }
                // Activate the window for OpenGL rendering
                interface.clear();
                   

                

                   
                interface.draw(interfac);
                interface.draw(sprite);
                text.setFont(font);
                playerText.setCharacterSize(20);
                playerText2.setCharacterSize(20);
                SchematRakietaTekst.setCharacterSize(10);
                SchematPistoletTekst.setCharacterSize(10);
                
                playerText.setPosition(190, 290);
                playerText2.setPosition(350, 290);
                SchematRakietaTekst.setPosition(14, 445);
                SchematPistoletTekst.setPosition(114, 445);
                interface.draw(playerText);
                interface.draw(playerText2);
                
                text.setString("Witaj w grze o zycie");
                SchematRakietaTekst.setString("Rakieta");
                SchematPistoletTekst.setString("Pistolet");
                text.setPosition(100, 30);
                text.setCharacterSize(20);
                text.setFillColor(sf::Color::White);
                playerText.setFillColor(sf::Color::White);
                
                interface.draw(text);
                text.setString("Graj!");
                text.setCharacterSize(10);
                text.setPosition(265,260);
                interface.draw(text);
                interface.draw(buttonX);
                interface.draw(buttonY);
                interface.draw(SchematRakieta);
                interface.draw(SchematPistolet);
                interface.draw(SchematRakietaTekst);
                interface.draw(SchematPistoletTekst);
                
                interface.display();

            }
            
       
    
}






