tetris:tetris.o Mino.o MinoL.o 
	g++ -o tetris tetris.o Mino.o MinoL.o

tetris.o:tetris.cpp
	g++ -c tetris.cpp

Mino.o:Mino.cpp Mino.h
	g++ -c Mino.cpp

MinoL.o:MinoL.cpp MinoL.h Mino.h
	g++ -c MinoL.cpp

