set(INC_DIRS
  # include
  include

  # SDL
  deps/SDL/build/include
  deps/SDL/include
  )
include_directories(${PROJECT_NAME} PRIVATE ${INC_DIRS})

