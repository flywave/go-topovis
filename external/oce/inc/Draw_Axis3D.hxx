// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Draw_Axis3D_HeaderFile
#define _Draw_Axis3D_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_Draw_Axis3D.hxx>

#include <gp_Ax3.hxx>
#include <Draw_Color.hxx>
#include <Standard_Integer.hxx>
#include <Draw_Drawable3D.hxx>
class Draw_Color;
class gp_Pnt;
class gp_Ax3;
class Draw_Display;



class Draw_Axis3D : public Draw_Drawable3D
{

public:

  
  Standard_EXPORT Draw_Axis3D(const Draw_Color& col, const Standard_Integer Size = 5);
  
  Standard_EXPORT Draw_Axis3D(const gp_Pnt& p, const Draw_Color& col, const Standard_Integer Size = 5);
  
  Standard_EXPORT Draw_Axis3D(const gp_Ax3& A, const Draw_Color& col, const Standard_Integer Size = 5);
  
  Standard_EXPORT   void DrawOn (Draw_Display& dis)  const;




  DEFINE_STANDARD_RTTI(Draw_Axis3D)

protected:




private: 


  gp_Ax3 myAxes;
  Draw_Color myColor;
  Standard_Integer mySize;


};







#endif // _Draw_Axis3D_HeaderFile