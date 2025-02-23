## Notes and observations: library version: 2.6.0
The library was installed from ```sudo-apt``` and we used a old version.
#### Search which sfml version available:

- ```apt-cache search sfml```

#### Running a sfml project:


- ```g++ main.cpp -o sfml-app -lsfml-graphics -lsfml-window -lsfml-system -lsfml-audio ```
- Executing file:
    - ```./sfml-app```
#### Remove sfml:

- ``` sudo apt-get remove libsfm-dev```

#### Installation:
- from github
    - ```git clone https://github.com/SFML/SFML.git```
    - ```mkdir build```
    - ```cd build```
    - ```cmake ..```
#### Errors
- missing dependencies error:
    - ```apt cache-search <missing-library> | grep lib```
    - ```sudo apt-get install libx11-dev```

---

**_NOTE:_** if errors like 'cant find this file', then search for the file and download it:
- Basic cmake commands:
    - ```cmake --help ```
    - ```make -j 8```
    - ```ls lib/```
- Running cpp code with cpp17:
    - ```g++ -std=c++17  main.cpp -o sfml-app -I/home/mimi-mimo/Desktop/coding/SFML/include```
    - ```g++ -std=c++17  main.cpp -o sfml-app -I/home/mimi-mimo/Desktop/coding/SFML/include -L./lib```
     - ```g++ main.cpp -o main -L/usr/local/lib -lsfml-graphics -lsfml-window -lsfml-system```
    - ```g++   main.cpp -o sfml-app -I/home/mimi-mimo/Desktop/coding/SFML/include -L./lib -lsfml-graphics -lsfml-window -lsfml-system```

- Searching a package:
    - ```dpkg -l | grep sfml```

- Config commands:
    - ```ldd ./main | ldd main```
        - print shared object dependencies
    - ```ldconfig```
        -  creates the necessary links and cache to the most recent shared libraries found in the directories specified on the command line, in the file /etc/ld.so.conf, and in the trusted directories,
       /lib and /usr/lib.       

---

- OpenGl installed using glad
    - use ```local```

- Installing opengl
    - ```sudo apt-get install freeglut3-dev```


- Static public member functions
    - functions that can be called everywhere.