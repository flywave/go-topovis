// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _MAT2d_CutCurve_HeaderFile
#define _MAT2d_CutCurve_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <TColGeom2d_SequenceOfCurve.hxx>
#include <Handle_Geom2d_Curve.hxx>
#include <MAT_Side.hxx>
#include <Standard_Boolean.hxx>
#include <Standard_Integer.hxx>
#include <Handle_Geom2d_TrimmedCurve.hxx>
class Standard_OutOfRange;
class Geom2d_Curve;
class Geom2d_TrimmedCurve;


//! Cuts a curve at the extremas of curvature
//! and at the inflections. Constructs a trimmed
//! Curve for each interval.
class MAT2d_CutCurve 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT MAT2d_CutCurve();
  
  Standard_EXPORT MAT2d_CutCurve(const Handle(Geom2d_Curve)& C);
  
  //! Cuts a curve at the extremas of curvature
  //! and at the inflections.
  Standard_EXPORT   void Perform (const Handle(Geom2d_Curve)& C) ;
  
  //! Cuts a curve at the inflections, and at the extremas
  //! of curvature where the concavity is on <aSide>.
  Standard_EXPORT   void Perform (const Handle(Geom2d_Curve)& C, const MAT_Side aSide) ;
  
  //! Cuts a curve at the inflections.
  Standard_EXPORT   void PerformInf (const Handle(Geom2d_Curve)& C) ;
  
  //! Returns True if the curve is not cut.
  Standard_EXPORT   Standard_Boolean UnModified()  const;
  
  //! Returns the number of curves.
  //! it's allways greatest than 2.
  //!
  //! raises if the Curve is UnModified;
  Standard_EXPORT   Standard_Integer NbCurves()  const;
  
  //! Returns the Indexth curve.
  //! raises if Index not in the range [1,NbCurves()]
  Standard_EXPORT   Handle(Geom2d_TrimmedCurve) Value (const Standard_Integer Index)  const;




protected:





private:



  TColGeom2d_SequenceOfCurve theCurves;


};







#endif // _MAT2d_CutCurve_HeaderFile