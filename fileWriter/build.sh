
[ -d "./build" ] && echo "build directory found..." || mkdir ./build && cd ./build && cmake .. && cd ..

cd ./build

make

cd ..

docker build -t file-writer .
