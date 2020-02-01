// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#include <TopTools_IndexedMapNodeOfIndexedMapOfOrientedShape.hxx>

#include <Standard_Type.hxx>

#include <TopoDS_Shape.hxx>
#include <TopTools_OrientedShapeMapHasher.hxx>
#include <TopTools_IndexedMapOfOrientedShape.hxx>

 


IMPLEMENT_STANDARD_TYPE(TopTools_IndexedMapNodeOfIndexedMapOfOrientedShape)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(TCollection_MapNode),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),

IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(TopTools_IndexedMapNodeOfIndexedMapOfOrientedShape)


IMPLEMENT_DOWNCAST(TopTools_IndexedMapNodeOfIndexedMapOfOrientedShape,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(TopTools_IndexedMapNodeOfIndexedMapOfOrientedShape)


#define TheKey TopoDS_Shape
#define TheKey_hxx <TopoDS_Shape.hxx>
#define Hasher TopTools_OrientedShapeMapHasher
#define Hasher_hxx <TopTools_OrientedShapeMapHasher.hxx>
#define TCollection_IndexedMapNode TopTools_IndexedMapNodeOfIndexedMapOfOrientedShape
#define TCollection_IndexedMapNode_hxx <TopTools_IndexedMapNodeOfIndexedMapOfOrientedShape.hxx>
#define Handle_TCollection_IndexedMapNode Handle_TopTools_IndexedMapNodeOfIndexedMapOfOrientedShape
#define TCollection_IndexedMapNode_Type_() TopTools_IndexedMapNodeOfIndexedMapOfOrientedShape_Type_()
#define TCollection_IndexedMap TopTools_IndexedMapOfOrientedShape
#define TCollection_IndexedMap_hxx <TopTools_IndexedMapOfOrientedShape.hxx>
#include <TCollection_IndexedMapNode.gxx>
