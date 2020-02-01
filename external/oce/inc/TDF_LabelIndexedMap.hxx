// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TDF_LabelIndexedMap_HeaderFile
#define _TDF_LabelIndexedMap_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <TCollection_BasicMap.hxx>
#include <Handle_TDF_IndexedMapNodeOfLabelIndexedMap.hxx>
#include <Standard_Integer.hxx>
#include <Standard_Boolean.hxx>
class Standard_DomainError;
class Standard_OutOfRange;
class TDF_Label;
class TDF_LabelMapHasher;
class TDF_IndexedMapNodeOfLabelIndexedMap;



class TDF_LabelIndexedMap  : public TCollection_BasicMap
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT TDF_LabelIndexedMap(const Standard_Integer NbBuckets = 1);
  
  Standard_EXPORT TDF_LabelIndexedMap(const TDF_LabelIndexedMap& Other);
  
  Standard_EXPORT   TDF_LabelIndexedMap& Assign (const TDF_LabelIndexedMap& Other) ;
  TDF_LabelIndexedMap& operator = (const TDF_LabelIndexedMap& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT   void ReSize (const Standard_Integer NbBuckets) ;
  
  Standard_EXPORT   void Clear() ;
~TDF_LabelIndexedMap()
{
  Clear();
}
  
  Standard_EXPORT   Standard_Integer Add (const TDF_Label& K) ;
  
  Standard_EXPORT   void Substitute (const Standard_Integer I, const TDF_Label& K) ;
  
  Standard_EXPORT   void RemoveLast() ;
  
  Standard_EXPORT   Standard_Boolean Contains (const TDF_Label& K)  const;
  
  Standard_EXPORT  const  TDF_Label& FindKey (const Standard_Integer I)  const;
 const  TDF_Label& operator () (const Standard_Integer I)  const
{
  return FindKey(I);
}
  
  Standard_EXPORT   Standard_Integer FindIndex (const TDF_Label& K)  const;




protected:





private:





};







#endif // _TDF_LabelIndexedMap_HeaderFile