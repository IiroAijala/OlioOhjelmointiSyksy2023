# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\kotitehtava6tehtava1_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\kotitehtava6tehtava1_autogen.dir\\ParseCache.txt"
  "kotitehtava6tehtava1_autogen"
  )
endif()
