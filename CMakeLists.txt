#[[
    Author:     Njabulo

    Dependencies: 
        fmt - fast format library

    Summary: 
        Configuration 
]]


cmake_minimum_required(VERSION 3.16)

#[[
    Set CMake message context
    
    #[ = [
        Message context must only be set on/off in top-level of
        project directory, not src directory
    ] = ]
#]]
set(CMAKE_MESSAGE_CONTEXT "ROOT")

# Binary names
set(BINARY_NAME "Calculator")
set(UI_BINARY_NAME "ui_calculator")
set(CONSOLE_BINARY_NAME "console_calculator")

# Set C++ version required for this project
set(CMAKE_CXX_STANDARD 17)
# Ensures that the set standard is compulsory
set(CMAKE_CXX_STANDARD_REQUIRED ON)

########### SYSTEM ###########
message(STATUS "${CMAKE_HOST_SYSTEM_NAME} ${CMAKE_HOST_SYSTEM_VERSION} system detected")
########### ########### ###########

########### PROJECT CONFIGURATION ###########
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

message(STATUS "Current binary directory: ${CMAKE_CURRENT_BINARY_DIR}")
########### END IN-SOURCE BUILDS ###########

add_subdirectory(lib)

########### EXTERNAL DEPENDECIES ########### 
# Removed due to configuration buid & generation time 
# find_package(fmt CONFIG REQUIRED)
########### ########### ###########

########### CREATE TARGET(S)###########
add_executable(${CONSOLE_BINARY_NAME} "main_console.cpp")
# add_executable(${UI_BINARY_NAME} ui_main.cpp)
########### ########### ###########

########### QT CONFIGURATION ###########
# Empty for now
########### ########### ###########

########### LINK DEPENDENCIES TO TARGET ###########
target_include_directories(${CONSOLE_BINARY_NAME} PUBLIC include/)

# target_link_libraries(${CONSOLE_BINARY_NAME} PRIVATE fmt::fmt)

target_link_libraries(${CONSOLE_BINARY_NAME} PUBLIC xamp_library)
########### ########### ###########
