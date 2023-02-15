#include "TextureLoader.h"

sf::Texture TextureLoader::textureFromFile(const char* filename) {
    std::ifstream texture_file{ filename, std::ifstream::binary };
    std::vector<char> buffer;
    if (texture_file) {
        // get length of file:
        texture_file.seekg(0, texture_file.end);
        const auto length = texture_file.tellg();
        if (!length) {
            std::cerr << "Cannot load zero byte texture file" << std::endl;
        }
        buffer.resize(length); // reserve space

        texture_file.seekg(0, texture_file.beg);

        auto start = &*buffer.begin();
        texture_file.read(start, length);
        texture_file.close();
    }
    else {
        std::cerr << "Could not open texture file" << std::endl;
    }

    sf::Texture texture;
    if (!texture.loadFromMemory(&buffer[0], buffer.size())) {
        std::cerr << "Texture load failed" << std::endl;
    }
    return texture;
}