#include <SFML/Graphics.hpp>
#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <SFML/Audio.hpp>
#include <sstream>
#include <iomanip>
using namespace std;
using namespace sf;
RenderWindow window(VideoMode(1000, 650), "Arcade of the lost", Style::Close | Style::Resize);
void Start();
void Update();
void draw();


int main()
{
	


	Start();
	while (window.isOpen())
	{
		Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}
		Update();
		draw();
	}
	
	
	return 0;
}
void Start() {
	
}
void Update() {

}
void draw(){
	window.clear();
	

	window.display();
}