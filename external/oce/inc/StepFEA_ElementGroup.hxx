// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepFEA_ElementGroup_HeaderFile
#define _StepFEA_ElementGroup_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_StepFEA_ElementGroup.hxx>

#include <Handle_StepFEA_HArray1OfElementRepresentation.hxx>
#include <StepFEA_FeaGroup.hxx>
#include <Handle_TCollection_HAsciiString.hxx>
#include <Handle_StepFEA_FeaModel.hxx>
class StepFEA_HArray1OfElementRepresentation;
class TCollection_HAsciiString;
class StepFEA_FeaModel;


//! Representation of STEP entity ElementGroup
class StepFEA_ElementGroup : public StepFEA_FeaGroup
{

public:

  
  //! Empty constructor
  Standard_EXPORT StepFEA_ElementGroup();
  
  //! Initialize all fields (own and inherited)
  Standard_EXPORT   void Init (const Handle(TCollection_HAsciiString)& aGroup_Name, const Handle(TCollection_HAsciiString)& aGroup_Description, const Handle(StepFEA_FeaModel)& aFeaGroup_ModelRef, const Handle(StepFEA_HArray1OfElementRepresentation)& aElements) ;
  
  //! Returns field Elements
  Standard_EXPORT   Handle(StepFEA_HArray1OfElementRepresentation) Elements()  const;
  
  //! Set field Elements
  Standard_EXPORT   void SetElements (const Handle(StepFEA_HArray1OfElementRepresentation)& Elements) ;




  DEFINE_STANDARD_RTTI(StepFEA_ElementGroup)

protected:




private: 


  Handle(StepFEA_HArray1OfElementRepresentation) theElements;


};







#endif // _StepFEA_ElementGroup_HeaderFile