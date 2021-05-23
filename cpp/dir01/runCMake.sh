#! /bin/bash
cd build
if [ ! -f basic ]
then
	cmake -S ../ -B ./
	make
fi
./basic $@

read -p "Clean build dir press y(yes): " Y
if [ $Y == "y" -o $Y == "yes" ]
then
	echo "build dir is cleaned"
	rm -rf *
fi
