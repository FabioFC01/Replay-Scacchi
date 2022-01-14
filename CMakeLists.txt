cmake_minimum_required(VERSION 3.2 FATAL_ERROR)

project(Scacchi_Replay)




add_library (	Exception
	Exception.h
	Exception.cpp
)



add_library (	Replay
	Replay.h
	Replay.cpp	

)


add_executable(ScacchiReplay
	Scacchi_Replay.cpp
	
)

target_link_libraries(ScacchiReplay

Exception
Replay

)







