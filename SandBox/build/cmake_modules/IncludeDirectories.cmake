set(INC_DIRS
  # include
  include

  # HGEnzine
  ${CMAKE_CURRENT_SOURCE_DIR}/../deps/SDL/build/include
  ${CMAKE_CURRENT_SOURCE_DIR}/../deps/SDL/include
  ${CMAKE_CURRENT_SOURCE_DIR}/../include
  )
include_directories(${PROJECT_NAME} PRIVATE ${INC_DIRS})

