#include "first_app.hpp"

namespace app {
  
void FirstApp::run() {
  while (!appWindow.shouldClose()) {
    glfwPollEvents();
  }
};
}