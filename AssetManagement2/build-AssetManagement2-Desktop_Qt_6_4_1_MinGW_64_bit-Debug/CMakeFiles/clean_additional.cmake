# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "AssetDataBase\\AssetDataBase_autogen"
  "AssetDataBase\\CMakeFiles\\AssetDataBase_autogen.dir\\AutogenUsed.txt"
  "AssetDataBase\\CMakeFiles\\AssetDataBase_autogen.dir\\ParseCache.txt"
  "AssetManagement1_autogen"
  "CMakeFiles\\AssetManagement1_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\AssetManagement1_autogen.dir\\ParseCache.txt"
  )
endif()
