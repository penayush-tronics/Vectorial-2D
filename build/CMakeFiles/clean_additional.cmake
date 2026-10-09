# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/GUItest_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/GUItest_autogen.dir/ParseCache.txt"
  "GUItest_autogen"
  )
endif()
