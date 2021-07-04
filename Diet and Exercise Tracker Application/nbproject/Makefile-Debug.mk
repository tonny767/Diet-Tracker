#
# Generated Makefile - do not edit!
#
# Edit the Makefile in the project folder instead (../Makefile). Each target
# has a -pre and a -post target defined where you can add customized code.
#
# This makefile implements configuration specific macros and targets.


# Environment
MKDIR=mkdir
CP=cp
GREP=grep
NM=nm
CCADMIN=CCadmin
RANLIB=ranlib
CC=gcc
CCC=g++
CXX=g++
FC=gfortran
AS=as

# Macros
CND_PLATFORM=MinGW-Windows
CND_DLIB_EXT=dll
CND_CONF=Debug
CND_DISTDIR=dist
CND_BUILDDIR=build

# Include project Makefile
include Makefile

# Object Directory
OBJECTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/DietTracking.o \
	${OBJECTDIR}/Exercise.o \
	${OBJECTDIR}/ExerciseTracking.o \
	${OBJECTDIR}/FoodNutrition.o \
	${OBJECTDIR}/FoodNutritionManagement.o \
	${OBJECTDIR}/Freestyle.o \
	${OBJECTDIR}/Meal.o \
	${OBJECTDIR}/Running.o \
	${OBJECTDIR}/UserProfile.o \
	${OBJECTDIR}/UserProfileManagement.o \
	${OBJECTDIR}/Walking.o \
	${OBJECTDIR}/main.o

# Test Directory
TESTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}/tests

# Test Files
TESTFILES= \
	${TESTDIR}/TestFiles/f1

# Test Object Files
TESTOBJECTFILES= \
	${TESTDIR}/MealTest.o \
	${TESTDIR}/UserProfileManagementTest.o \
	${TESTDIR}/tests/ExerciseTrackingTest.o \
	${TESTDIR}/tests/newtestclass.o \
	${TESTDIR}/tests/newtestrunner.o

# C Compiler Flags
CFLAGS=

# CC Compiler Flags
CCFLAGS=
CXXFLAGS=

# Fortran Compiler Flags
FFLAGS=

# Assembler Flags
ASFLAGS=

# Link Libraries and Options
LDLIBSOPTIONS=

# Build Targets
.build-conf: ${BUILD_SUBPROJECTS}
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/ct2.exe

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/ct2.exe: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.cc} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/ct2 ${OBJECTFILES} ${LDLIBSOPTIONS}

${OBJECTDIR}/DietTracking.o: DietTracking.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/DietTracking.o DietTracking.cpp

${OBJECTDIR}/Exercise.o: Exercise.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Exercise.o Exercise.cpp

${OBJECTDIR}/ExerciseTracking.o: ExerciseTracking.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/ExerciseTracking.o ExerciseTracking.cpp

${OBJECTDIR}/FoodNutrition.o: FoodNutrition.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/FoodNutrition.o FoodNutrition.cpp

${OBJECTDIR}/FoodNutritionManagement.o: FoodNutritionManagement.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/FoodNutritionManagement.o FoodNutritionManagement.cpp

${OBJECTDIR}/Freestyle.o: Freestyle.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Freestyle.o Freestyle.cpp

${OBJECTDIR}/Meal.o: Meal.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Meal.o Meal.cpp

${OBJECTDIR}/Running.o: Running.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Running.o Running.cpp

${OBJECTDIR}/UserProfile.o: UserProfile.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/UserProfile.o UserProfile.cpp

${OBJECTDIR}/UserProfileManagement.o: UserProfileManagement.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/UserProfileManagement.o UserProfileManagement.cpp

${OBJECTDIR}/Walking.o: Walking.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Walking.o Walking.cpp

${OBJECTDIR}/main.o: main.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/main.o main.cpp

# Subprojects
.build-subprojects:

# Build Test Targets
.build-tests-conf: .build-tests-subprojects .build-conf ${TESTFILES}
.build-tests-subprojects:

