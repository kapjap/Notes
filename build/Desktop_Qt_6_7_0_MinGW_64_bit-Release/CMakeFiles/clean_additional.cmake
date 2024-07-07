# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Release")
  file(REMOVE_RECURSE
  "CMakeFiles\\untitled8_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\untitled8_autogen.dir\\ParseCache.txt"
  "untitled8_autogen"
  )
endif()
