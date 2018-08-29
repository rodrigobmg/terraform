#include "tree.hpp"

#include "world.hpp"
#include "terrain.hpp"
#include <shade/obj.hpp>
#include <shade/shader_program.hpp>

#define GLM_ENABLE_EXPERIMENTAL
#include <glm/gtx/transform.hpp>

Tree::Tree(World &world, float x, float y) : Entity(world, x, y) {}

void Tree::draw()
{
  world->shad->use();
  world->mvp = glm::translate(glm::vec3(x, y, world->terrain->getZ(x, y)));
  world->mvp.update();
  world->treeObj->draw();
}
