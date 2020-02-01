// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PXCAFDoc_GraphNode_HeaderFile
#define _PXCAFDoc_GraphNode_HeaderFile

#include <Standard_Macro.hxx>
#include <Standard_DefineHandle.hxx>
#include <Standard.hxx>
#include <Handle_PXCAFDoc_GraphNode.hxx>

#include <Standard_Integer.hxx>
#include <Handle_PXCAFDoc_GraphNode.hxx>
#include <Standard_GUID.hxx>
#include <Handle_PXCAFDoc_GraphNodeSequence.hxx>
#include <PDF_Attribute.hxx>
class PXCAFDoc_GraphNodeSequence;
class Standard_GUID;


class PXCAFDoc_GraphNode : public PDF_Attribute
{

public:

  
  Standard_EXPORT PXCAFDoc_GraphNode();
  
  Standard_EXPORT   Standard_Integer SetFather (const Handle(PXCAFDoc_GraphNode)& F) ;
  
  Standard_EXPORT   Standard_Integer SetChild (const Handle(PXCAFDoc_GraphNode)& Ch) ;
  
  Standard_EXPORT   Handle(PXCAFDoc_GraphNode) GetFather (const Standard_Integer Findex)  const;
  
  Standard_EXPORT   Handle(PXCAFDoc_GraphNode) GetChild (const Standard_Integer Chindex)  const;
  
  Standard_EXPORT   Standard_Integer FatherIndex (const Handle(PXCAFDoc_GraphNode)& F)  const;
  
  Standard_EXPORT   Standard_Integer ChildIndex (const Handle(PXCAFDoc_GraphNode)& Ch)  const;
  
  Standard_EXPORT   Standard_Integer NbFathers()  const;
  
  Standard_EXPORT   Standard_Integer NbChildren()  const;
  
  Standard_EXPORT   void SetGraphID (const Standard_GUID& GUID) ;
  
  Standard_EXPORT   Standard_GUID GetGraphID()  const;

PXCAFDoc_GraphNode(const Storage_stCONSTclCOM& a) : PDF_Attribute(a)
{
  
}
    Handle(PXCAFDoc_GraphNodeSequence) _CSFDB_GetPXCAFDoc_GraphNodemyFathers() const { return myFathers; }
    void _CSFDB_SetPXCAFDoc_GraphNodemyFathers(const Handle(PXCAFDoc_GraphNodeSequence)& p) { myFathers = p; }
    Handle(PXCAFDoc_GraphNodeSequence) _CSFDB_GetPXCAFDoc_GraphNodemyChildren() const { return myChildren; }
    void _CSFDB_SetPXCAFDoc_GraphNodemyChildren(const Handle(PXCAFDoc_GraphNodeSequence)& p) { myChildren = p; }
    const Standard_GUID& _CSFDB_GetPXCAFDoc_GraphNodemyGraphID() const { return myGraphID; }



  DEFINE_STANDARD_RTTI(PXCAFDoc_GraphNode)

protected:




private: 


  Handle(PXCAFDoc_GraphNodeSequence) myFathers;
  Handle(PXCAFDoc_GraphNodeSequence) myChildren;
  Standard_GUID myGraphID;


};







#endif // _PXCAFDoc_GraphNode_HeaderFile