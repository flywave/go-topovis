// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PBRep_CurveOn2Surfaces_HeaderFile
#define _PBRep_CurveOn2Surfaces_HeaderFile

#include <Standard_Macro.hxx>
#include <Standard_DefineHandle.hxx>
#include <Standard.hxx>
#include <Handle_PBRep_CurveOn2Surfaces.hxx>

#include <Handle_PGeom_Surface.hxx>
#include <PTopLoc_Location.hxx>
#include <GeomAbs_Shape.hxx>
#include <Standard_Boolean.hxx>
#include <PBRep_CurveRepresentation.hxx>
class PGeom_Surface;
class Standard_NullObject;
class PTopLoc_Location;


class PBRep_CurveOn2Surfaces : public PBRep_CurveRepresentation
{

public:

  
  Standard_EXPORT PBRep_CurveOn2Surfaces(const Handle(PGeom_Surface)& S1, const Handle(PGeom_Surface)& S2, const PTopLoc_Location& L1, const PTopLoc_Location& L2, const GeomAbs_Shape C);
  
  Standard_EXPORT   Handle(PGeom_Surface) Surface()  const;
  
  Standard_EXPORT   Handle(PGeom_Surface) Surface2()  const;
  
  Standard_EXPORT   PTopLoc_Location Location2()  const;
  
  Standard_EXPORT   GeomAbs_Shape Continuity()  const;
  
  //! Returns True.
  Standard_EXPORT virtual   Standard_Boolean IsRegularity()  const;

PBRep_CurveOn2Surfaces( )
{
  
}
PBRep_CurveOn2Surfaces(const Storage_stCONSTclCOM& a) : PBRep_CurveRepresentation(a)
{
  
}
    Handle(PGeom_Surface) _CSFDB_GetPBRep_CurveOn2SurfacesmySurface() const { return mySurface; }
    void _CSFDB_SetPBRep_CurveOn2SurfacesmySurface(const Handle(PGeom_Surface)& p) { mySurface = p; }
    Handle(PGeom_Surface) _CSFDB_GetPBRep_CurveOn2SurfacesmySurface2() const { return mySurface2; }
    void _CSFDB_SetPBRep_CurveOn2SurfacesmySurface2(const Handle(PGeom_Surface)& p) { mySurface2 = p; }
    const PTopLoc_Location& _CSFDB_GetPBRep_CurveOn2SurfacesmyLocation2() const { return myLocation2; }
    GeomAbs_Shape _CSFDB_GetPBRep_CurveOn2SurfacesmyContinuity() const { return myContinuity; }
    void _CSFDB_SetPBRep_CurveOn2SurfacesmyContinuity(const GeomAbs_Shape p) { myContinuity = p; }



  DEFINE_STANDARD_RTTI(PBRep_CurveOn2Surfaces)

protected:




private: 


  Handle(PGeom_Surface) mySurface;
  Handle(PGeom_Surface) mySurface2;
  PTopLoc_Location myLocation2;
  GeomAbs_Shape myContinuity;


};







#endif // _PBRep_CurveOn2Surfaces_HeaderFile