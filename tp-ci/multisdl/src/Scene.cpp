#include "Scene.hpp"

Scene::Scene() :
    _xmin(100),
    _xmax(300),
    _xpos(100),
    _radius(10),
    _color(255),
    _velocity(2)
{}

int Scene::xpos() const {
    return _xpos;
}

int Scene::radius() const {
    return _radius;
}

int Scene::color() const {
    return _color;
}

void Scene::update() {

    _xpos += _velocity;

    if (_xpos + _radius > _xmax) {
        _xpos = _xmax - _radius;
        _velocity = - _velocity;
    }

    if (_xpos - _radius < _xmin) {
        _xpos = _xmin + _radius;
        _velocity = - _velocity;
    }

}

void Scene::switchColor() {
    _color = _color == 0 ? 255 : 0 ;
}


