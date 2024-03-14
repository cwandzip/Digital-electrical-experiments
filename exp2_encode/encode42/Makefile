TOPNAME = encode42

VERILATOR = verilator
VERILATOR_CFLAGS += -MMD --build -cc --trace -Wall

BUILD_DIR = ./build
OBJ_DIR = $(BUILD_DIR)/obj_dir
BIN = $(BUILD_DIR)/$(TOPNAME)

$(shell mkdir -p $(BUILD_DIR))

#项目源文件
VSRCS = $(shell find $(abspath ./vsrc) -name "*.v")
CSRCS = $(shell find $(abspath ./csrc) -name "*.c" -or -name "*.cc" -or -name "*.cpp")

#verilator
CFLAGS += -DTOP_NAME="\"V$(TOPNAME)\""

all: sim

sim: $(CSRCS) $(VSRCS) $(NVBOARD_ARCHIVE)
#	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	verilator $(VERILATOR_CFLAGS) \
		-top $(TOPNAME) \
		$^ \
		$(addprefix -CFLAGS , $(CFLAGS)) \
		-Mdir $(OBJ_DIR) --exe -o $(abspath $(BIN))