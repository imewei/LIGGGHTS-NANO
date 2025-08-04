# Install script for directory: /Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Rendering/Core

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/install")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set path to fallback-tool for dependency-resolution.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/usr/bin/objdump")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "development" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/vtk-9.5/hierarchy/VTK" TYPE FILE RENAME "vtkRenderingCore-hierarchy.txt" FILES "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/built/lib/vtk-9.5/hierarchy/VTK/vtkRenderingCore-hierarchy.txt")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "runtime" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/built/lib/libvtkRenderingCore-9.5.9.5.dylib"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/built/lib/libvtkRenderingCore-9.5.1.dylib"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvtkRenderingCore-9.5.9.5.dylib"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvtkRenderingCore-9.5.1.dylib"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      execute_process(COMMAND /usr/bin/install_name_tool
        -delete_rpath "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/built/lib"
        -add_rpath "@loader_path"
        "${file}")
      if(CMAKE_INSTALL_DO_STRIP)
        execute_process(COMMAND "/usr/bin/strip" -x "${file}")
      endif()
    endif()
  endforeach()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "development" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/built/lib/libvtkRenderingCore-9.5.dylib")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "development" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "development" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/vtk-9.5" TYPE FILE FILES
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Rendering/Core/vtkGPUInfoListArray.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Rendering/Core/vtkLabeledDatatypeDefinitions.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Rendering/Core/vtkPythagoreanQuadruples.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Rendering/Core/vtkRayCastStructures.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Rendering/Core/vtkRenderingCoreEnums.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Rendering/Core/vtkStateStorage.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/built/Rendering/Core/vtkTDxConfigure.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Rendering/Core/vtkTDxMotionEventInfo.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Rendering/Core/vtkAbstractHyperTreeGridMapper.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Rendering/Core/vtkAbstractMapper.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Rendering/Core/vtkAbstractMapper3D.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Rendering/Core/vtkAbstractPicker.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Rendering/Core/vtkAbstractVolumeMapper.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Rendering/Core/vtkActor.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Rendering/Core/vtkActor2D.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Rendering/Core/vtkActor2DCollection.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Rendering/Core/vtkActorCollection.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Rendering/Core/vtkAssembly.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Rendering/Core/vtkAvatar.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Rendering/Core/vtkBackgroundColorMonitor.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Rendering/Core/vtkBillboardTextActor3D.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Rendering/Core/vtkCamera.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Rendering/Core/vtkCameraActor.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Rendering/Core/vtkCameraInterpolator.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Rendering/Core/vtkCellCenterDepthSort.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Rendering/Core/vtkCellGraphicsPrimitiveMap.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Rendering/Core/vtkCellGridMapper.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Rendering/Core/vtkCellGridRenderRequest.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Rendering/Core/vtkColorTransferFunction.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Rendering/Core/vtkCompositeCellGridMapper.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Rendering/Core/vtkCompositeDataDisplayAttributes.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Rendering/Core/vtkCompositeDataDisplayAttributesLegacy.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Rendering/Core/vtkCompositePolyDataMapper.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Rendering/Core/vtkCompositePolyDataMapperDelegator.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Rendering/Core/vtkCoordinate.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Rendering/Core/vtkCuller.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Rendering/Core/vtkCullerCollection.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Rendering/Core/vtkDataSetMapper.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Rendering/Core/vtkDiscretizableColorTransferFunction.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Rendering/Core/vtkDistanceToCamera.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Rendering/Core/vtkFXAAOptions.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Rendering/Core/vtkFlagpoleLabel.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Rendering/Core/vtkFollower.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Rendering/Core/vtkFrameBufferObjectBase.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Rendering/Core/vtkFrustumCoverageCuller.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Rendering/Core/vtkGPUInfo.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Rendering/Core/vtkGPUInfoList.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Rendering/Core/vtkGenericVertexAttributeMapping.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Rendering/Core/vtkGlyph3DMapper.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Rendering/Core/vtkGraphMapper.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Rendering/Core/vtkGraphToGlyphs.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Rendering/Core/vtkGraphicsFactory.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Rendering/Core/vtkHardwarePicker.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Rendering/Core/vtkHardwareSelector.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Rendering/Core/vtkHardwareWindow.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Rendering/Core/vtkHierarchicalPolyDataMapper.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Rendering/Core/vtkImageActor.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Rendering/Core/vtkImageMapper.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Rendering/Core/vtkImageMapper3D.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Rendering/Core/vtkImageProperty.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Rendering/Core/vtkImageSlice.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Rendering/Core/vtkImageSliceMapper.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Rendering/Core/vtkInteractorEventRecorder.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Rendering/Core/vtkInteractorObserver.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Rendering/Core/vtkLabeledContourMapper.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Rendering/Core/vtkLight.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Rendering/Core/vtkLightActor.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Rendering/Core/vtkLightCollection.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Rendering/Core/vtkLightKit.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Rendering/Core/vtkLogLookupTable.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Rendering/Core/vtkLookupTableWithEnabling.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Rendering/Core/vtkMapArrayValues.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Rendering/Core/vtkMapper.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Rendering/Core/vtkMapper2D.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Rendering/Core/vtkMapperCollection.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Rendering/Core/vtkObserverMediator.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Rendering/Core/vtkPointGaussianMapper.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Rendering/Core/vtkPolyDataMapper.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Rendering/Core/vtkPolyDataMapper2D.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Rendering/Core/vtkProp.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Rendering/Core/vtkProp3D.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Rendering/Core/vtkProp3DCollection.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Rendering/Core/vtkProp3DFollower.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Rendering/Core/vtkPropAssembly.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Rendering/Core/vtkPropCollection.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Rendering/Core/vtkProperty.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Rendering/Core/vtkProperty2D.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Rendering/Core/vtkRenderPass.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Rendering/Core/vtkRenderState.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Rendering/Core/vtkRenderTimerLog.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Rendering/Core/vtkRenderWindow.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Rendering/Core/vtkRenderWindowCollection.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Rendering/Core/vtkRenderWindowInteractor.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Rendering/Core/vtkRenderWindowInteractor3D.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Rendering/Core/vtkRenderer.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Rendering/Core/vtkRendererCollection.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Rendering/Core/vtkRendererDelegate.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Rendering/Core/vtkRendererSource.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Rendering/Core/vtkResizingWindowToImageFilter.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Rendering/Core/vtkSelectVisiblePoints.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Rendering/Core/vtkShaderProperty.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Rendering/Core/vtkSkybox.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Rendering/Core/vtkStereoCompositor.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Rendering/Core/vtkTextActor.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Rendering/Core/vtkTextActor3D.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Rendering/Core/vtkTexture.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Rendering/Core/vtkTexturedActor2D.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Rendering/Core/vtkTransformCoordinateSystems.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Rendering/Core/vtkTransformInterpolator.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Rendering/Core/vtkTupleInterpolator.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Rendering/Core/vtkUniforms.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Rendering/Core/vtkViewDependentErrorMetric.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Rendering/Core/vtkViewport.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Rendering/Core/vtkVisibilitySort.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Rendering/Core/vtkVolume.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Rendering/Core/vtkVolumeCollection.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Rendering/Core/vtkVolumeProperty.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Rendering/Core/vtkWindowLevelLookupTable.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Rendering/Core/vtkWindowToImageFilter.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Rendering/Core/vtkAssemblyNode.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Rendering/Core/vtkAssemblyPath.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Rendering/Core/vtkAssemblyPaths.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Rendering/Core/vtkAreaPicker.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Rendering/Core/vtkPicker.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Rendering/Core/vtkAbstractPropPicker.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Rendering/Core/vtkLODProp3D.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Rendering/Core/vtkPropPicker.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Rendering/Core/vtkPickingManager.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Rendering/Core/vtkWorldPointPicker.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Rendering/Core/vtkCellPicker.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Rendering/Core/vtkPointPicker.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Rendering/Core/vtkRenderedAreaPicker.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Rendering/Core/vtkScenePicker.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Rendering/Core/vtkInteractorStyle.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Rendering/Core/vtkInteractorStyle3D.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Rendering/Core/vtkInteractorStyleSwitchBase.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Rendering/Core/vtkTDxInteractorStyle.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Rendering/Core/vtkTDxInteractorStyleCamera.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Rendering/Core/vtkTDxInteractorStyleSettings.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Rendering/Core/vtkStringToImage.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Rendering/Core/vtkTextMapper.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Rendering/Core/vtkTextProperty.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Rendering/Core/vtkTextPropertyCollection.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Rendering/Core/vtkTextRenderer.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Rendering/Core/vtkAbstractInteractionDevice.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Rendering/Core/vtkAbstractRenderDevice.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Rendering/Core/vtkRenderWidget.h"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "development" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/vtk-9.5" TYPE FILE FILES
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Rendering/Core/vtkNoise200x200.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Rendering/Core/vtkCIEDE2000.h"
    "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/built/Rendering/Core/vtkRenderingCoreModule.h"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "licenses" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/licenses/VTK/vtkRenderingCore" TYPE FILE FILES "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/Rendering/Core/LICENSE")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
if(CMAKE_INSTALL_LOCAL_ONLY)
  file(WRITE "/Users/b80985/LIGGGHTS-NANO/VTK-9.5.0/built/Rendering/Core/install_local_manifest.txt"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
endif()
