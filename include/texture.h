#pragma once
#include <string>
#include "glew.h"

// miplevels?
struct Texture
{
    std::string name;
    GLuint id;
    std::string path;
    unsigned char* pixels;
    int width;
    int height;
};

struct CubemapTexture 
{
    enum {
        right, left, top, bottom, back, front
    };
    Texture textures[6];
};

class TextureUtils
{
public:
    static unsigned char* loadImage(const char* filename, int* w, int* h, int* numChannels);
};