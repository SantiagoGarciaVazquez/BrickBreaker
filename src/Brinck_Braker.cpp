#include <SFML/Graphics.hpp>
#include <iostream>
#include "unistd.h"
#include "GraphicsRunner.hpp"

using namespace sf;

int main(int numArgs, char* args[])
{
	// Esto cambia el directorio de trabajo a la ubicaci�n del ejecutable //

	// Obtener la �ltima posici�n de '/'
	std::string aux(args[0]);

	// obtenga '/' o '\\' dependiendo de Unix/mac o Windows.
	#if defined(_WIN32) || defined(WIN32)
		int pos = aux.rfind('\\');
	#else
		unsigned long pos = aux.rfind('/');
	#endif

	// Obtenga la ruta y cambie el directorio.
	chdir(aux.substr(0, pos + 1).c_str());

	// Inicialice la ventana con antialiasing y una velocidad de cuadros fija
	ContextSettings settings;
	settings.antialiasingLevel = 8;
	RenderWindow window(VideoMode(WINDOW_WIDTH, WINDOW_HEIGHT), "Brick Breaker", Style::Default, settings);
	window.setFramerateLimit(60);

	// Cree un corredor de gr�ficos para contener todos los objetos del juego y manejar el bucle de visualizaci�n de dibujo claro.
	GraphicsRunner game = GraphicsRunner(window);

	while (window.isOpen()) {
		Event event;
		while (window.pollEvent(event)) {
			game.handleEvent(event);
		}

		game.update();
	}
	
	return 0;
}