#include "particlesystem.hpp"

particlesystem::particlesystem(ofPoint location) {
    origin = location;
    img[0].load("0.png");
    img[1].load("1.png");
    img[2].load("2.png");
    img[3].load("3.png");
    img[4].load("4.png");
    img[5].load("5.png");
    img[6].load("6.png");
    img[7].load("7.png");
    img[8].load("8.png");
    
}

void particlesystem::addParticle(){
    int n = ofRandom(9);
    particles.push_back(new particle(origin, img[n]));

}

void particlesystem::update(){
    
   
    for (int i = 0; i < particles.size(); i++){
        particles.at(i)->update();
        if(particles.at(i)->isDead()){
            particles.erase(particles.begin() + i);
        }
    }
    
}

void particlesystem::display(){
    for (auto &p : particles){
        p->display();
    }
}

void particlesystem::applyForce(ofPoint f) {
    for (auto &p : particles) {
        p->applyForce(f);
    }
}

