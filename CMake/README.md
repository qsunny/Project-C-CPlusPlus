# CMake由三部分组成 #
1. Directories
2. Scripts
3. Modules

###Directorys###
ex1 [示例来源](http://www.ibm.com/developerworks/cn/linux/l-cn-cmake/ "cn-cmake") 
1. cmake 入口文件位于项目根目录的顶层的CMakeLists.txt或以.cmake为扩展名的文件

2. add_subdirectory添加子目录同时每个子目录也必须包含一个入口文件CMakeLists.txt

3. project命令，如project(hello),项目名称为hello,`cmake_minmum_required(version,3.0)` cmake要求最低的版本

4. `aux_source_directory(<dir>,<variable>)`把当前目录的源文件赋值给变量

5. `ADD_EXECUTABLE(hello ${DIR_SRCS})` 把源文件编译成一个名叫hello的可执行文件

6. 变量引用`${variable_name}`
 
7. 使用#做行注释或#[[多行注释]]

8. 条件控制`if()/elseif()/else()/endif()`

9. 循环控制 `foreach()/endforeach() and while()/endwhile()` `break()`中断循环 `continue()`继续下一个循环

10. 命令定义 `macro()/endmacro(), and function()/endfunction()`

11.`set()或unset()`设置变量或取消设置的变量    


###执行构建命令###
    cmake .
    mkae
    make test

- [CMake文档](https://subingwen.cn/cmake/CMake-primer/)
