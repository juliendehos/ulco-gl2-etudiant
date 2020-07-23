#pragma once

class Scene {
    private:
        int _xmin;
        int _xmax;
        int _xpos;
        int _radius;
        int _color;
        int _velocity;

    public:
        Scene();
        int xpos() const;
        int radius() const;
        int color() const;
        void update();
        void switchColor();
};

