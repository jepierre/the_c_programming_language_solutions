cmake_minimum_required(VERSION 2.8)
project( Chapter1Asnwers )
file(GLOB APP_SOURCES RELATIVE "${CMAKE_CURRENT_SOURCE_DIR}" 	"${CMAKE_CURRENT_SOURCE_DIR}/*.c")
MESSAGE(${APP_SOURCES})
foreach( testsourcefile ${APP_SOURCES})
	string( REPLACE ".c" "" testname ${testsourcefile})
	MESSAGE( ${testname})
	MESSAGE( ${testsourcefile})
	add_executable( ${testname} ${testsourcefile})
endforeach( testsourcefile ${APP_SOURCES})




