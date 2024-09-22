cmake_minimum_required(VERSION 3.16)

# Set constant variable for project binary
set(BINARY_NAME "Calculator")
set(UI_BINARY_NAME "ui_calculator")
set(CONSOLE_BINARY_NAME "console_calculator")

# Set C++ version required for this project
set(CMAKE_CXX_STANDARD 17)

# Ensures that the set standard is compulsory
set(CMAKE_CXX_STANDARD_REQUIRED ON)



########### SYSTEM ###########

message(NOTICE "${CMAKE_HOST_SYSTEM_NAME} ${CMAKE_HOST_SYSTEM_VERSION} system detected")

########### ########### ###########

project(${BINARY_NAME}
    VERSION 0.0.1
    DESCRIPTION "A simple calculator application"
    LANGUAGES CXX
)



########### IN-SOURCE BUILDS ###########

# Stops in source builds
if(${PROJECT_SOURCE_DIR} STREQUAL ${PROJECT_BINARY_DIR})
    message(FATAL_ERROR "In source builds not allowed")
endif()

# Forbids binary dir in source dir
if(${PROJECT_BINARY_DIR} STREQUAL ${CMAKE_CURRENT_SOURCE_DIR}/BUILD)
    message(FATAL_ERROR "In source build sub-directory not allowed!")
endif()

message(${CMAKE_CURRENT_BINARY_DIR})
########### END IN-SOURCE BUILDS ###########




########### EXTERNAL DEPENDECIES ########### ###########
find_package(fmt CONFIG REQUIRED)



########### CREATE TARGET(S)###########
add_executable(${CONSOLE_BINARY_NAME} console_main.cpp)



########### QT CONFIGURATION ###########
# Empty for now



########### LINK DEPENDENCIES TO TARGET ###########
target_include_directories(${CONSOLE_BINARY_NAME} PUBLIC include/)

target_link_libraries(${CONSOLE_BINARY_NAME} PRIVATE fmt::fmt)