all: icewerx_board.svg

gen_footprint: make_footprint.cpp simple_svg_1.0.0.hpp
	g++ -std=c++11 make_footprint.cpp -o gen_footprint

icewerx_pinout.csv: 

icewerx_board.svg: gen_footprint icewerx_pinout.csv
	./gen_footprint
clean:
	rm -rf gen_footprint
	rm -rf icewerx_board.svg


