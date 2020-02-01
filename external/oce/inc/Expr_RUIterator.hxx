// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Expr_RUIterator_HeaderFile
#define _Expr_RUIterator_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <Expr_MapOfNamedUnknown.hxx>
#include <Standard_Integer.hxx>
#include <Handle_Expr_GeneralRelation.hxx>
#include <Standard_Boolean.hxx>
#include <Handle_Expr_NamedUnknown.hxx>
class Standard_NoMoreObject;
class Standard_NoSuchObject;
class Expr_GeneralRelation;
class Expr_NamedUnknown;


//! Iterates on NamedUnknowns in a GeneralRelation.
class Expr_RUIterator 
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Creates an iterator on every NamedUnknown contained in
  //! <rel>.
  Standard_EXPORT Expr_RUIterator(const Handle(Expr_GeneralRelation)& rel);
  
  //! Returns False if on other unknown remains.
  Standard_EXPORT   Standard_Boolean More()  const;
  
  Standard_EXPORT   void Next() ;
  
  //! Returns current NamedUnknown.
  //! Raises exception if no more unknowns remain.
  Standard_EXPORT   Handle(Expr_NamedUnknown) Value()  const;




protected:





private:



  Expr_MapOfNamedUnknown myMap;
  Standard_Integer myCurrent;


};







#endif // _Expr_RUIterator_HeaderFile