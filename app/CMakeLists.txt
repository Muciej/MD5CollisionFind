cmake_minimum_required(VERSION 3.20)

add_executable(attack main.cu)

target_link_libraries(attack PUBLIC
    MD5Modified
    compiler_flags
)
