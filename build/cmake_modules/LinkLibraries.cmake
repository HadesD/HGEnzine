set(LIBS_LIBRARIES
  ${CMAKE_CURRENT_SOURCE_DIR}/deps/SDL/build/.libs
  ${CMAKE_CURRENT_SOURCE_DIR}/deps/SDL/build
  )

set(LIBS_REQUIRED
  SDL2
  dl
  pthread
  )

find_library(SNDIO sndio)
if (SNDIO)
  set(LIBS_REQUIRED "${LIBS_REQUIRED} ${SNDIO}")
endif()

link_directories(${LIBS_LIBRARIES})

