#include <gazebo/gazebo.hh>

namespace gazebo
{
  class Project1Plugin : public WorldPlugin
  {
    public: Project1Plugin() : WorldPlugin()
            {
              printf("Welcome to Michail’s World!\n");
            }

    public: void Load(physics::WorldPtr _world, sdf::ElementPtr _sdf)
            {
            }
  };
  GZ_REGISTER_WORLD_PLUGIN(Project1Plugin)
}
