package topo

/*
#cgo CFLAGS: -I ./
#cgo linux CXXFLAGS: -I ./external/libboost/boost_1_67_0   -I ./   -I ./external/oce/inc -I ./external/oce/src/Standard -I ./external/oce/src/gp -I ./external/oce/src/Precision -I ./external/oce/src/TCollection -I ./external/oce/src/TopoDS -I ./external/oce/src/TopLoc -I ./external/oce/src/GeomAdaptor -I ./external/oce/src/Geom2dAdaptor -I ./external/oce/src/BRepAdaptor -I ./external/oce/src/ShapeFix -I ./external/oce/src/ShapeAnalysis -I ./external/oce/src/ShapeBuild -I ./external/oce/src/ShapeExtend -I ./external/oce/src/ShapeConstruct -I ./external/oce/src/ShapeUpgrade -I ./external/oce/src/ShapeAlgo -I ./external/oce/src/ShapeProcess -I ./external/oce/src/ShapeProcessAPI -I ./external/oce/src/BRepGProp -I ./external/oce/src/BRepMesh -I ./external/oce/src/Bnd -I ./external/oce/src/Adaptor2d -I ./external/oce/src/Adaptor3d -I ./external/oce/src/BOPAlgo -I ./external/oce/src/BOPDS -I ./external/oce/src/BRep -I ./external/oce/src/BRepApprox -I ./external/oce/src/BRepBlend -I ./external/oce/src/BRepBuilderAPI -I ./external/oce/src/BRepCheck -I ./external/oce/src/NCollection -I ./external/oce/src/TopTools -I ./external/oce/src/GCPnts -I ./external/oce/src/Poly -I ./external/oce/src/BRepFilletAPI -I ./external/oce/src/TopExp -I ./external/oce/src/BOPCol -I ./external/oce/src/BRepSweep -I ./external/oce/src/Sweep -I ./external/oce/src/ChFi2d -I ./external/oce/src/BRepTools -I ./external/oce/src/IntPatch -I ./external/oce/src/GeomInt -I ./external/oce/src/IntSurf -I ./external/oce/src/GeomAPI -I ./external/oce/src/Extrema -I ./external/oce/src/math -I ./external/oce/src/CPnts -I ./external/oce/src/BRepPrim -I ./external/oce/src/GC -I ./external/oce/src/ChFiDS -I ./external/oce/src/ElCLib -I ./external/oce/src/gce -I ./external/oce/src/Interface -I ./external/oce/src/MoniTool -I ./external/oce/src/TDF -I ./external/oce/src/Message -I ./external/oce/src/Plate -I ./external/oce/src/GCE2d -I ./external/oce/src/BRepFeat -I ./external/oce/src/GeomConvert -I ./external/oce/src/LocOpe -I ./external/oce/src/TDocStd -I ./external/oce/src/CDF -I ./external/oce/src/TNaming -I ./external/oce/src/IGESControl -I ./external/oce/src/XCAFPrs -I ./external/oce/src/XCAFDoc -I ./external/oce/src/XCAFDrivers -I ./external/oce/src/XCAFSchema -I ./external/oce/src/XmlXCAFDrivers -I ./external/oce/src/STEPCAFControl -I ./external/ifc/src -I ./external/ifc/src/ifcgeom -I ./external/ifc/src/ifcparse -I ./external/ifc/src/ifcgeom_schema_agnostic
#cgo darwin CXXFLAGS: -I ./external/libboost/boost_1_67_0  -I ./  -I ./external/oce/inc -I ./external/oce/src/Standard -I ./external/oce/src/gp -I ./external/oce/src/Precision -I ./external/oce/src/TCollection -I ./external/oce/src/TopoDS -I ./external/oce/src/TopLoc -I ./external/oce/src/GeomAdaptor -I ./external/oce/src/Geom2dAdaptor -I ./external/oce/src/BRepAdaptor -I ./external/oce/src/ShapeFix -I ./external/oce/src/ShapeAnalysis -I ./external/oce/src/ShapeBuild -I ./external/oce/src/ShapeExtend -I ./external/oce/src/ShapeConstruct -I ./external/oce/src/ShapeUpgrade -I ./external/oce/src/ShapeAlgo -I ./external/oce/src/ShapeProcess -I ./external/oce/src/ShapeProcessAPI -I ./external/oce/src/BRepGProp -I ./external/oce/src/BRepMesh -I ./external/oce/src/Bnd -I ./external/oce/src/Adaptor2d -I ./external/oce/src/Adaptor3d -I ./external/oce/src/BOPAlgo -I ./external/oce/src/BOPDS -I ./external/oce/src/BRep -I ./external/oce/src/BRepApprox -I ./external/oce/src/BRepBlend -I ./external/oce/src/BRepBuilderAPI -I ./external/oce/src/BRepCheck -I ./external/oce/src/NCollection -I ./external/oce/src/TopTools -I ./external/oce/src/GCPnts -I ./external/oce/src/Poly -I ./external/oce/src/BRepFilletAPI -I ./external/oce/src/TopExp -I ./external/oce/src/BOPCol -I ./external/oce/src/BRepSweep -I ./external/oce/src/Sweep -I ./external/oce/src/ChFi2d -I ./external/oce/src/BRepTools -I ./external/oce/src/IntPatch -I ./external/oce/src/GeomInt -I ./external/oce/src/IntSurf -I ./external/oce/src/GeomAPI -I ./external/oce/src/Extrema -I ./external/oce/src/math -I ./external/oce/src/CPnts -I ./external/oce/src/BRepPrim -I ./external/oce/src/GC -I ./external/oce/src/ChFiDS -I ./external/oce/src/ElCLib -I ./external/oce/src/gce -I ./external/oce/src/Interface -I ./external/oce/src/MoniTool -I ./external/oce/src/TDF -I ./external/oce/src/Message -I ./external/oce/src/Plate -I ./external/oce/src/GCE2d -I ./external/oce/src/BRepFeat -I ./external/oce/src/GeomConvert -I ./external/oce/src/LocOpe -I ./external/oce/src/TDocStd -I ./external/oce/src/CDF -I ./external/oce/src/TNaming -I ./external/oce/src/IGESControl -I ./external/oce/src/XCAFPrs -I ./external/oce/src/XCAFDoc -I ./external/oce/src/XCAFDrivers -I ./external/oce/src/XCAFSchema -I ./external/oce/src/XmlXCAFDrivers -I ./external/oce/src/STEPCAFControl -I ./external/ifc/src -I ./external/ifc/src/ifcgeom -I ./external/ifc/src/ifcparse -I ./external/ifc/src/ifcgeom_schema_agnostic -std=gnu++14
#cgo windows CXXFLAGS:-I ./external/libboost/boost_1_67_0  -I ./   -I ./external/oce/inc -I ./external/oce/src/Standard -I ./external/oce/src/gp -I ./external/oce/src/Precision -I ./external/oce/src/TCollection -I ./external/oce/src/TopoDS -I ./external/oce/src/TopLoc -I ./external/oce/src/GeomAdaptor -I ./external/oce/src/Geom2dAdaptor -I ./external/oce/src/BRepAdaptor -I ./external/oce/src/ShapeFix -I ./external/oce/src/ShapeAnalysis -I ./external/oce/src/ShapeBuild -I ./external/oce/src/ShapeExtend -I ./external/oce/src/ShapeConstruct -I ./external/oce/src/ShapeUpgrade -I ./external/oce/src/ShapeAlgo -I ./external/oce/src/ShapeProcess -I ./external/oce/src/ShapeProcessAPI -I ./external/oce/src/BRepGProp -I ./external/oce/src/BRepMesh -I ./external/oce/src/Bnd -I ./external/oce/src/Adaptor2d -I ./external/oce/src/Adaptor3d -I ./external/oce/src/BOPAlgo -I ./external/oce/src/BOPDS -I ./external/oce/src/BRep -I ./external/oce/src/BRepApprox -I ./external/oce/src/BRepBlend -I ./external/oce/src/BRepBuilderAPI -I ./external/oce/src/BRepCheck -I ./external/oce/src/NCollection -I ./external/oce/src/TopTools -I ./external/oce/src/GCPnts -I ./external/oce/src/Poly -I ./external/oce/src/BRepFilletAPI -I ./external/oce/src/TopExp -I ./external/oce/src/BOPCol -I ./external/oce/src/BRepSweep -I ./external/oce/src/Sweep -I ./external/oce/src/ChFi2d -I ./external/oce/src/BRepTools -I ./external/oce/src/IntPatch -I ./external/oce/src/GeomInt -I ./external/oce/src/IntSurf -I ./external/oce/src/GeomAPI -I ./external/oce/src/Extrema -I ./external/oce/src/math -I ./external/oce/src/CPnts -I ./external/oce/src/BRepPrim -I ./external/oce/src/GC -I ./external/oce/src/ChFiDS -I ./external/oce/src/ElCLib -I ./external/oce/src/gce -I ./external/oce/src/Interface -I ./external/oce/src/MoniTool -I ./external/oce/src/TDF -I ./external/oce/src/Message -I ./external/oce/src/Plate -I ./external/oce/src/GCE2d -I ./external/oce/src/BRepFeat -I ./external/oce/src/GeomConvert -I ./external/oce/src/LocOpe -I ./external/oce/src/TDocStd -I ./external/oce/src/CDF -I ./external/oce/src/TNaming -I ./external/oce/src/IGESControl -I ./external/oce/src/XCAFPrs -I ./external/oce/src/XCAFDoc -I ./external/oce/src/XCAFDrivers -I ./external/oce/src/XCAFSchema -I ./external/oce/src/XmlXCAFDrivers -I ./external/oce/src/STEPCAFControl -I ./external/ifc/src -I ./external/ifc/src/ifcgeom -I ./external/ifc/src/ifcparse -I ./external/ifc/src/ifcgeom_schema_agnostic
#cgo linux LDFLAGS: -L ./libs/ -L /usr/lib/x86_64-linux-gnu/ -Wl,--start-group -lpthread -lifc2x3 -lifc4 -ldl -lm -lGL -lGLU -lX11  -lTKernel -lTKMath -lTKG2d -lTKG3d -lTKGeomBase -lTKBRep -lTKGeomAlgo -lTKTopAlgo -lTKPrim -lTKBO -lTKHLR -lTKMesh -lTKShHealing -lTKXMesh -lTKBool -lTKFillet -lTKFeat -lTKOffset -lTKService -lTKV3d -lTKCDF -lPTKernel -lTKLCAF -lFWOSPlugin -lTKPShape -lTKBinL -lTKXmlL -lTKPLCAF -lTKTObj -lTKShapeSchema -lTKStdLSchema -lTKCAF -lTKBin -lTKXml -lTKPCAF -lTKBinTObj -lTKXmlTObj -lTKStdSchema -lTKSTL -lTKXSBase -lTKSTEPBase -lTKIGES -lTKSTEPAttr -lTKSTEP209 -lTKSTEP -lTKVRML -lTKXCAF -lTKXCAFSchema -lTKXmlXCAF -lTKBinXCAF -lTKXDEIGES -lTKXDESTEP -Wl,--end-group -lboost_system_internal -lboost_filesystem_internal -lboost_date_time_internal -lboost_regex_internal -lboost_chrono_internal -lboost_program_options_internal -lboost_test_internal
#cgo darwin LDFLAGS: -L ./libs/ -lifc  -lboost_system_internal -lboost_filesystem_internal -lboost_date_time_internal -lboost_regex_internal -lboost_chrono_internal -lboost_program_options_internal -lboost_test_internal -framework Foundation -framework CoreFoundation -framework CoreGraphics -framework Cocoa  -lTKernel -lTKMath -lTKG2d -lTKG3d -lTKGeomBase -lTKBRep -lTKGeomAlgo -lTKTopAlgo -lTKPrim -lTKBO -lTKHLR -lTKMesh -lTKShHealing -lTKXMesh -lTKBool -lTKFillet -lTKFeat -lTKOffset -lTKService -lTKV3d -lTKCDF -lPTKernel -lTKLCAF -lFWOSPlugin -lTKPShape -lTKBinL -lTKXmlL -lTKPLCAF -lTKTObj -lTKShapeSchema -lTKStdLSchema -lTKCAF -lTKBin -lTKXml -lTKPCAF -lTKBinTObj -lTKXmlTObj -lTKStdSchema -lTKSTL -lTKXSBase -lTKSTEPBase -lTKIGES -lTKSTEPAttr -lTKSTEP209 -lTKSTEP -lTKVRML -lTKXCAF -lTKXCAFSchema -lTKXmlXCAF -lTKBinXCAF -lTKXDEIGES -lTKXDESTEP
#cgo windows LDFLAGS: -L ./libs/ -lifc -lboost_system_internal -lboost_filesystem_internal -lboost_date_time_internal -lboost_regex_internal -lboost_chrono_internal -lboost_program_options_internal -lboost_test_internal  -lTKernel -lTKMath -lTKG2d -lTKG3d -lTKGeomBase -lTKBRep -lTKGeomAlgo -lTKTopAlgo -lTKPrim -lTKBO -lTKHLR -lTKMesh -lTKShHealing -lTKXMesh -lTKBool -lTKFillet -lTKFeat -lTKOffset -lTKService -lTKV3d -lTKCDF -lPTKernel -lTKLCAF -lFWOSPlugin -lTKPShape -lTKBinL -lTKXmlL -lTKPLCAF -lTKTObj -lTKShapeSchema -lTKStdLSchema -lTKCAF -lTKBin -lTKXml -lTKPCAF -lTKBinTObj -lTKXmlTObj -lTKStdSchema -lTKSTL -lTKXSBase -lTKSTEPBase -lTKIGES -lTKSTEPAttr -lTKSTEP209 -lTKSTEP -lTKVRML -lTKXCAF -lTKXCAFSchema -lTKXmlXCAF -lTKBinXCAF -lTKXDEIGES -lTKXDESTEP
#include <stdlib.h>
#include "ifc_c_api.h"
*/
import "C"

import (
	"unsafe"
)

func init() {
	C.ifc_register_schema()
}

func IfcToTopoShape(f string) []Shape {
	fl := C.CString(f)
	defer C.free(unsafe.Pointer(fl))
	count := 0
	sp := []Shape{}
	res := C.ifc_get_topo_shapes(fl, (*C.int)(unsafe.Pointer(&count)))
	if count == 0 {
		return sp
	}
	defer C.ifc_shapes_free(res)
	for i := 0; i < count; i++ {
		sp = append(sp, *NewShape(C.ifc_get_topo_shape(res, C.int(i))))
	}
	return sp
}
