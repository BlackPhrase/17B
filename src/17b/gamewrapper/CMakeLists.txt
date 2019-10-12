project(17b-gamewrapper)

#add_library(${PROJECT_NAME} MODULE)

#target_compile_definitions(${PROJECT_NAME} PRIVATE INSIDE_MANAGED_CODE)

#set_target_properties(${PROJECT_NAME} PROPERTIES
#	COMMON_LANGUAGE_RUNTIME "safe" #pure
#	OUTPUT_NAME "GameWrapper"
#)

add_custom_target(${PROJECT_NAME}
	COMMAND cl /clr /LD GameWrapper.cpp)

#csc /target:library StockMarketAPI.cs # NOTE: for C# only lib