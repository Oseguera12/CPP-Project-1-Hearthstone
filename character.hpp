class character
{
private:
  std::string name;
  int health;
  int attack;
  int speed;
  int armor;
  double criticalRate;
  double criticalMultiplier;
public:
  character();
public:
  std::string getName();
  int getHealth();
  int getAttack();
  int getSpeed();
  int getArmor();
  double getCriticalRate();
  double getCriticalMultiplier();
}

#endif
