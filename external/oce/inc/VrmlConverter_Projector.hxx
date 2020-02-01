// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _VrmlConverter_Projector_HeaderFile
#define _VrmlConverter_Projector_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_VrmlConverter_Projector.hxx>

#include <HLRAlgo_Projector.hxx>
#include <Vrml_PerspectiveCamera.hxx>
#include <Vrml_OrthographicCamera.hxx>
#include <Vrml_DirectionalLight.hxx>
#include <Vrml_PointLight.hxx>
#include <Vrml_SpotLight.hxx>
#include <VrmlConverter_TypeOfCamera.hxx>
#include <VrmlConverter_TypeOfLight.hxx>
#include <Vrml_MatrixTransform.hxx>
#include <MMgt_TShared.hxx>
#include <Quantity_Length.hxx>
#include <Standard_OStream.hxx>
class TopTools_Array1OfShape;
class HLRAlgo_Projector;



//! defines projector  and calculates properties of cameras and lights from Vrml
//! ( OrthograpicCamera, PerspectiveCamera, DirectionalLight, PointLight, SpotLight
//! and  MatrixTransform  )  to display all scene  shapes  with  arbitrary locations
//! for requested the Projection Vector,  High Point Direction and the Focus
//! and adds them ( method Add ) to anOSream.
class VrmlConverter_Projector : public MMgt_TShared
{

public:

  
  Standard_EXPORT VrmlConverter_Projector(const TopTools_Array1OfShape& Shapes, const Quantity_Length Focus, const Quantity_Length DX, const Quantity_Length DY, const Quantity_Length DZ, const Quantity_Length XUp, const Quantity_Length YUp, const Quantity_Length ZUp, const VrmlConverter_TypeOfCamera Camera = VrmlConverter_NoCamera, const VrmlConverter_TypeOfLight Light = VrmlConverter_NoLight);
  
  Standard_EXPORT   void SetCamera (const VrmlConverter_TypeOfCamera aCamera) ;
  
  Standard_EXPORT   VrmlConverter_TypeOfCamera Camera()  const;
  
  Standard_EXPORT   void SetLight (const VrmlConverter_TypeOfLight aLight) ;
  
  Standard_EXPORT   VrmlConverter_TypeOfLight Light()  const;
  

  //! Adds  into anOStream  if  they  are  defined in  Create.
  //! PerspectiveCamera,
  //! OrthographicCamera,
  //! DirectionLight,
  //! PointLight,
  //! SpotLight
  //! with  MatrixTransform  from VrmlConverter;
  Standard_EXPORT   void Add (Standard_OStream& anOStream)  const;
  
  Standard_EXPORT   HLRAlgo_Projector Projector()  const;




  DEFINE_STANDARD_RTTI(VrmlConverter_Projector)

protected:




private: 


  HLRAlgo_Projector myProjector;
  Vrml_PerspectiveCamera myPerspectiveCamera;
  Vrml_OrthographicCamera myOrthographicCamera;
  Vrml_DirectionalLight myDirectionalLight;
  Vrml_PointLight myPointLight;
  Vrml_SpotLight mySpotLight;
  VrmlConverter_TypeOfCamera myTypeOfCamera;
  VrmlConverter_TypeOfLight myTypeOfLight;
  Vrml_MatrixTransform myMatrixTransform;


};







#endif // _VrmlConverter_Projector_HeaderFile