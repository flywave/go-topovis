// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Standard_Failure_HeaderFile
#define _Standard_Failure_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_Standard_Failure.hxx>

#include <Standard_CString.hxx>
#include <Standard_Transient.hxx>
#include <Standard_OStream.hxx>
#include <Standard_SStream.hxx>
class Standard_NoSuchObject;



//! Forms the root of the entire exception hierarchy.
class Standard_Failure : public Standard_Transient
{

public:

  

  //! Creates a status object of type "Failure".
  Standard_EXPORT Standard_Failure();
Standard_EXPORT Standard_Failure (const Standard_Failure& f);
  

  //! Creates a status object of type "Failure".
  Standard_EXPORT Standard_Failure(const Standard_CString aString);
Standard_EXPORT Standard_Failure& operator= (const Standard_Failure& f);
  
  Standard_EXPORT   void Destroy() ;
~Standard_Failure()
{
  Destroy();
}
  

  //! Prints on the stream <s> the exception name followed by
  //! the error message.
  //! Level: Advanced
  //! Warning:
  //! The operator "OStream& operator<< (Standard_OStream&,
  //! Handle(Standard_Failure)&)"
  //! is implemented. (This operator uses the method Print)
  Standard_EXPORT   void Print (Standard_OStream& s)  const;
  void operator<< (Standard_OStream& s)  const
{
  Print(s);
}
  
  //! Returns error message
      Standard_CString GetMessageString()  const;
  
  //! Sets error message
  Standard_EXPORT   void SetMessageString (const Standard_CString aMessage) ;
  
  Standard_EXPORT   void Reraise() ;
  
  Standard_EXPORT   void Reraise (const Standard_CString aMessage) ;
  
  //! Reraises a caught exception and changes its error message.
  Standard_EXPORT   void Reraise (const Standard_SStream& aReason) ;
  
  //! Raises an exception of type "Failure" and associates
  //! an error message to it. The message can be printed
  //! in an exception handler.
  Standard_EXPORT static   void Raise (const Standard_CString aMessage = "") ;
  
  //! Raises an exception of type "Failure" and associates
  //! an error message to it. The message can be constructed
  //! at run-time.
  Standard_EXPORT static   void Raise (const Standard_SStream& aReason) ;
  
  //! Used to construct an instance of the exception object
  //! as a handle. Shall be used to protect against possible
  //! construction of exception object in C stack -- that is
  //! dangerous since some of methods require that object
  //! was allocated dynamically.
  Standard_EXPORT static   Handle(Standard_Failure) NewInstance (const Standard_CString aMessage) ;
  
  //! Used to throw CASCADE exception from C signal handler.
  //! On platforms that do not allow throwing C++ exceptions
  //! from this handler (e.g. Linux), uses longjump to get to
  //! the current active signal handler, and only then is
  //! converted to C++ exception.
  Standard_EXPORT   void Jump()  const;
  
  //! Returns the last caught exception.
  //! Needed when exceptions are emulated by C longjumps,
  //! in other cases is also provided for compatibility.
  Standard_EXPORT static   Handle(Standard_Failure) Caught() ;



  DEFINE_STANDARD_RTTI(Standard_Failure)

protected:

  
  //! Used only if standard C++ exceptions are used.
  //! Throws exception of the same type as this by C++ throw,
  //! and stores current object as last thrown exception,
  //! to be accessible by method Caught()
  Standard_EXPORT virtual   void Throw()  const;



private: 


  Standard_CString myMessage;


};


#include <Standard_Failure.lxx>





#endif // _Standard_Failure_HeaderFile