// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Law_BSplineKnotSplitting_HeaderFile
#define _Law_BSplineKnotSplitting_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <Handle_TColStd_HArray1OfInteger.hxx>
#include <Handle_Law_BSpline.hxx>
#include <Standard_Integer.hxx>
class TColStd_HArray1OfInteger;
class Standard_DimensionError;
class Standard_RangeError;
class Law_BSpline;
class TColStd_Array1OfInteger;



//! For a B-spline curve the discontinuities are localised at the
//! knot values and between two knots values the B-spline is
//! infinitely continuously differentiable.
//! At a knot of range index the continuity is equal to :
//! Degree - Mult (Index)   where  Degree is the degree of the
//! basis B-spline functions and Mult the multiplicity of the knot
//! of range Index.
//! If for your computation you need to have B-spline curves with a
//! minima of continuity it can be interesting to know between which
//! knot values, a B-spline curve arc, has a continuity of given order.
//! This algorithm computes the indexes of the knots where you should
//! split the curve, to obtain arcs with a constant continuity given
//! at the construction time. The splitting values are in the range
//! [FirstUKnotValue, LastUKnotValue] (See class B-spline curve from
//! package Geom).
//! If you just want to compute the local derivatives on the curve you
//! don't need to create the B-spline curve arcs, you can use the
//! functions LocalD1, LocalD2, LocalD3, LocalDN of the class
//! BSplineCurve.
class Law_BSplineKnotSplitting 
{
public:

  DEFINE_STANDARD_ALLOC

  

  //! Locates the knot values which correspond to the segmentation of
  //! the curve into arcs with a continuity equal to ContinuityRange.
  //!
  //! Raised if ContinuityRange is not greater or equal zero.
  Standard_EXPORT Law_BSplineKnotSplitting(const Handle(Law_BSpline)& BasisLaw, const Standard_Integer ContinuityRange);
  

  //! Returns the number of knots corresponding to the splitting.
  Standard_EXPORT   Standard_Integer NbSplits()  const;
  

  //! Returns the indexes of the BSpline curve knots corresponding to
  //! the splitting.
  //!
  //! Raised if the length of SplitValues is not equal to NbSPlit.
  Standard_EXPORT   void Splitting (TColStd_Array1OfInteger& SplitValues)  const;
  

  //! Returns the index of the knot corresponding to the splitting
  //! of range Index.
  //!
  //! Raised if Index < 1 or Index > NbSplits
  Standard_EXPORT   Standard_Integer SplitValue (const Standard_Integer Index)  const;




protected:





private:



  Handle(TColStd_HArray1OfInteger) splitIndexes;


};







#endif // _Law_BSplineKnotSplitting_HeaderFile