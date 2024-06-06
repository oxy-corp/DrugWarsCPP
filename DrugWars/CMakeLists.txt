# CMakeList.txt : CMake project for DrugWars, include source and define
# project specific logic here.
#

# Add source to this project's executable.
add_executable (DrugWars "DrugWars.cpp" "DrugWars.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET DrugWars PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
