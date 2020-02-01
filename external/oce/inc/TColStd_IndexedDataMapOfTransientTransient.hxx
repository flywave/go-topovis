// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TColStd_IndexedDataMapOfTransientTransient_HeaderFile
#define _TColStd_IndexedDataMapOfTransientTransient_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <TCollection_BasicMap.hxx>
#include <Handle_Standard_Transient.hxx>
#include <Handle_TColStd_IndexedDataMapNodeOfIndexedDataMapOfTransientTransient.hxx>
#include <Standard_Integer.hxx>
#include <Standard_Boolean.hxx>
#include <Standard_Address.hxx>
class Standard_DomainError;
class Standard_OutOfRange;
class Standard_NoSuchObject;
class Standard_Transient;
class TColStd_MapTransientHasher;
class TColStd_IndexedDataMapNodeOfIndexedDataMapOfTransientTransient;



class TColStd_IndexedDataMapOfTransientTransient  : public TCollection_BasicMap
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT TColStd_IndexedDataMapOfTransientTransient(const Standard_Integer NbBuckets = 1);
  
  Standard_EXPORT   TColStd_IndexedDataMapOfTransientTransient& Assign (const TColStd_IndexedDataMapOfTransientTransient& Other) ;
  TColStd_IndexedDataMapOfTransientTransient& operator = (const TColStd_IndexedDataMapOfTransientTransient& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT   void ReSize (const Standard_Integer NbBuckets) ;
  
  Standard_EXPORT   void Clear() ;
~TColStd_IndexedDataMapOfTransientTransient()
{
  Clear();
}
  
  Standard_EXPORT   Standard_Integer Add (const Handle(Standard_Transient)& K, const Handle(Standard_Transient)& I) ;
  
  Standard_EXPORT   void Substitute (const Standard_Integer I, const Handle(Standard_Transient)& K, const Handle(Standard_Transient)& T) ;
  
  Standard_EXPORT   void RemoveLast() ;
  
  Standard_EXPORT   Standard_Boolean Contains (const Handle(Standard_Transient)& K)  const;
  
  Standard_EXPORT  const  Handle(Standard_Transient)& FindKey (const Standard_Integer I)  const;
  
  Standard_EXPORT  const  Handle(Standard_Transient)& FindFromIndex (const Standard_Integer I)  const;
 const  Handle(Standard_Transient)& operator () (const Standard_Integer I)  const
{
  return FindFromIndex(I);
}
  
  Standard_EXPORT   Handle(Standard_Transient)& ChangeFromIndex (const Standard_Integer I) ;
  Handle(Standard_Transient)& operator () (const Standard_Integer I) 
{
  return ChangeFromIndex(I);
}
  
  Standard_EXPORT   Standard_Integer FindIndex (const Handle(Standard_Transient)& K)  const;
  
  Standard_EXPORT  const  Handle(Standard_Transient)& FindFromKey (const Handle(Standard_Transient)& K)  const;
  
  Standard_EXPORT   Handle(Standard_Transient)& ChangeFromKey (const Handle(Standard_Transient)& K) ;
  
  Standard_EXPORT   Standard_Address FindFromKey1 (const Handle(Standard_Transient)& K)  const;
  
  Standard_EXPORT   Standard_Address ChangeFromKey1 (const Handle(Standard_Transient)& K) ;




protected:





private:

  
  Standard_EXPORT TColStd_IndexedDataMapOfTransientTransient(const TColStd_IndexedDataMapOfTransientTransient& Other);




};







#endif // _TColStd_IndexedDataMapOfTransientTransient_HeaderFile