${TESTDIR}/TestFiles/f1: ${TESTDIR}/tests/ExerciseTrackingTest.o ${TESTDIR}/MealTest.o ${TESTDIR}/UserProfileManagementTest.o ${TESTDIR}/tests/newtestclass.o ${TESTDIR}/tests/newtestrunner.o ${OBJECTFILES:%.o=%_nomain.o}
	${MKDIR} -p ${TESTDIR}/TestFiles
	${LINK.cc}   -o ${TESTDIR}/TestFiles/f1 $^ ${LDLIBSOPTIONS} `cppunit-config --libs`   


${TESTDIR}/tests/ExerciseTrackingTest.o: tests/ExerciseTrackingTest.cpp 
	${MKDIR} -p ${TESTDIR}/tests
	${RM} "$@.d"
	$(COMPILE.cc) -g `cppunit-config --cflags` -MMD -MP -MF "$@.d" -o ${TESTDIR}/tests/ExerciseTrackingTest.o tests/ExerciseTrackingTest.cpp


${TESTDIR}/MealTest.o: MealTest.cpp 
	${MKDIR} -p ${TESTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g `cppunit-config --cflags` -MMD -MP -MF "$@.d" -o ${TESTDIR}/MealTest.o MealTest.cpp


${TESTDIR}/UserProfileManagementTest.o: UserProfileManagementTest.cpp 
	${MKDIR} -p ${TESTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g `cppunit-config --cflags` -MMD -MP -MF "$@.d" -o ${TESTDIR}/UserProfileManagementTest.o UserProfileManagementTest.cpp


${TESTDIR}/tests/newtestclass.o: tests/newtestclass.cpp 
	${MKDIR} -p ${TESTDIR}/tests
	${RM} "$@.d"
	$(COMPILE.cc) -g `cppunit-config --cflags` -MMD -MP -MF "$@.d" -o ${TESTDIR}/tests/newtestclass.o tests/newtestclass.cpp


${TESTDIR}/tests/newtestrunner.o: tests/newtestrunner.cpp 
	${MKDIR} -p ${TESTDIR}/tests
	${RM} "$@.d"
	$(COMPILE.cc) -g `cppunit-config --cflags` -MMD -MP -MF "$@.d" -o ${TESTDIR}/tests/newtestrunner.o tests/newtestrunner.cpp


${OBJECTDIR}/DietTracking_nomain.o: ${OBJECTDIR}/DietTracking.o DietTracking.cpp 
	${MKDIR} -p ${OBJECTDIR}
	@NMOUTPUT=`${NM} ${OBJECTDIR}/DietTracking.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -g -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/DietTracking_nomain.o DietTracking.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/DietTracking.o ${OBJECTDIR}/DietTracking_nomain.o;\
	fi

${OBJECTDIR}/Exercise_nomain.o: ${OBJECTDIR}/Exercise.o Exercise.cpp 
	${MKDIR} -p ${OBJECTDIR}
	@NMOUTPUT=`${NM} ${OBJECTDIR}/Exercise.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -g -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Exercise_nomain.o Exercise.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/Exercise.o ${OBJECTDIR}/Exercise_nomain.o;\
	fi

${OBJECTDIR}/ExerciseTracking_nomain.o: ${OBJECTDIR}/ExerciseTracking.o ExerciseTracking.cpp 
	${MKDIR} -p ${OBJECTDIR}
	@NMOUTPUT=`${NM} ${OBJECTDIR}/ExerciseTracking.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -g -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/ExerciseTracking_nomain.o ExerciseTracking.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/ExerciseTracking.o ${OBJECTDIR}/ExerciseTracking_nomain.o;\
	fi

${OBJECTDIR}/FoodNutrition_nomain.o: ${OBJECTDIR}/FoodNutrition.o FoodNutrition.cpp 
	${MKDIR} -p ${OBJECTDIR}
	@NMOUTPUT=`${NM} ${OBJECTDIR}/FoodNutrition.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -g -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/FoodNutrition_nomain.o FoodNutrition.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/FoodNutrition.o ${OBJECTDIR}/FoodNutrition_nomain.o;\
	fi

${OBJECTDIR}/FoodNutritionManagement_nomain.o: ${OBJECTDIR}/FoodNutritionManagement.o FoodNutritionManagement.cpp 
	${MKDIR} -p ${OBJECTDIR}
	@NMOUTPUT=`${NM} ${OBJECTDIR}/FoodNutritionManagement.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -g -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/FoodNutritionManagement_nomain.o FoodNutritionManagement.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/FoodNutritionManagement.o ${OBJECTDIR}/FoodNutritionManagement_nomain.o;\
	fi

${OBJECTDIR}/Freestyle_nomain.o: ${OBJECTDIR}/Freestyle.o Freestyle.cpp 
	${MKDIR} -p ${OBJECTDIR}
	@NMOUTPUT=`${NM} ${OBJECTDIR}/Freestyle.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -g -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Freestyle_nomain.o Freestyle.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/Freestyle.o ${OBJECTDIR}/Freestyle_nomain.o;\
	fi

${OBJECTDIR}/Meal_nomain.o: ${OBJECTDIR}/Meal.o Meal.cpp 
	${MKDIR} -p ${OBJECTDIR}
	@NMOUTPUT=`${NM} ${OBJECTDIR}/Meal.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -g -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Meal_nomain.o Meal.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/Meal.o ${OBJECTDIR}/Meal_nomain.o;\
	fi

${OBJECTDIR}/Running_nomain.o: ${OBJECTDIR}/Running.o Running.cpp 
	${MKDIR} -p ${OBJECTDIR}
	@NMOUTPUT=`${NM} ${OBJECTDIR}/Running.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -g -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Running_nomain.o Running.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/Running.o ${OBJECTDIR}/Running_nomain.o;\
	fi

${OBJECTDIR}/UserProfile_nomain.o: ${OBJECTDIR}/UserProfile.o UserProfile.cpp 
	${MKDIR} -p ${OBJECTDIR}
	@NMOUTPUT=`${NM} ${OBJECTDIR}/UserProfile.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -g -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/UserProfile_nomain.o UserProfile.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/UserProfile.o ${OBJECTDIR}/UserProfile_nomain.o;\
	fi

${OBJECTDIR}/UserProfileManagement_nomain.o: ${OBJECTDIR}/UserProfileManagement.o UserProfileManagement.cpp 
	${MKDIR} -p ${OBJECTDIR}
	@NMOUTPUT=`${NM} ${OBJECTDIR}/UserProfileManagement.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -g -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/UserProfileManagement_nomain.o UserProfileManagement.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/UserProfileManagement.o ${OBJECTDIR}/UserProfileManagement_nomain.o;\
	fi

${OBJECTDIR}/Walking_nomain.o: ${OBJECTDIR}/Walking.o Walking.cpp 
	${MKDIR} -p ${OBJECTDIR}
	@NMOUTPUT=`${NM} ${OBJECTDIR}/Walking.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -g -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Walking_nomain.o Walking.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/Walking.o ${OBJECTDIR}/Walking_nomain.o;\
	fi

${OBJECTDIR}/main_nomain.o: ${OBJECTDIR}/main.o main.cpp 
	${MKDIR} -p ${OBJECTDIR}
	@NMOUTPUT=`${NM} ${OBJECTDIR}/main.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -g -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/main_nomain.o main.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/main.o ${OBJECTDIR}/main_nomain.o;\
	fi

# Run Test Targets
.test-conf:
	@if [ "${TEST}" = "" ]; \
	then  \
	    ${TESTDIR}/TestFiles/f1 || true; \
	else  \
	    ./${TEST} || true; \
	fi

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}
	${RM} ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/ct2.exe

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
