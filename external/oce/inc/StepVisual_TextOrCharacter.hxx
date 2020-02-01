// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepVisual_TextOrCharacter_HeaderFile
#define _StepVisual_TextOrCharacter_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <StepData_SelectType.hxx>
#include <Standard_Integer.hxx>
#include <Handle_Standard_Transient.hxx>
#include <Handle_StepVisual_AnnotationText.hxx>
#include <Handle_StepVisual_CompositeText.hxx>
#include <Handle_StepVisual_TextLiteral.hxx>
class Standard_Transient;
class StepVisual_AnnotationText;
class StepVisual_CompositeText;
class StepVisual_TextLiteral;



class StepVisual_TextOrCharacter  : public StepData_SelectType
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Returns a TextOrCharacter SelectType
  Standard_EXPORT StepVisual_TextOrCharacter();
  
  //! Recognizes a TextOrCharacter Kind Entity that is :
  //! 1 -> AnnotationText
  //! 2 -> CompositeText
  //! 3 -> TextLiteral
  //! 0 else
  Standard_EXPORT   Standard_Integer CaseNum (const Handle(Standard_Transient)& ent)  const;
  
  //! returns Value as a AnnotationText (Null if another type)
  Standard_EXPORT   Handle(StepVisual_AnnotationText) AnnotationText()  const;
  
  //! returns Value as a CompositeText (Null if another type)
  Standard_EXPORT   Handle(StepVisual_CompositeText) CompositeText()  const;
  
  //! returns Value as a TextLiteral (Null if another type)
  Standard_EXPORT   Handle(StepVisual_TextLiteral) TextLiteral()  const;




protected:





private:





};







#endif // _StepVisual_TextOrCharacter_HeaderFile