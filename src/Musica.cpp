#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>

class MusicPlayer {
private:
    sf::RenderWindow window;
    sf::Music music;

public:
    MusicPlayer() : window(sf::VideoMode(800, 600), "Reproductor de musica") {
        if (!music.openFromFile("./assets/Musica/Champions.ogg")) {
            throw std::runtime_error("Error al cargar el archivo de música");
        }
    }

    void playMusic() {
        music.play();
    }

    void run() {
        playMusic();

        while (window.isOpen()) {
            sf::Event event;
            while (window.pollEvent(event)) {
                if (event.type == sf::Event::Closed) {
                    window.close();
                }
            }

            window.clear();
            // Aquí puedes dibujar otros elementos en la ventana si es necesario
            window.display();

            // Cierra la ventana si la música deja de reproducirse
            if (music.getStatus() != sf::Music::Playing) {
                window.close();
            }
        }
    }
};
