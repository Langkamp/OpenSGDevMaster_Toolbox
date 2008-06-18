/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
 *                                                                           *
 *                            www.opensg.org                                 *
 *                                                                           *
 *   contact: dirk@opensg.org, gerrit.voss@vossg.org, jbehr@zgdv.de          *
 *                                                                           *
\*---------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------*\
 *                                License                                    *
 *                                                                           *
 * This library is free software; you can redistribute it and/or modify it   *
 * under the terms of the GNU Library General Public License as published    *
 * by the Free Software Foundation, version 2.                               *
 *                                                                           *
 * This library is distributed in the hope that it will be useful, but       *
 * WITHOUT ANY WARRANTY; without even the implied warranty of                *
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU         *
 * Library General Public License for more details.                          *
 *                                                                           *
 * You should have received a copy of the GNU Library General Public         *
 * License along with this library; if not, write to the Free Software       *
 * Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.                 *
 *                                                                           *
\*---------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------*\
 *                                Changes                                    *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
\*---------------------------------------------------------------------------*/

/*****************************************************************************\
 *****************************************************************************
 **                                                                         **
 **                  This file is automatically generated.                  **
 **                                                                         **
 **          Any changes made to this file WILL be lost when it is          **
 **           regenerated, which can become necessary at any time.          **
 **                                                                         **
 **     Do not change this file, changes should be done in the derived      **
 **     class ShaderParameterPnt2f!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILESHADERPARAMETERPNT2FINST

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>




#include "OSGShaderParameterPnt2fBase.h"
#include "OSGShaderParameterPnt2f.h"

#include "boost/bind.hpp"

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::ShaderParameterPnt2f
    
 */

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

/*! \var Pnt2f           ShaderParameterPnt2fBase::_sfValue
    parameter value
*/


void ShaderParameterPnt2fBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFPnt2f::Description(
        SFPnt2f::getClassType(),
        "value",
        "parameter value\n",
        ValueFieldId, ValueFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&ShaderParameterPnt2f::editHandleValue),
        static_cast<FieldGetMethodSig >(&ShaderParameterPnt2f::getHandleValue));

    oType.addInitialDesc(pDesc);
}


ShaderParameterPnt2fBase::TypeObject ShaderParameterPnt2fBase::_type(
    ShaderParameterPnt2fBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    reinterpret_cast<PrototypeCreateF>(&ShaderParameterPnt2fBase::createEmptyLocal),
    ShaderParameterPnt2f::initMethod,
    ShaderParameterPnt2f::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&ShaderParameterPnt2fBase::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"ShaderParameterPnt2f\"\n"
    "\tparent=\"ShaderParameter\"\n"
    "\tlibrary=\"State\"\n"
    "\tpointerfieldtypes=\"both\"\n"
    "\tstructure=\"concrete\"\n"
    "\tsystemcomponent=\"true\"\n"
    "\tparentsystemcomponent=\"true\"\n"
    "\tdecoratable=\"false\"\n"
    "\tuseLocalIncludes=\"false\"\n"
    ">\n"
    "\t<Field\n"
    "\t\tname=\"value\"\n"
    "\t\ttype=\"Pnt2f\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tparameter value\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    ""
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &ShaderParameterPnt2fBase::getType(void)
{
    return _type;
}

const FieldContainerType &ShaderParameterPnt2fBase::getType(void) const
{
    return _type;
}

UInt32 ShaderParameterPnt2fBase::getContainerSize(void) const
{
    return sizeof(ShaderParameterPnt2f);
}

/*------------------------- decorator get ------------------------------*/


SFPnt2f *ShaderParameterPnt2fBase::editSFValue(void)
{
    editSField(ValueFieldMask);

    return &_sfValue;
}

const SFPnt2f *ShaderParameterPnt2fBase::getSFValue(void) const
{
    return &_sfValue;
}






/*------------------------------ access -----------------------------------*/

UInt32 ShaderParameterPnt2fBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (ValueFieldMask & whichField))
    {
        returnValue += _sfValue.getBinSize();
    }

    return returnValue;
}

void ShaderParameterPnt2fBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (ValueFieldMask & whichField))
    {
        _sfValue.copyToBin(pMem);
    }
}

void ShaderParameterPnt2fBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (ValueFieldMask & whichField))
    {
        _sfValue.copyFromBin(pMem);
    }
}

//! create a new instance of the class
ShaderParameterPnt2fTransitPtr ShaderParameterPnt2fBase::createLocal(BitVector bFlags)
{
    ShaderParameterPnt2fTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<ShaderParameterPnt2f>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
ShaderParameterPnt2fTransitPtr ShaderParameterPnt2fBase::create(void)
{
    ShaderParameterPnt2fTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<ShaderParameterPnt2f>(tmpPtr);
    }

    return fc;
}

ShaderParameterPnt2f *ShaderParameterPnt2fBase::createEmptyLocal(BitVector bFlags)
{
    ShaderParameterPnt2f *returnValue;

    newPtr<ShaderParameterPnt2f>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
ShaderParameterPnt2f *ShaderParameterPnt2fBase::createEmpty(void)
{
    ShaderParameterPnt2f *returnValue;

    newPtr<ShaderParameterPnt2f>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr ShaderParameterPnt2fBase::shallowCopyLocal(
    BitVector bFlags) const
{
    ShaderParameterPnt2f *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const ShaderParameterPnt2f *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr ShaderParameterPnt2fBase::shallowCopy(void) const
{
    ShaderParameterPnt2f *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const ShaderParameterPnt2f *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

ShaderParameterPnt2fBase::ShaderParameterPnt2fBase(void) :
    Inherited(),
    _sfValue                  ()
{
}

ShaderParameterPnt2fBase::ShaderParameterPnt2fBase(const ShaderParameterPnt2fBase &source) :
    Inherited(source),
    _sfValue                  (source._sfValue                  )
{
}


/*-------------------------- destructors ----------------------------------*/

ShaderParameterPnt2fBase::~ShaderParameterPnt2fBase(void)
{
}


GetFieldHandlePtr ShaderParameterPnt2fBase::getHandleValue           (void) const
{
    SFPnt2f::GetHandlePtr returnValue(
        new  SFPnt2f::GetHandle(
             &_sfValue,
             this->getType().getFieldDesc(ValueFieldId)));

    return returnValue;
}

EditFieldHandlePtr ShaderParameterPnt2fBase::editHandleValue          (void)
{
    SFPnt2f::EditHandlePtr returnValue(
        new  SFPnt2f::EditHandle(
             &_sfValue,
             this->getType().getFieldDesc(ValueFieldId)));


    editSField(ValueFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void ShaderParameterPnt2fBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    this->execSync(static_cast<ShaderParameterPnt2fBase *>(&oFrom),
                   whichField,
                   oOffsets,
                   syncMode,
                   uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *ShaderParameterPnt2fBase::createAspectCopy(void) const
{
    ShaderParameterPnt2f *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const ShaderParameterPnt2f *>(this));

    return returnValue;
}
#endif

void ShaderParameterPnt2fBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<ShaderParameterPnt2f *>::_type("ShaderParameterPnt2fPtr", "ShaderParameterPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(ShaderParameterPnt2f *)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           ShaderParameterPnt2f *,
                           0);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           ShaderParameterPnt2f *,
                           0);

OSG_END_NAMESPACE
