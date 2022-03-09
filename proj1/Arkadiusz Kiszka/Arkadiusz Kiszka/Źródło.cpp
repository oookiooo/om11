#include <SFML/Graphics.hpp>
#include <iostream>
#include "boxes.h"
#include "gra.h"
#include <vector>
int wybor;
int main()
{

    gra gram;
    gram.interfacewyswietl();

    while (true)
    {
        if (gram.widocz == 0)
        {
            break;
        }
    }
PROPERTY_ZAODING:
    int N = gram.nn;//x n
    int M = gram.mm;//y m 
    if (N < 40) N = 40;
    if (M < 40) M = 40;
    if (wybor == 1)
    {
        N = 60;
        M = 60;
    }
    if (wybor == 2)
    {
        N = 60;
        M = 60;
    }
    int iks = 16;
    int igrek = 16;
    sf::RenderWindow window(sf::VideoMode((N * iks), (M * igrek)), "Gra w zycie");
    window.setFramerateLimit(120);
    boxes klocek;
    klocek.KolorowanieNaBialo(N, M);
    if (wybor == 1)
    {
        klocek.Schematy(N, M);
    }
    if (wybor == 2)
    {
        klocek.SchematyPistolet(N, M);
    }

    sf::RectangleShape rectangle(sf::Vector2f(0, 0));
    rectangle.setSize(sf::Vector2f(15, 15));
    rectangle.setPosition(1, 1);
    bool pressed = false;
    int mouseX, mouseY;
    bool rysuje = false;
    bool marze = false;
    while (window.isOpen())
    {
        sf::Event event;


        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::MouseButtonReleased)
            {
                if (event.mouseButton.button == sf::Mouse::Left)
                {
                    rysuje = false;
                }
                if (event.mouseButton.button == sf::Mouse::Right)
                {
                    marze = false;
                }
            }

            if (event.type == sf::Event::MouseButtonPressed)
            {
                if (event.mouseButton.button == sf::Mouse::Left)
                {

                    std::cout << "the right button was pressed" << std::endl;
                    std::cout << "mouse x: " << event.mouseButton.x << std::endl;
                    std::cout << "mouse y: " << event.mouseButton.y << std::endl;
                    pressed = true;
                    if (event.mouseButton.x >= window.getSize().x || window.getSize().y <= event.mouseButton.y)
                    {
                        rysuje = false;
                    }
                    else
                    {
                        rysuje = true;
                    }



                }
                if (event.mouseButton.button == sf::Mouse::Right)

                {
                    mouseX = event.mouseButton.x / (window.getSize().x / N);
                    mouseY = event.mouseButton.y / (window.getSize().y / M);
                    klocek.KolorowanieNaBialox2(mouseY, mouseX);
                    marze = true;
                }
            }
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
            {
                klocek.ZmianaNaKolejnePokolenie(N, M);

            }
            if (event.type == sf::Event::Closed)
                window.close();
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Enter))
            {
                window.close();
                gram.widocz = 1;
                gram.interfacewyswietl();

                goto PROPERTY_ZAODING;



            }
        }
        window.clear();
        if (rysuje)
        {

            mouseX = sf::Mouse::getPosition(window).x;
            mouseY = sf::Mouse::getPosition(window).y;
            mouseX /= (window.getSize().x / N);
            mouseY /= (window.getSize().y / M);


            if (mouseY > M || mouseX > N)
            {

            }
            else {
                klocek.KolorowanieNaczarno(mouseY, mouseX);
            }
        }
        if (marze)
        {

            mouseX = sf::Mouse::getPosition(window).x;
            mouseY = sf::Mouse::getPosition(window).y;
            mouseX /= (window.getSize().x / N);
            mouseY /= (window.getSize().y / M);
            if (mouseY > M || mouseX > N)
            {

            }
            else {
                klocek.KolorowanieNaBialox2(mouseY, mouseX);
            }
        }
        for (int j = 0; j < M; j++)
        {
            for (int i = 0; i < N; i++)
            {
                if (klocek.tablica_dynamiczna[j][i] == 0)
                {

                    rectangle.setPosition((i * 16), (j * 16));
                    window.draw(rectangle);

                }
                else if (klocek.tablica_dynamiczna[j][i] == 1)
                {
                    rectangle.setFillColor(sf::Color(0, 255, 0));
                    rectangle.setPosition((i * 16), (j * 16));
                    window.draw(rectangle);
                    rectangle.setFillColor(sf::Color(255, 255, 255));

                }

            }
        }

        window.display();
    }

    return 0;
}
