# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.26

# Default target executed when no arguments are given to make.
default_target: all
.PHONY : default_target

# Allow only one "make -f Makefile2" at a time, but pass parallelism.
.NOTPARALLEL:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /Applications/CMake.app/Contents/bin/cmake

# The command to remove a file.
RM = /Applications/CMake.app/Contents/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/andersonkmi/stuff/Projects/CppReview

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/andersonkmi/stuff/Projects/CppReview

#=============================================================================
# Targets provided globally by CMake.

# Special rule for the target edit_cache
edit_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake cache editor..."
	/Applications/CMake.app/Contents/bin/ccmake -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : edit_cache

# Special rule for the target edit_cache
edit_cache/fast: edit_cache
.PHONY : edit_cache/fast

# Special rule for the target rebuild_cache
rebuild_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake to regenerate build system..."
	/Applications/CMake.app/Contents/bin/cmake --regenerate-during-build -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : rebuild_cache

# Special rule for the target rebuild_cache
rebuild_cache/fast: rebuild_cache
.PHONY : rebuild_cache/fast

# The main all target
all: cmake_check_build_system
	$(CMAKE_COMMAND) -E cmake_progress_start /Users/andersonkmi/stuff/Projects/CppReview/CMakeFiles /Users/andersonkmi/stuff/Projects/CppReview//CMakeFiles/progress.marks
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 all
	$(CMAKE_COMMAND) -E cmake_progress_start /Users/andersonkmi/stuff/Projects/CppReview/CMakeFiles 0
.PHONY : all

# The main clean target
clean:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 clean
.PHONY : clean

# The main clean target
clean/fast: clean
.PHONY : clean/fast

# Prepare targets for installation.
preinstall: all
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall

# Prepare targets for installation.
preinstall/fast:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall/fast

# clear depends
depend:
	$(CMAKE_COMMAND) -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 1
.PHONY : depend

#=============================================================================
# Target rules for targets named CppReview.exe

# Build rule for target.
CppReview.exe: cmake_check_build_system
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 CppReview.exe
.PHONY : CppReview.exe

# fast build rule for target.
CppReview.exe/fast:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/CppReview.exe.dir/build.make CMakeFiles/CppReview.exe.dir/build
.PHONY : CppReview.exe/fast

BitVector.o: BitVector.cpp.o
.PHONY : BitVector.o

# target to build an object file
BitVector.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/CppReview.exe.dir/build.make CMakeFiles/CppReview.exe.dir/BitVector.cpp.o
.PHONY : BitVector.cpp.o

BitVector.i: BitVector.cpp.i
.PHONY : BitVector.i

# target to preprocess a source file
BitVector.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/CppReview.exe.dir/build.make CMakeFiles/CppReview.exe.dir/BitVector.cpp.i
.PHONY : BitVector.cpp.i

BitVector.s: BitVector.cpp.s
.PHONY : BitVector.s

# target to generate assembly for a file
BitVector.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/CppReview.exe.dir/build.make CMakeFiles/CppReview.exe.dir/BitVector.cpp.s
.PHONY : BitVector.cpp.s

Stash.o: Stash.cpp.o
.PHONY : Stash.o

# target to build an object file
Stash.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/CppReview.exe.dir/build.make CMakeFiles/CppReview.exe.dir/Stash.cpp.o
.PHONY : Stash.cpp.o

Stash.i: Stash.cpp.i
.PHONY : Stash.i

# target to preprocess a source file
Stash.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/CppReview.exe.dir/build.make CMakeFiles/CppReview.exe.dir/Stash.cpp.i
.PHONY : Stash.cpp.i

Stash.s: Stash.cpp.s
.PHONY : Stash.s

# target to generate assembly for a file
Stash.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/CppReview.exe.dir/build.make CMakeFiles/CppReview.exe.dir/Stash.cpp.s
.PHONY : Stash.cpp.s

StashMkII.o: StashMkII.cpp.o
.PHONY : StashMkII.o

# target to build an object file
StashMkII.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/CppReview.exe.dir/build.make CMakeFiles/CppReview.exe.dir/StashMkII.cpp.o
.PHONY : StashMkII.cpp.o

StashMkII.i: StashMkII.cpp.i
.PHONY : StashMkII.i

# target to preprocess a source file
StashMkII.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/CppReview.exe.dir/build.make CMakeFiles/CppReview.exe.dir/StashMkII.cpp.i
.PHONY : StashMkII.cpp.i

StashMkII.s: StashMkII.cpp.s
.PHONY : StashMkII.s

# target to generate assembly for a file
StashMkII.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/CppReview.exe.dir/build.make CMakeFiles/CppReview.exe.dir/StashMkII.cpp.s
.PHONY : StashMkII.cpp.s

