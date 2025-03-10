#include <iostream>
#include <vector>

class Fish
{
 std :: string name;
 int size;
 int speed;
 int growthFactor;

public:
 Fish(const std :: string& name, int size, int speed, int growthFactor = 1)//constrde initializare
 : name(name), size(size), speed(speed), growthFactor(growthFactor){}

 Fish ( const Fish& f )//const de copiere
 :name(f.name),size(f.size),speed(f.size),growthFactor(f.growthFactor){}


 //operator=
 Fish& operator=(const Fish& other) {
  if (this != &other) {  // Verificăm auto-atribuierea
   name = other.name;
   size = other.size;
   speed = other.speed;
   growthFactor = other.growthFactor;
  }
  return *this;  // Returnăm obiectul curent
 }
 void applyReward(int bonus) {
  size += bonus;
  speed += bonus / 2;
  std::cout << name << " a primit un bonus! Dimensiune: " << size << ", Viteză: " << speed << std::endl;
 }


 void display() const
 {
  std :: cout << name << " " << size << " " << speed << " " << growthFactor << std :: endl;
 }
};
class Rewards
{
 std :: string type;
 int value;
public:
 Rewards(const std :: string& type, int value = 1)
     : type(type), value(value){}
 Rewards(const Rewards& r)
     :type(r.type),value(r.value){}




};

class Aquarium
{
 std :: vector <Fish> fishies;
 std :: vector <Rewards> rewards;
};

int main()
{
 Fish nemo("Nemo",20,3,1);
 nemo.display();
 return 0;
}