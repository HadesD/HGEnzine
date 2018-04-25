set(LIBS_LIBRARIES
  )

set(LIBS_REQUIRED
  SDL2
  )

find_library(SNDIO sndio)
if (SNDIO)
  set(LIBS_REQUIRED "${LIBS_REQUIRED} ${SNDIO}")
endif()

link_directories(${LIBS_LIBRARIES})

