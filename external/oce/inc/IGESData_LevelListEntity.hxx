// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESData_LevelListEntity_HeaderFile
#define _IGESData_LevelListEntity_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_IGESData_LevelListEntity.hxx>

#include <IGESData_IGESEntity.hxx>
#include <Standard_Integer.hxx>
#include <Standard_Boolean.hxx>
class Standard_OutOfRange;


//! defines required type for LevelList in directory part
//! an effective LevelList entity must inherits it
class IGESData_LevelListEntity : public IGESData_IGESEntity
{

public:

  
  //! Must return the count of levels
  Standard_EXPORT virtual   Standard_Integer NbLevelNumbers()  const = 0;
  
  //! returns the Level Number of <me>, indicated by <num>
  //! raises an exception if num is out of range
  Standard_EXPORT virtual   Standard_Integer LevelNumber (const Standard_Integer num)  const = 0;
  
  //! returns True if <level> is in the list
  Standard_EXPORT   Standard_Boolean HasLevelNumber (const Standard_Integer level)  const;




  DEFINE_STANDARD_RTTI(IGESData_LevelListEntity)

protected:




private: 




};







#endif // _IGESData_LevelListEntity_HeaderFile