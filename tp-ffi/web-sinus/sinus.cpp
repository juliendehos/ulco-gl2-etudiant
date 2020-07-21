#include <emscripten/bind.h>
#include <cmath>

struct Color {
    uint8_t _r;
    uint8_t _g;
    uint8_t _b;
    uint8_t _a;
};

class Sinus {

    private:
        int _width;
        int _height;
        std::vector<Color> _data;

    public:
        Sinus(int width, int height) : 
            _width(width), _height(height), _data(width*height) {
        }

        emscripten::val update() { 

            for (Color & c : _data)
                c = {255, 0, 0, 255};

            size_t s = _data.size()*4;
            uint8_t * d = (uint8_t *) _data.data();
            return emscripten::val(emscripten::typed_memory_view(s, d));
        }
};

EMSCRIPTEN_BINDINGS(sinus) {
    emscripten::class_<Sinus>("Sinus")
        .constructor<int, int>()
        .function("update", &Sinus::update);
}

