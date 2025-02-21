project=CPP_03
directory=ex00
name=Point
sources="main.cpp ClapTrap.cpp"
includes="ClapTrap.hpp"
mkdir $project
cd $project
mkdir $directory
cd $directory
mkdir sources
cd sources
touch $sources
cd ..
mkdir includes
cd includes
touch $includes
cd ..
cp /home/goksu/Codam/CPP/Makefile .
sed -i "s/NAME\s*=\s*Fixed/NAME = $name/" /home/goksu/Codam/CPP/$project/$directory/Makefile
sed -i "s/SRC\s*=\s*main.cpp/SRC = $sources/" /home/goksu/Codam/CPP/$project/$directory/Makefile
sed -i "s/HEADERS\s*=\s*Fixed.hpp/HEADERS = $includes/" /home/goksu/Codam/CPP/$project/$directory/Makefile