StashMkIV.o: StashMkIV.cpp.o
.PHONY : StashMkIV.o

# target to build an object file
StashMkIV.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/CppReview.exe.dir/build.make CMakeFiles/CppReview.exe.dir/StashMkIV.cpp.o
.PHONY : StashMkIV.cpp.o

StashMkIV.i: StashMkIV.cpp.i
.PHONY : StashMkIV.i

# target to preprocess a source file
StashMkIV.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/CppReview.exe.dir/build.make CMakeFiles/CppReview.exe.dir/StashMkIV.cpp.i
.PHONY : StashMkIV.cpp.i

StashMkIV.s: StashMkIV.cpp.s
.PHONY : StashMkIV.s

# target to generate assembly for a file
StashMkIV.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/CppReview.exe.dir/build.make CMakeFiles/CppReview.exe.dir/StashMkIV.cpp.s
.PHONY : StashMkIV.cpp.s

StashMkV.o: StashMkV.cpp.o
.PHONY : StashMkV.o

# target to build an object file
StashMkV.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/CppReview.exe.dir/build.make CMakeFiles/CppReview.exe.dir/StashMkV.cpp.o
.PHONY : StashMkV.cpp.o

StashMkV.i: StashMkV.cpp.i
.PHONY : StashMkV.i

# target to preprocess a source file
StashMkV.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/CppReview.exe.dir/build.make CMakeFiles/CppReview.exe.dir/StashMkV.cpp.i
.PHONY : StashMkV.cpp.i

StashMkV.s: StashMkV.cpp.s
.PHONY : StashMkV.s

# target to generate assembly for a file
StashMkV.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/CppReview.exe.dir/build.make CMakeFiles/CppReview.exe.dir/StashMkV.cpp.s
.PHONY : StashMkV.cpp.s

datalog.o: datalog.cpp.o
.PHONY : datalog.o

# target to build an object file
datalog.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/CppReview.exe.dir/build.make CMakeFiles/CppReview.exe.dir/datalog.cpp.o
.PHONY : datalog.cpp.o

datalog.i: datalog.cpp.i
.PHONY : datalog.i

# target to preprocess a source file
datalog.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/CppReview.exe.dir/build.make CMakeFiles/CppReview.exe.dir/datalog.cpp.i
.PHONY : datalog.cpp.i

datalog.s: datalog.cpp.s
.PHONY : datalog.s

# target to generate assembly for a file
datalog.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/CppReview.exe.dir/build.make CMakeFiles/CppReview.exe.dir/datalog.cpp.s
.PHONY : datalog.cpp.s

main.o: main.cpp.o
.PHONY : main.o

# target to build an object file
main.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/CppReview.exe.dir/build.make CMakeFiles/CppReview.exe.dir/main.cpp.o
.PHONY : main.cpp.o

main.i: main.cpp.i
.PHONY : main.i

# target to preprocess a source file
main.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/CppReview.exe.dir/build.make CMakeFiles/CppReview.exe.dir/main.cpp.i
.PHONY : main.cpp.i

main.s: main.cpp.s
.PHONY : main.s

# target to generate assembly for a file
main.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/CppReview.exe.dir/build.make CMakeFiles/CppReview.exe.dir/main.cpp.s
.PHONY : main.cpp.s

# Help Target
help:
	@echo "The following are some of the valid targets for this Makefile:"
	@echo "... all (the default if no target is provided)"
	@echo "... clean"
	@echo "... depend"
	@echo "... edit_cache"
	@echo "... rebuild_cache"
	@echo "... CppReview.exe"
	@echo "... BitVector.o"
	@echo "... BitVector.i"
	@echo "... BitVector.s"
	@echo "... Stash.o"
	@echo "... Stash.i"
	@echo "... Stash.s"
	@echo "... StashMkII.o"
	@echo "... StashMkII.i"
	@echo "... StashMkII.s"
	@echo "... StashMkIV.o"
	@echo "... StashMkIV.i"
	@echo "... StashMkIV.s"
	@echo "... StashMkV.o"
	@echo "... StashMkV.i"
	@echo "... StashMkV.s"
	@echo "... datalog.o"
	@echo "... datalog.i"
	@echo "... datalog.s"
	@echo "... main.o"
	@echo "... main.i"
	@echo "... main.s"
.PHONY : help



#=============================================================================
# Special targets to cleanup operation of make.

# Special rule to run CMake to check the build system integrity.
# No rule that depends on this can have commands that come from listfiles
# because they might be regenerated.
cmake_check_build_system:
	$(CMAKE_COMMAND) -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 0
.PHONY : cmake_check_build_system

