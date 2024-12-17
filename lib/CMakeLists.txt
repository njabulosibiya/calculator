#[[
	File: xamp_library_root

	Author: Njabulo Sibiya (7539043+njabulosibiya@user.noreply.github.com)

	Description:
	CMake configuration for xamp library compiled as object file
]]
set(LIBRARY_BINARY "xamp_library")

list(APPEND CMAKE_MESSAGE_CONTEXT "${LIBRARY_BINARY}")

message(NOTICE "executing " ${LIBRARY_BINARY}) 

add_library(${LIBRARY_BINARY} OBJECT
	src/foundation.cpp
)

target_include_directories(${LIBRARY_BINARY} PRIVATE ./include/)