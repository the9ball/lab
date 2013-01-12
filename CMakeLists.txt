cmake_minimum_required(VERSION 2.8)
# プロジェクト名
PROJECT( test )
# 実行ファイル
ADD_EXECUTABLE( test.out src/main.cpp )

# -Iオプション
include_directories( "/opt/Shaula/lib/PCUnit" )
# -Lオプション
link_directories( "/opt/Shaula/lib/PCUnit" )
# -Dオプション
add_definitions( -DDEBUG )

