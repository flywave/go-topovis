// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _XSDRAWSTLVRML_DataMapNodeOfElemNodesMap_HeaderFile
#define _XSDRAWSTLVRML_DataMapNodeOfElemNodesMap_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_XSDRAWSTLVRML_DataMapNodeOfElemNodesMap.hxx>

#include <Standard_Integer.hxx>
#include <TColStd_DataMapOfIntegerInteger.hxx>
#include <TCollection_MapNode.hxx>
#include <TCollection_MapNodePtr.hxx>
class TColStd_DataMapOfIntegerInteger;
class TColStd_MapIntegerHasher;
class XSDRAWSTLVRML_ElemNodesMap;
class XSDRAWSTLVRML_DataMapIteratorOfElemNodesMap;



class XSDRAWSTLVRML_DataMapNodeOfElemNodesMap : public TCollection_MapNode
{

public:

  
    XSDRAWSTLVRML_DataMapNodeOfElemNodesMap(const Standard_Integer& K, const TColStd_DataMapOfIntegerInteger& I, const TCollection_MapNodePtr& n);
  
      Standard_Integer& Key()  const;
  
      TColStd_DataMapOfIntegerInteger& Value()  const;




  DEFINE_STANDARD_RTTI(XSDRAWSTLVRML_DataMapNodeOfElemNodesMap)

protected:




private: 


  Standard_Integer myKey;
  TColStd_DataMapOfIntegerInteger myValue;


};

#define TheKey Standard_Integer
#define TheKey_hxx <Standard_Integer.hxx>
#define TheItem TColStd_DataMapOfIntegerInteger
#define TheItem_hxx <TColStd_DataMapOfIntegerInteger.hxx>
#define Hasher TColStd_MapIntegerHasher
#define Hasher_hxx <TColStd_MapIntegerHasher.hxx>
#define TCollection_DataMapNode XSDRAWSTLVRML_DataMapNodeOfElemNodesMap
#define TCollection_DataMapNode_hxx <XSDRAWSTLVRML_DataMapNodeOfElemNodesMap.hxx>
#define TCollection_DataMapIterator XSDRAWSTLVRML_DataMapIteratorOfElemNodesMap
#define TCollection_DataMapIterator_hxx <XSDRAWSTLVRML_DataMapIteratorOfElemNodesMap.hxx>
#define Handle_TCollection_DataMapNode Handle_XSDRAWSTLVRML_DataMapNodeOfElemNodesMap
#define TCollection_DataMapNode_Type_() XSDRAWSTLVRML_DataMapNodeOfElemNodesMap_Type_()
#define TCollection_DataMap XSDRAWSTLVRML_ElemNodesMap
#define TCollection_DataMap_hxx <XSDRAWSTLVRML_ElemNodesMap.hxx>

#include <TCollection_DataMapNode.lxx>

#undef TheKey
#undef TheKey_hxx
#undef TheItem
#undef TheItem_hxx
#undef Hasher
#undef Hasher_hxx
#undef TCollection_DataMapNode
#undef TCollection_DataMapNode_hxx
#undef TCollection_DataMapIterator
#undef TCollection_DataMapIterator_hxx
#undef Handle_TCollection_DataMapNode
#undef TCollection_DataMapNode_Type_
#undef TCollection_DataMap
#undef TCollection_DataMap_hxx




#endif // _XSDRAWSTLVRML_DataMapNodeOfElemNodesMap_HeaderFile