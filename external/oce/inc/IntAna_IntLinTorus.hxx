// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IntAna_IntLinTorus_HeaderFile
#define _IntAna_IntLinTorus_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <Standard_Boolean.hxx>
#include <Standard_Integer.hxx>
#include <gp_Pnt.hxx>
#include <Standard_Real.hxx>
class StdFail_NotDone;
class Standard_OutOfRange;
class gp_Lin;
class gp_Torus;
class gp_Pnt;


//! Intersection between a line and a torus.
class IntAna_IntLinTorus 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT IntAna_IntLinTorus();
  
  //! Creates the intersection between a line and a torus.
  Standard_EXPORT IntAna_IntLinTorus(const gp_Lin& L, const gp_Torus& T);
  
  //! Intersects a line and a torus.
  Standard_EXPORT   void Perform (const gp_Lin& L, const gp_Torus& T) ;
  
  //! Returns True if the computation was successful.
      Standard_Boolean IsDone()  const;
  
  //! Returns the number of intersection points.
      Standard_Integer NbPoints()  const;
  
  //! Returns the intersection point of range Index.
     const  gp_Pnt& Value (const Standard_Integer Index)  const;
  
  //! Returns the parameter on the line of the intersection
  //! point of range Index.
      Standard_Real ParamOnLine (const Standard_Integer Index)  const;
  
  //! Returns the parameters on the torus of the intersection
  //! point of range Index.
      void ParamOnTorus (const Standard_Integer Index, Standard_Real& FI, Standard_Real& THETA)  const;




protected:





private:



  Standard_Boolean done;
  Standard_Integer nbpt;
  gp_Pnt thePoint[4];
  Standard_Real theParam[4];
  Standard_Real theFi[4];
  Standard_Real theTheta[4];


};


#include <IntAna_IntLinTorus.lxx>





#endif // _IntAna_IntLinTorus_HeaderFile