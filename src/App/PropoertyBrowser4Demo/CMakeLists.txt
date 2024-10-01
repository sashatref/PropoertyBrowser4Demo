set(PROJECT_NAME PropertyBrowser4Demo)

project(${PROJECT_NAME})

set(SOURCES
    main.cpp
)

add_executable(${PROJECT_NAME} ${SOURCES}
    MainWindow.h MainWindow.cpp MainWindow.ui)


target_link_libraries(${PROJECT_NAME}
    PRIVATE
        Qt5::Widgets
)

install(TARGETS ${PROJECT_NAME} DESTINATION ".")
