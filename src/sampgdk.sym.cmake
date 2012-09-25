cmake_minimum_required(VERSION 2.8)

set(sym_path "${CMAKE_SOURCE_DIR}/sampgdk.sym")
if(EXISTS ${sym_path})
	file(REMOVE ${sym_path})
endif()

file(GLOB_RECURSE files "${CMAKE_SOURCE_DIR}/*.exports")

foreach(file IN LISTS files)
	file(STRINGS ${file} exports)
	foreach(name IN LISTS exports)
		file(APPEND ${sym_path} "${name}\n")
	endforeach()
endforeach()
