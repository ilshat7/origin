cmake_minimum_required(VERSION 3.22.0)

project(Racing_Simulator)

set(SOURCE_LIB "Vehicles_Lib/vehicle.cpp" "Vehicles_Lib/vehicle.h" 
"Vehicles_Lib/ground_vehicle.cpp" "Vehicles_Lib/ground_vehicle.h" 
"Vehicles_Lib/air_vehicle.cpp" "Vehicles_Lib/air_vehicle.h" 
"Vehicles_Lib/ground_vehicle/camel.cpp" "Vehicles_Lib/ground_vehicle/camel.h" 
"Vehicles_Lib/ground_vehicle/speed_camel.cpp" "Vehicles_Lib/ground_vehicle/speed_camel.h" 
"Vehicles_Lib/ground_vehicle/centaur.cpp" "Vehicles_Lib/ground_vehicle/centaur.h" 
"Vehicles_Lib/ground_vehicle/all_terrain_boots.h" "Vehicles_Lib/ground_vehicle/all_terrain_boots.cpp" 
"Vehicles_Lib/air_vehicle/magic_carpet.cpp" "Vehicles_Lib/air_vehicle/magic_carpet.h" 
"Vehicles_Lib/air_vehicle/eagle.cpp" "Vehicles_Lib/air_vehicle/eagle.h" 
"Vehicles_Lib/air_vehicle/broom.cpp" "Vehicles_Lib/air_vehicle/broom.h")

 set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)

 add_library( Vehicles_Lib SHARED ${SOURCE_LIB} )

 add_executable(RS Source.cpp)

 target_include_directories(Vehicles_Lib PUBLIC "Vehicles_Lib/")

target_link_libraries(RS PUBLIC Vehicles_Lib)