
DEBUG_OP = -g3 
CPP_DEBUG_OP = 

OPTIMIZATION_OP = -O0 
CPP_OPTIMIZATION_OP = 

COMPILE_FLAGS = $(DEBUG_OP) $(OPTIMIZATION_OP) -Wall -c -fmessage-length=0

CPP_COMPILE_FLAGS = $(CPP_DEBUG_OP) $(CPP_OPTIMIZATION_OP) -std=c++11

LINK_FLAGS = 

AR_FLAGS = 

EDC_COMPILE_FLAGS = 