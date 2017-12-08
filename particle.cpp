#include "particle.hpp"

//particle::particle(ofPoint l, ofImage img_) {

particle::particle(ofPoint l, ofImage img_) {
acceleration.set(0,0);

    velocity.set(ofRandom(-1,1), ofRandom(-2,0));
    location = l;
    lifespan = 100.0;
    mass = 1;
    img = img_;

    
    drag = ofRandom(0.97, 0.998);
    force = ofPoint(0, 0);
}

void particle::update() {
    velocity += acceleration;
    location += velocity;
    acceleration *= 0;
    lifespan -= 1.0;
    position += velocity;


    
}

void particle::display() {
    img.draw(location);
}

void particle::applyForce(ofPoint force) {
    force /= mass;
    acceleration += force;
}

bool particle::isDead() {
    if (lifespan < 0.0) {
        return true;
    } else {
        return false;
    }
}






