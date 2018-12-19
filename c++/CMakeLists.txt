cmake_minimum_required(VERSION 3.5.1)   # cmake --version
project(miaozitest VERSION 0.1.0)
set(CMAKE_CXX_STANDARD 11)

#file(MAKE_DIRECTORY buildme)
#set(CMAKE_RUNTIME_OUTPUT_DIRECTORY buildme)

file(GLOB_RECURSE SRC_LIST "*.cpp")
foreach(src ${SRC_LIST})
        #message(${src})
endforeach(src ${SRC_LIST})

foreach(src ${SRC_LIST})
        if(src MATCHES ".*codes.*")          
                string(REGEX REPLACE "/(.*)/(.*).cpp" "\\1" tmpname1 ${src})      # REPLACE通过解析反斜杠来找到要替换的字符串
                string(REGEX REPLACE "(.*)/(.*)/(.*).cpp" "\\3" tmpname2 ${src})
                string(CONCAT srcname /${tmpname1}/${tmpname2}.cpp)        # CONCAT可以将若干个输入组合
                #message(${srcname})
                string(REGEX REPLACE "(.*)/(.*)/(.*).cpp" "\\2" dirname ${src})
                string(REGEX REPLACE "[ ]" "-" projname ${tmpname2})   # 正则表达式替换字符后将结果存在变量中
                set(CMAKE_RUNTIME_OUTPUT_DIRECTORY bin/${dirname})
                #message(${CMAKE_RUNTIME_OUTPUT_DIRECTORY})
                #message(${projname}) 
                add_executable(${projname} ${srcname})
        endif(src MATCHES ".*codes.*")
endforeach(src ${SRC_LIST})