target_include_directories(ebamr PUBLIC $<BUILD_INTERFACE:${CMAKE_CURRENT_LIST_DIR}>)

target_sources(ebamr
     PRIVATE
          Transport.cpp
          CHEM_advance.cpp
          LiDryer.H
          CHEM_viscous.H
)