# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "AssetDataBase\\AssetDataBase_autogen"
  "AssetDataBase\\CMakeFiles\\AssetDataBase_autogen.dir\\AutogenUsed.txt"
  "AssetDataBase\\CMakeFiles\\AssetDataBase_autogen.dir\\ParseCache.txt"
  "AssetDataBase\\test\\AssetmanagmentDb_test_autogen"
  "AssetDataBase\\test\\CMakeFiles\\AssetmanagmentDb_test_autogen.dir\\AutogenUsed.txt"
  "AssetDataBase\\test\\CMakeFiles\\AssetmanagmentDb_test_autogen.dir\\ParseCache.txt"
  "AssetManagement1_autogen"
  "CMakeFiles\\AssetManagement1_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\AssetManagement1_autogen.dir\\ParseCache.txt"
  "googletest\\googlemock\\CMakeFiles\\gmock_autogen.dir\\AutogenUsed.txt"
  "googletest\\googlemock\\CMakeFiles\\gmock_autogen.dir\\ParseCache.txt"
  "googletest\\googlemock\\CMakeFiles\\gmock_main_autogen.dir\\AutogenUsed.txt"
  "googletest\\googlemock\\CMakeFiles\\gmock_main_autogen.dir\\ParseCache.txt"
  "googletest\\googlemock\\gmock_autogen"
  "googletest\\googlemock\\gmock_main_autogen"
  "googletest\\googletest\\CMakeFiles\\gtest_autogen.dir\\AutogenUsed.txt"
  "googletest\\googletest\\CMakeFiles\\gtest_autogen.dir\\ParseCache.txt"
  "googletest\\googletest\\CMakeFiles\\gtest_main_autogen.dir\\AutogenUsed.txt"
  "googletest\\googletest\\CMakeFiles\\gtest_main_autogen.dir\\ParseCache.txt"
  "googletest\\googletest\\gtest_autogen"
  "googletest\\googletest\\gtest_main_autogen"
  )
endif()
