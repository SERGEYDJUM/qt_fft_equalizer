cmake_minimum_required(VERSION 3.5)

project(fft_equalizer VERSION 0.1 LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 REQUIRED COMPONENTS Widgets Multimedia)

qt_add_executable(fft_equalizer MANUAL_FINALIZATION main.cpp mainwindow.cpp mainwindow.h mainwindow.ui)
qt_add_library(equalizer_component equalizer_component.h equalizer_component.cpp)

target_link_libraries(equalizer_component PUBLIC Qt6::Widgets Qt6::Multimedia)
target_link_libraries(fft_equalizer PRIVATE equalizer_component)

install(TARGETS fft_equalizer BUNDLE DESTINATION . LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})

qt_finalize_executable(fft_equalizer)
