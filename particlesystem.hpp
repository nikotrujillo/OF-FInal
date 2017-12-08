#pragma once
#include "ofMain.h"
#include "particle.hpp"

class particlesystem{
    
public:
    particlesystem(ofPoint);
    void update();
    void display();
    void applyForce(ofPoint);
    void addParticle();
    
    ofPoint origin;
    ofImage img[9];
    vector<particle*> particles;
    


    
};
