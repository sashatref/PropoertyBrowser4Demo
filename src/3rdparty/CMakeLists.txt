list(APPEND CMAKE_MODULE_PATH
    ${CMAKE_CURRENT_SOURCE_DIR}/cmake_modules
)

include(commonTools)

add_subdirectory(HelperLibrary)
add_subdirectory(PropertyBrowser4)
add_subdirectory(CustomStylePlugin)
