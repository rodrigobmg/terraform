#pragma once
#include "entity.hpp"

class H2OPlant: public Entity
{
public:
  H2OPlant(World &, int lifeSpan, int prodRate, float x, float y);
  ~H2OPlant();
  void draw(Rend &) override;
  static const int Matter = 100;
  int getMatter() const override;
private:
  int prodRate;
};
