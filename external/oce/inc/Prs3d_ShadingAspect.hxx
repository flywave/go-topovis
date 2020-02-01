// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Prs3d_ShadingAspect_HeaderFile
#define _Prs3d_ShadingAspect_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_Prs3d_ShadingAspect.hxx>

#include <Handle_Graphic3d_AspectFillArea3d.hxx>
#include <Prs3d_BasicAspect.hxx>
#include <Aspect_TypeOfFacingModel.hxx>
#include <Quantity_NameOfColor.hxx>
#include <Graphic3d_NameOfMaterial.hxx>
#include <Standard_Real.hxx>
class Graphic3d_AspectFillArea3d;
class Quantity_Color;
class Graphic3d_MaterialAspect;


//! A framework to define the display of shading.
//! The attributes which make up this definition include:
//! -   fill aspect
//! -   color, and
//! -   material
class Prs3d_ShadingAspect : public Prs3d_BasicAspect
{

public:

  
  //! Constructs an empty framework to display shading.
  Standard_EXPORT Prs3d_ShadingAspect();
  
  Standard_EXPORT Prs3d_ShadingAspect(const Handle(Graphic3d_AspectFillArea3d)& theAspect);
  
  //! Change the polygons interior color and material ambient color.
  Standard_EXPORT   void SetColor (const Quantity_Color& aColor, const Aspect_TypeOfFacingModel aModel = Aspect_TOFM_BOTH_SIDE) ;
  
  //! Change the polygons interior color and material ambient color.
  Standard_EXPORT   void SetColor (const Quantity_NameOfColor aColor, const Aspect_TypeOfFacingModel aModel = Aspect_TOFM_BOTH_SIDE) ;
  
  //! Change the polygons material aspect.
  Standard_EXPORT   void SetMaterial (const Graphic3d_MaterialAspect& aMaterial, const Aspect_TypeOfFacingModel aModel = Aspect_TOFM_BOTH_SIDE) ;
  
  Standard_EXPORT   void SetMaterial (const Graphic3d_NameOfMaterial aMaterial, const Aspect_TypeOfFacingModel aModel = Aspect_TOFM_BOTH_SIDE) ;
  
  //! Change the polygons transparency value.
  //! Warning : aValue must be in the range 0,1. 0 is the default (NO transparent)
  Standard_EXPORT   void SetTransparency (const Standard_Real aValue, const Aspect_TypeOfFacingModel aModel = Aspect_TOFM_BOTH_SIDE) ;
  
  //! Returns the polygons color.
  Standard_EXPORT  const  Quantity_Color& Color (const Aspect_TypeOfFacingModel aModel = Aspect_TOFM_FRONT_SIDE)  const;
  
  //! Returns the polygons material aspect.
  Standard_EXPORT  const  Graphic3d_MaterialAspect& Material (const Aspect_TypeOfFacingModel aModel = Aspect_TOFM_FRONT_SIDE)  const;
  
  //! Returns the polygons transparency value.
  Standard_EXPORT   Standard_Real Transparency (const Aspect_TypeOfFacingModel aModel = Aspect_TOFM_FRONT_SIDE)  const;
  
  //! Returns the polygons aspect properties.
  Standard_EXPORT   Handle(Graphic3d_AspectFillArea3d) Aspect()  const;
  
  Standard_EXPORT   void SetAspect (const Handle(Graphic3d_AspectFillArea3d)& theAspect) ;




  DEFINE_STANDARD_RTTI(Prs3d_ShadingAspect)

protected:




private: 


  Handle(Graphic3d_AspectFillArea3d) myAspect;


};







#endif // _Prs3d_ShadingAspect_HeaderFile