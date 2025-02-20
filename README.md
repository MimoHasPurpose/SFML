## Notes and observations: library version: 2.6.0
The library was installed from ```sudo-apt``` and we used a old version.
#### Search which sfml version available:

```apt-cache search sfml```

#### Running a sfml project:
- Compiling:
```
g++ main.cpp -o sfml-app -lsfml-graphics -lsfml-window -lsfml-system -lsfml-audio 
```
-Executing file:
```
./sfml-app
```
#### Remove sfml:
``` sudo apt-get remove libsfm-dev```

#### Installing SFML from github:
```git clone https://github.com/SFML/SFML.git```
``` mkdir build```
```cd build```
```cmake ..```
#### errors might popup of missing error dependencies.
```apt cache-search <missing-library> | grep lib```
```sudo apt-get install libx11-dev```

**_NOTE:_** if errors like cant find this file, then search for the file and download it.

```cmake --help ```
```make -j 8```
``` ls lib/```
``` g++ -std=c++17  main.cpp -o sfml-app -I/home/mimi-mimo/Desktop/coding/SFML/include```
``` g++ -std=c++17  main.cpp -o sfml-app -I/home/mimi-mimo/Desktop/coding/SFML/include -L./lib```
```dpkg -l | grep sfml```
``` g++ main.cpp -o main -L/usr/local/lib -lsfml-graphics -lsfml-window -lsfml-system```
``` g++   main.cpp -o sfml-app -I/home/mimi-mimo/Desktop/coding/SFML/include -L./lib -lsfml-graphics -lsfml-window -lsfml-system```

```ldd ./main | ldd main```
```ldconfig```