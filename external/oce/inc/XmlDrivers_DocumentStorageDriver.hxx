// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _XmlDrivers_DocumentStorageDriver_HeaderFile
#define _XmlDrivers_DocumentStorageDriver_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_XmlDrivers_DocumentStorageDriver.hxx>

#include <XmlLDrivers_DocumentStorageDriver.hxx>
#include <Handle_XmlMDF_ADriverTable.hxx>
#include <Handle_CDM_MessageDriver.hxx>
#include <Standard_Boolean.hxx>
#include <XmlObjMgt_Element.hxx>
class TCollection_ExtendedString;
class XmlMDF_ADriverTable;
class CDM_MessageDriver;



class XmlDrivers_DocumentStorageDriver : public XmlLDrivers_DocumentStorageDriver
{

public:

  
  Standard_EXPORT XmlDrivers_DocumentStorageDriver(const TCollection_ExtendedString& theCopyright);
  
  Standard_EXPORT virtual   Handle(XmlMDF_ADriverTable) AttributeDrivers (const Handle(CDM_MessageDriver)& theMsgDriver) ;
  
  Standard_EXPORT virtual   Standard_Boolean WriteShapeSection (XmlObjMgt_Element& thePDoc) ;




  DEFINE_STANDARD_RTTI(XmlDrivers_DocumentStorageDriver)

protected:




private: 




};







#endif // _XmlDrivers_DocumentStorageDriver_HeaderFile