// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepBasic_HArray1OfProductContext_HeaderFile
#define _StepBasic_HArray1OfProductContext_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_StepBasic_HArray1OfProductContext.hxx>

#include <StepBasic_Array1OfProductContext.hxx>
#include <MMgt_TShared.hxx>
#include <Handle_StepBasic_ProductContext.hxx>
#include <Standard_Integer.hxx>
class Standard_RangeError;
class Standard_DimensionMismatch;
class Standard_OutOfRange;
class Standard_OutOfMemory;
class StepBasic_ProductContext;
class StepBasic_Array1OfProductContext;



class StepBasic_HArray1OfProductContext : public MMgt_TShared
{

public:

  
    StepBasic_HArray1OfProductContext(const Standard_Integer Low, const Standard_Integer Up);
  
    StepBasic_HArray1OfProductContext(const Standard_Integer Low, const Standard_Integer Up, const Handle(StepBasic_ProductContext)& V);
  
      void Init (const Handle(StepBasic_ProductContext)& V) ;
  
      Standard_Integer Length()  const;
  
      Standard_Integer Lower()  const;
  
      Standard_Integer Upper()  const;
  
      void SetValue (const Standard_Integer Index, const Handle(StepBasic_ProductContext)& Value) ;
  
     const  Handle(StepBasic_ProductContext)& Value (const Standard_Integer Index)  const;
  
      Handle(StepBasic_ProductContext)& ChangeValue (const Standard_Integer Index) ;
  
     const  StepBasic_Array1OfProductContext& Array1()  const;
  
      StepBasic_Array1OfProductContext& ChangeArray1() ;




  DEFINE_STANDARD_RTTI(StepBasic_HArray1OfProductContext)

protected:




private: 


  StepBasic_Array1OfProductContext myArray;


};

#define ItemHArray1 Handle(StepBasic_ProductContext)
#define ItemHArray1_hxx <StepBasic_ProductContext.hxx>
#define TheArray1 StepBasic_Array1OfProductContext
#define TheArray1_hxx <StepBasic_Array1OfProductContext.hxx>
#define TCollection_HArray1 StepBasic_HArray1OfProductContext
#define TCollection_HArray1_hxx <StepBasic_HArray1OfProductContext.hxx>
#define Handle_TCollection_HArray1 Handle_StepBasic_HArray1OfProductContext
#define TCollection_HArray1_Type_() StepBasic_HArray1OfProductContext_Type_()

#include <TCollection_HArray1.lxx>

#undef ItemHArray1
#undef ItemHArray1_hxx
#undef TheArray1
#undef TheArray1_hxx
#undef TCollection_HArray1
#undef TCollection_HArray1_hxx
#undef Handle_TCollection_HArray1
#undef TCollection_HArray1_Type_




#endif // _StepBasic_HArray1OfProductContext_HeaderFile