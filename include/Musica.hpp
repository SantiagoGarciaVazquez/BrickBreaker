#include <SFML/Audio.hpp>
#include <iostream>

void playSound() {
    sf::SoundBuffer buffer;
    sf::Sound sound;

    if (!buffer.loadFromFile("assets/Musica/Sonido.ogg")) {
        std::cout << "Failed to load sound file" << std::endl;
    }

    sound.setBuffer(buffer);
    sound.play();
}
