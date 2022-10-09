set_languages("c++20")

set_config("buildir", "buildir")
target("hello_world")
    set_kind("binary")
    add_files("src/*.cpp", "src/*.ixx")