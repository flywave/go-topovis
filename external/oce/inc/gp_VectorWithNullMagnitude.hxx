// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _gp_VectorWithNullMagnitude_HeaderFile
#define _gp_VectorWithNullMagnitude_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Standard_DefineException.hxx>
#include <Standard_SStream.hxx>
#include <Standard_DomainError.hxx>
#include <Handle_gp_VectorWithNullMagnitude.hxx>

#if !defined No_Exception && !defined No_gp_VectorWithNullMagnitude
  #define gp_VectorWithNullMagnitude_Raise_if(CONDITION, MESSAGE) \
  if (CONDITION) gp_VectorWithNullMagnitude::Raise(MESSAGE);
#else
  #define gp_VectorWithNullMagnitude_Raise_if(CONDITION, MESSAGE)
#endif

DEFINE_STANDARD_EXCEPTION(gp_VectorWithNullMagnitude, Standard_DomainError)

#endif // _gp_VectorWithNullMagnitude_HeaderFile