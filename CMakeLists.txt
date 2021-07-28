cmake_minimum_required(VERSION 3.17.5)
project(prueba)

set(CMAKE_CXX_STANDARD 20)
find_package(SFML 2.5 COMPONENTS system window graphics)

add_executable(prueba main.cpp MenuPrincipal.cpp CuadroTexto.cpp Juego.cpp MenuDragones.cpp Dragon.cpp DragonRegenera.cpp
        DragonDesaparece.cpp DragonPoderes.cpp Jugador.cpp Computadora.cpp Batalla.cpp Estadisticas.cpp)
target_link_libraries(prueba sfml-system sfml-window sfml-graphics)
