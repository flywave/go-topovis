// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Quantity_ColorDefinitionError_HeaderFile
#define _Quantity_ColorDefinitionError_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Standard_DefineException.hxx>
#include <Standard_SStream.hxx>
#include <Standard_DomainError.hxx>
#include <Handle_Quantity_ColorDefinitionError.hxx>

#if !defined No_Exception && !defined No_Quantity_ColorDefinitionError
  #define Quantity_ColorDefinitionError_Raise_if(CONDITION, MESSAGE) \
  if (CONDITION) Quantity_ColorDefinitionError::Raise(MESSAGE);
#else
  #define Quantity_ColorDefinitionError_Raise_if(CONDITION, MESSAGE)
#endif

DEFINE_STANDARD_EXCEPTION(Quantity_ColorDefinitionError, Standard_DomainError)

#endif // _Quantity_ColorDefinitionError_HeaderFile