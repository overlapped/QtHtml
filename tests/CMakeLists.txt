find_package(QT NAMES Qt5 COMPONENTS Test REQUIRED)
find_package(Qt${QT_VERSION_MAJOR} COMPONENTS Test REQUIRED)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(tests main.cpp)
add_test(NAME tests COMMAND tests)

target_link_libraries(tests PRIVATE ${PROJECT_NAME} Qt${QT_VERSION_MAJOR}::Core)
target_include_directories(tests PUBLIC ../. ../src)
target_compile_definitions(tests PRIVATE QTHTML_LIBRARY)
target_compile_definitions(tests PUBLIC QTHTMLBS5_LIBRARY)
target_link_libraries(tests PRIVATE Qt${QT_VERSION_MAJOR}::Test QtHtml)

