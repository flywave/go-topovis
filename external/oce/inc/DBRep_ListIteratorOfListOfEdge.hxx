// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _DBRep_ListIteratorOfListOfEdge_HeaderFile
#define _DBRep_ListIteratorOfListOfEdge_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <Standard_Address.hxx>
#include <Handle_DBRep_Edge.hxx>
#include <Handle_DBRep_ListNodeOfListOfEdge.hxx>
#include <Standard_Boolean.hxx>
class Standard_NoMoreObject;
class Standard_NoSuchObject;
class DBRep_ListOfEdge;
class DBRep_Edge;
class DBRep_ListNodeOfListOfEdge;



class DBRep_ListIteratorOfListOfEdge 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT DBRep_ListIteratorOfListOfEdge();
  
  Standard_EXPORT DBRep_ListIteratorOfListOfEdge(const DBRep_ListOfEdge& L);
  
  Standard_EXPORT   void Initialize (const DBRep_ListOfEdge& L) ;
  
      Standard_Boolean More()  const;
  
  Standard_EXPORT   void Next() ;
  
  Standard_EXPORT   Handle(DBRep_Edge)& Value()  const;


friend class DBRep_ListOfEdge;


protected:





private:



  Standard_Address current;
  Standard_Address previous;


};

#define Item Handle(DBRep_Edge)
#define Item_hxx <DBRep_Edge.hxx>
#define TCollection_ListNode DBRep_ListNodeOfListOfEdge
#define TCollection_ListNode_hxx <DBRep_ListNodeOfListOfEdge.hxx>
#define TCollection_ListIterator DBRep_ListIteratorOfListOfEdge
#define TCollection_ListIterator_hxx <DBRep_ListIteratorOfListOfEdge.hxx>
#define Handle_TCollection_ListNode Handle_DBRep_ListNodeOfListOfEdge
#define TCollection_ListNode_Type_() DBRep_ListNodeOfListOfEdge_Type_()
#define TCollection_List DBRep_ListOfEdge
#define TCollection_List_hxx <DBRep_ListOfEdge.hxx>

#include <TCollection_ListIterator.lxx>

#undef Item
#undef Item_hxx
#undef TCollection_ListNode
#undef TCollection_ListNode_hxx
#undef TCollection_ListIterator
#undef TCollection_ListIterator_hxx
#undef Handle_TCollection_ListNode
#undef TCollection_ListNode_Type_
#undef TCollection_List
#undef TCollection_List_hxx




#endif // _DBRep_ListIteratorOfListOfEdge_HeaderFile