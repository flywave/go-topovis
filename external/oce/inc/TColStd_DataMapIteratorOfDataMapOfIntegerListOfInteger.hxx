// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TColStd_DataMapIteratorOfDataMapOfIntegerListOfInteger_HeaderFile
#define _TColStd_DataMapIteratorOfDataMapOfIntegerListOfInteger_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <TCollection_BasicMapIterator.hxx>
#include <Standard_Integer.hxx>
#include <Handle_TColStd_DataMapNodeOfDataMapOfIntegerListOfInteger.hxx>
class Standard_NoSuchObject;
class TColStd_ListOfInteger;
class TColStd_MapIntegerHasher;
class TColStd_DataMapOfIntegerListOfInteger;
class TColStd_DataMapNodeOfDataMapOfIntegerListOfInteger;



class TColStd_DataMapIteratorOfDataMapOfIntegerListOfInteger  : public TCollection_BasicMapIterator
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT TColStd_DataMapIteratorOfDataMapOfIntegerListOfInteger();
  
  Standard_EXPORT TColStd_DataMapIteratorOfDataMapOfIntegerListOfInteger(const TColStd_DataMapOfIntegerListOfInteger& aMap);
  
  Standard_EXPORT   void Initialize (const TColStd_DataMapOfIntegerListOfInteger& aMap) ;
  
  Standard_EXPORT  const  Standard_Integer& Key()  const;
  
  Standard_EXPORT  const  TColStd_ListOfInteger& Value()  const;




protected:





private:





};







#endif // _TColStd_DataMapIteratorOfDataMapOfIntegerListOfInteger_HeaderFile