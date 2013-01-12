cmake_minimum_required(VERSION 2.8)
# プロジェクト名
PROJECT( test )
# 実行ファイル名
SET( TARGET test.out )
# ソースディレクトリ群
AUX_SOURCE_DIRECTORY( src SRC_ROOT )
SET( ALL_SRC
	${SRC_ROOT}
)
# ライブラリ群
SET( ALL_LIB
	"libpcunit.a"
)

# -Iオプション
include_directories( "/opt/Shaula/lib/PCUnit" )
# -Lオプション
link_directories( "/opt/Shaula/lib/PCUnit" )
# -Dオプション
add_definitions( -DDEBUG )

# 実行ファイル
ADD_EXECUTABLE( ${TARGET} ${ALL_SRC} )
TARGET_LINK_LIBRARIES( ${TARGET} ${ALL_LIB} )
