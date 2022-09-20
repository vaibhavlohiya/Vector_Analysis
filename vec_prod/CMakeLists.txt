cmake_minimum_required(VERSION "3.16.3")

project("vec_prod")

set(CMAKE_CXX_STANDARD 14)

add_executable(
    "${PROJECT_NAME}"
    "prod.cpp")
    
install(TARGETS "${PROJECT_NAME}" DESTINATION bin) # $(CMAKE_INSTALL_PREFIX)/bin
install(FILES "prod.cpp" DESTINATION src)           # $(CMAKE_INSTALL_PREFIX)/src