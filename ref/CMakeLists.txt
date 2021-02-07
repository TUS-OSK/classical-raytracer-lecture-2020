  add_executable(ref main.cpp)
  target_compile_features(ref PRIVATE cxx_std_17)
  target_include_directories(ref PRIVATE src)

  add_executable(test-image test-image.cpp)
  target_compile_features(test-image PRIVATE cxx_std_17)
  target_include_directories(test-image PRIVATE src)

  add_executable(test-camera test-camera.cpp)
  target_compile_features(test-camera PRIVATE cxx_std_17)
  target_include_directories(test-camera PRIVATE src)

  add_executable(test-sphere test-sphere.cpp)
  target_compile_features(test-sphere PRIVATE cxx_std_17)
  target_include_directories(test-sphere PRIVATE src)