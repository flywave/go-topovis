#include "ifc4.h"

#define IFC_NAMESPACE ifc4
#define IfcSchema Ifc4
#define USE_4
 
#include "ifcgeom/IfcGeomCurves.cpp"
#include "ifcgeom/IfcGeomFaces.cpp"
#include "ifcgeom/IfcGeomFunctions.cpp"
#include "ifcgeom/IfcGeomHelpers.cpp"
#include "ifcgeom/IfcGeomIteratorImplementation.cpp"
#include "ifcgeom/IfcGeomRenderStyles.cpp"
#include "ifcgeom/IfcGeomRepresentation.cpp"
#include "ifcgeom/IfcGeomSerialisation.cpp"
#include "ifcgeom/IfcGeomShapes.cpp"
#include "ifcgeom/IfcGeomWires.cpp"
#include "ifcgeom/IfcRegister.cpp"

#include "ifcparse/Ifc4-schema.cpp"
#include "ifcparse/Ifc4.cpp"
#include "ifcparse/IfcCharacterDecoder.cpp"
#include "ifcparse/IfcGlobalId.cpp"
#include "ifcparse/IfcHierarchyHelper.cpp"
#include "ifcparse/IfcLogger.cpp"
#include "ifcparse/IfcParse.cpp"
#include "ifcparse/IfcSIPrefix.cpp"
#include "ifcparse/IfcSchema.cpp"
#include "ifcparse/IfcSpfHeader.cpp"
#include "ifcparse/IfcUtil.cpp"
#include "ifcparse/IfcWrite.cpp"
#include "ifcparse/parse_ifcxml.cpp"

#include "ifcgeom_schema_agnostic/IfcGeomMaterial.cpp"
#include "ifcgeom_schema_agnostic/IteratorImplementation.cpp"
#include "ifcgeom_schema_agnostic/Kernel.cpp"
#include "ifcgeom_schema_agnostic/Serialization.cpp"
#include "ifcgeom_schema_agnostic/SurfaceStyle.cpp"

#undef USE_4
#undef IfcSchema
#undef IFC_NAMESPACE
