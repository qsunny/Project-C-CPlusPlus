###valgrind工具安装使用 debian系统###
     wget http://valgrind.org/downloads/valgrind-3.11.0.tar.bz2
     chmod +x valgrind-3.11.0.tar.bz2
     tar jxvf valgrind-3.11.0.tar.bz2
     cd valgrind-3.11.0	
     ./configure
     make && make install
     valgrind ./pointerEx5