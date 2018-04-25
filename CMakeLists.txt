cmake_minimum_required(VERSION 2.8)

project("HGEnzine")

# Load Modules {
set(CMAKE_MODULE_PATH "${CMAKE_CURRENT_SOURCE_DIR}/build/cmake_modules")
include(IncludeDirectories)
include(SourceFiles)
include(CompilerConfig)
include(BuildConfig)
include(LinkLibraries)
# }

add_library(${PROJECT_NAME} ${SRC_FILES})
target_link_libraries(${PROJECT_NAME} ${LIBS_REQUIRED})

# PostBuild {
include(PostBuild)
# }

