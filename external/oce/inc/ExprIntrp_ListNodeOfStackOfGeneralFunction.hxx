// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _ExprIntrp_ListNodeOfStackOfGeneralFunction_HeaderFile
#define _ExprIntrp_ListNodeOfStackOfGeneralFunction_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_ExprIntrp_ListNodeOfStackOfGeneralFunction.hxx>

#include <Handle_Expr_GeneralFunction.hxx>
#include <TCollection_MapNode.hxx>
#include <TCollection_MapNodePtr.hxx>
class Expr_GeneralFunction;
class ExprIntrp_StackOfGeneralFunction;
class ExprIntrp_ListIteratorOfStackOfGeneralFunction;



class ExprIntrp_ListNodeOfStackOfGeneralFunction : public TCollection_MapNode
{

public:

  
    ExprIntrp_ListNodeOfStackOfGeneralFunction(const Handle(Expr_GeneralFunction)& I, const TCollection_MapNodePtr& n);
  
      Handle(Expr_GeneralFunction)& Value()  const;




  DEFINE_STANDARD_RTTI(ExprIntrp_ListNodeOfStackOfGeneralFunction)

protected:




private: 


  Handle(Expr_GeneralFunction) myValue;


};

#define Item Handle(Expr_GeneralFunction)
#define Item_hxx <Expr_GeneralFunction.hxx>
#define TCollection_ListNode ExprIntrp_ListNodeOfStackOfGeneralFunction
#define TCollection_ListNode_hxx <ExprIntrp_ListNodeOfStackOfGeneralFunction.hxx>
#define TCollection_ListIterator ExprIntrp_ListIteratorOfStackOfGeneralFunction
#define TCollection_ListIterator_hxx <ExprIntrp_ListIteratorOfStackOfGeneralFunction.hxx>
#define Handle_TCollection_ListNode Handle_ExprIntrp_ListNodeOfStackOfGeneralFunction
#define TCollection_ListNode_Type_() ExprIntrp_ListNodeOfStackOfGeneralFunction_Type_()
#define TCollection_List ExprIntrp_StackOfGeneralFunction
#define TCollection_List_hxx <ExprIntrp_StackOfGeneralFunction.hxx>

#include <TCollection_ListNode.lxx>

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




#endif // _ExprIntrp_ListNodeOfStackOfGeneralFunction_HeaderFile