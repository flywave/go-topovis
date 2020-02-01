// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TDataXtd_Axis_HeaderFile
#define _TDataXtd_Axis_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_TDataXtd_Axis.hxx>

#include <TDF_Attribute.hxx>
#include <Handle_TDF_Attribute.hxx>
#include <Handle_TDF_RelocationTable.hxx>
#include <Standard_OStream.hxx>
class Standard_GUID;
class TDF_Label;
class gp_Lin;
class TDF_Attribute;
class TDF_RelocationTable;


//! The basis to define an axis attribute.
//!
//! Warning: Use TDataXtd_Geometry  attribute  to retrieve  the
//! gp_Lin of the Axis attribute
class TDataXtd_Axis : public TDF_Attribute
{

public:

  
  //! class methods
  //! =============
  //! Returns the GUID for an axis.
  Standard_EXPORT static  const  Standard_GUID& GetID() ;
  
  //! Finds or creates an axis attribute defined by the  label.
  //! In the case of a creation of an axis, a compatible
  //! named shape should already be associated with label.
  //! Exceptions
  //! Standard_NullObject if no compatible named
  //! shape is associated with the label.
  Standard_EXPORT static   Handle(TDataXtd_Axis) Set (const TDF_Label& label) ;
  
  //! Find,  or create,  an Axis  attribute  and set <P>  as
  //! generated in the associated NamedShape.
  //! Axis methods
  //! ============
  Standard_EXPORT static   Handle(TDataXtd_Axis) Set (const TDF_Label& label, const gp_Lin& L) ;
  
  Standard_EXPORT TDataXtd_Axis();
  
  Standard_EXPORT  const  Standard_GUID& ID()  const;
  
  Standard_EXPORT   void Restore (const Handle(TDF_Attribute)& with) ;
  
  Standard_EXPORT   Handle(TDF_Attribute) NewEmpty()  const;
  
  Standard_EXPORT   void Paste (const Handle(TDF_Attribute)& into, const Handle(TDF_RelocationTable)& RT)  const;
  
  Standard_EXPORT virtual   Standard_OStream& Dump (Standard_OStream& anOS)  const;




  DEFINE_STANDARD_RTTI(TDataXtd_Axis)

protected:




private: 




};







#endif // _TDataXtd_Axis_HeaderFile