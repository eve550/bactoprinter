// Importation bibliotheque

#include <Arduino.h>
#include <AccelStepper.h> 

// Numero des broches pour le pousse seringue A 

int xDir = 5; 
int xStep = 2; 
int enable = 8; 

// Declaration variables

int CodeIn;
AccelStepper xStepper(AccelStepper::DRIVER, xStep, xDir); 
int microstepping = 16; // pas intermédiaires

// Convertit longueur qu'on veut en nombre de pas (longueur entre deux dents = 1mm -> un tour fait avanncer d'1mm)
long longueur_to_steps(float longueur) 
{
  
  long steps = (long)(longueur * 200 * microstepping/8) ; // 8 mm = longueur pour un tour
  return steps;
}

// Debut du programme

void setup() {   
  Serial.begin(115200);
  pinMode(xDir, OUTPUT);
  pinMode(xStep, OUTPUT);
  pinMode(enable, OUTPUT);
  digitalWrite(enable, LOW);
  xStepper.setPinsInverted(false, false, true);

  xStepper.setMaxSpeed(300); // Vitesse max (a changer)
  xStepper.setAcceleration(300); // acceleration max (a changer)
}

// Fait avancer le pousse seringue : C'est une position absolue dont l' origine est la position initiale

void avancer()
{   float position = 100; // Avance de 100 mm
    long steps = longueur_to_steps(position); // Conversion
    xStepper.moveTo(steps);

}

// Fonction loop, repetee indefiniment, pour le moment que pour un pousse-seringue A

void loop() {
  if (Serial.available() > 0) { // Si il y a des donnees 
    char CodeIn = Serial.read();
    if (CodeIn == 'A') { 
      digitalWrite(enable, HIGH); // On lance le programme uniquement si la commande est A
      avancer();}

      if (CodeIn == 'S'){
        xStepper.stop();
      }
    else { 
      
      digitalWrite(enable,LOW);}} 

  xStepper.run();


}


