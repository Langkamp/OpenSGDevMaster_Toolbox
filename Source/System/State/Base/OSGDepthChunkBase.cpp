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
 **     class DepthChunk!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILEDEPTHCHUNKINST

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>


#include <OSGGL.h>                        // Func default header


#include "OSGDepthChunkBase.h"
#include "OSGDepthChunk.h"

#include "boost/bind.hpp"

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::DepthChunk
    The depth chunk contains the parameters that are specific for depth control.

    The parameters of the following functions are wrapped here: glDepthFunc
    (OSG::DepthChunk::_sfFunc), glDepthRange (OSG::DepthChunk::_sfNear,
    OSG::DepthChunk::_sfFar), glEnable(GL_DEPTH_TEST)
    (OSG::DepthChunk::_sfEnable).
 */

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

/*! \var bool            DepthChunkBase::_sfEnable
    Whether the depth test should be enabled or not.
*/

/*! \var GLenum          DepthChunkBase::_sfFunc
    The depth function to use. If GL_NONE, it's not changed. The default is GL_LEQUAL.
*/

/*! \var Real32          DepthChunkBase::_sfNear
    The near value for glDepthRange. Ignored if less than 0, defaults to -1.
*/

/*! \var Real32          DepthChunkBase::_sfFar
    The far value for glDepthRange. Ignored if less than 0, defaults to -1.
*/

/*! \var bool            DepthChunkBase::_sfReadOnly
    Whether the depth buffer is enabled for writing or not.
*/


void DepthChunkBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFBool::Description(
        SFBool::getClassType(),
        "enable",
        "Whether the depth test should be enabled or not.\n",
        EnableFieldId, EnableFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&DepthChunk::editHandleEnable),
        static_cast<FieldGetMethodSig >(&DepthChunk::getHandleEnable));

    oType.addInitialDesc(pDesc);

    pDesc = new SFGLenum::Description(
        SFGLenum::getClassType(),
        "func",
        "The depth function to use. If GL_NONE, it's not changed. The default is GL_LEQUAL.\n",
        FuncFieldId, FuncFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&DepthChunk::editHandleFunc),
        static_cast<FieldGetMethodSig >(&DepthChunk::getHandleFunc));

    oType.addInitialDesc(pDesc);

    pDesc = new SFReal32::Description(
        SFReal32::getClassType(),
        "near",
        "The near value for glDepthRange. Ignored if less than 0, defaults to -1.\n",
        NearFieldId, NearFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&DepthChunk::editHandleNear),
        static_cast<FieldGetMethodSig >(&DepthChunk::getHandleNear));

    oType.addInitialDesc(pDesc);

    pDesc = new SFReal32::Description(
        SFReal32::getClassType(),
        "far",
        "The far value for glDepthRange. Ignored if less than 0, defaults to -1.\n",
        FarFieldId, FarFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&DepthChunk::editHandleFar),
        static_cast<FieldGetMethodSig >(&DepthChunk::getHandleFar));

    oType.addInitialDesc(pDesc);

    pDesc = new SFBool::Description(
        SFBool::getClassType(),
        "readOnly",
        "Whether the depth buffer is enabled for writing or not.\n",
        ReadOnlyFieldId, ReadOnlyFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&DepthChunk::editHandleReadOnly),
        static_cast<FieldGetMethodSig >(&DepthChunk::getHandleReadOnly));

    oType.addInitialDesc(pDesc);
}


DepthChunkBase::TypeObject DepthChunkBase::_type(
    DepthChunkBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    reinterpret_cast<PrototypeCreateF>(&DepthChunkBase::createEmptyLocal),
    DepthChunk::initMethod,
    DepthChunk::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&DepthChunkBase::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"DepthChunk\"\n"
    "\tparent=\"StateChunk\"\n"
    "\tlibrary=\"System\"\n"
    "\tpointerfieldtypes=\"both\"\n"
    "\tstructure=\"concrete\"\n"
    "\tsystemcomponent=\"true\"\n"
    "\tparentsystemcomponent=\"true\"\n"
    "\tdecoratable=\"false\"\n"
    "\tuseLocalIncludes=\"false\"\n"
    ">\n"
    "The depth chunk contains the parameters that are specific for depth control.\n"
    "\n"
    "The parameters of the following functions are wrapped here: glDepthFunc\n"
    "(OSG::DepthChunk::_sfFunc), glDepthRange (OSG::DepthChunk::_sfNear,\n"
    "OSG::DepthChunk::_sfFar), glEnable(GL_DEPTH_TEST)\n"
    "(OSG::DepthChunk::_sfEnable).\n"
    "\t<Field\n"
    "\t\tname=\"enable\"\n"
    "\t\ttype=\"bool\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"true\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tWhether the depth test should be enabled or not.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"func\"\n"
    "\t\ttype=\"GLenum\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"GL_LEQUAL\"\n"
    "\t\tdefaultHeader=\"&lt;OSGGL.h&gt;\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tThe depth function to use. If GL_NONE, it's not changed. The default is GL_LEQUAL.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"near\"\n"
    "\t\ttype=\"Real32\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"-1.f\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tThe near value for glDepthRange. Ignored if less than 0, defaults to -1.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"far\"\n"
    "\t\ttype=\"Real32\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"-1.f\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tThe far value for glDepthRange. Ignored if less than 0, defaults to -1.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"readOnly\"\n"
    "\t\ttype=\"bool\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"false\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tWhether the depth buffer is enabled for writing or not.\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    "The depth chunk contains the parameters that are specific for depth control.\n"
    "\n"
    "The parameters of the following functions are wrapped here: glDepthFunc\n"
    "(OSG::DepthChunk::_sfFunc), glDepthRange (OSG::DepthChunk::_sfNear,\n"
    "OSG::DepthChunk::_sfFar), glEnable(GL_DEPTH_TEST)\n"
    "(OSG::DepthChunk::_sfEnable).\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &DepthChunkBase::getType(void)
{
    return _type;
}

const FieldContainerType &DepthChunkBase::getType(void) const
{
    return _type;
}

UInt32 DepthChunkBase::getContainerSize(void) const
{
    return sizeof(DepthChunk);
}

/*------------------------- decorator get ------------------------------*/


SFBool *DepthChunkBase::editSFEnable(void)
{
    editSField(EnableFieldMask);

    return &_sfEnable;
}

const SFBool *DepthChunkBase::getSFEnable(void) const
{
    return &_sfEnable;
}


SFGLenum *DepthChunkBase::editSFFunc(void)
{
    editSField(FuncFieldMask);

    return &_sfFunc;
}

const SFGLenum *DepthChunkBase::getSFFunc(void) const
{
    return &_sfFunc;
}


SFReal32 *DepthChunkBase::editSFNear(void)
{
    editSField(NearFieldMask);

    return &_sfNear;
}

const SFReal32 *DepthChunkBase::getSFNear(void) const
{
    return &_sfNear;
}


SFReal32 *DepthChunkBase::editSFFar(void)
{
    editSField(FarFieldMask);

    return &_sfFar;
}

const SFReal32 *DepthChunkBase::getSFFar(void) const
{
    return &_sfFar;
}


SFBool *DepthChunkBase::editSFReadOnly(void)
{
    editSField(ReadOnlyFieldMask);

    return &_sfReadOnly;
}

const SFBool *DepthChunkBase::getSFReadOnly(void) const
{
    return &_sfReadOnly;
}






/*------------------------------ access -----------------------------------*/

UInt32 DepthChunkBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (EnableFieldMask & whichField))
    {
        returnValue += _sfEnable.getBinSize();
    }
    if(FieldBits::NoField != (FuncFieldMask & whichField))
    {
        returnValue += _sfFunc.getBinSize();
    }
    if(FieldBits::NoField != (NearFieldMask & whichField))
    {
        returnValue += _sfNear.getBinSize();
    }
    if(FieldBits::NoField != (FarFieldMask & whichField))
    {
        returnValue += _sfFar.getBinSize();
    }
    if(FieldBits::NoField != (ReadOnlyFieldMask & whichField))
    {
        returnValue += _sfReadOnly.getBinSize();
    }

    return returnValue;
}

void DepthChunkBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (EnableFieldMask & whichField))
    {
        _sfEnable.copyToBin(pMem);
    }
    if(FieldBits::NoField != (FuncFieldMask & whichField))
    {
        _sfFunc.copyToBin(pMem);
    }
    if(FieldBits::NoField != (NearFieldMask & whichField))
    {
        _sfNear.copyToBin(pMem);
    }
    if(FieldBits::NoField != (FarFieldMask & whichField))
    {
        _sfFar.copyToBin(pMem);
    }
    if(FieldBits::NoField != (ReadOnlyFieldMask & whichField))
    {
        _sfReadOnly.copyToBin(pMem);
    }
}

void DepthChunkBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (EnableFieldMask & whichField))
    {
        _sfEnable.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (FuncFieldMask & whichField))
    {
        _sfFunc.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (NearFieldMask & whichField))
    {
        _sfNear.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (FarFieldMask & whichField))
    {
        _sfFar.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (ReadOnlyFieldMask & whichField))
    {
        _sfReadOnly.copyFromBin(pMem);
    }
}

//! create a new instance of the class
DepthChunkTransitPtr DepthChunkBase::createLocal(BitVector bFlags)
{
    DepthChunkTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<DepthChunk>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
DepthChunkTransitPtr DepthChunkBase::create(void)
{
    DepthChunkTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<DepthChunk>(tmpPtr);
    }

    return fc;
}

DepthChunk *DepthChunkBase::createEmptyLocal(BitVector bFlags)
{
    DepthChunk *returnValue;

    newPtr<DepthChunk>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
DepthChunk *DepthChunkBase::createEmpty(void)
{
    DepthChunk *returnValue;

    newPtr<DepthChunk>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr DepthChunkBase::shallowCopyLocal(
    BitVector bFlags) const
{
    DepthChunk *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const DepthChunk *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr DepthChunkBase::shallowCopy(void) const
{
    DepthChunk *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const DepthChunk *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

DepthChunkBase::DepthChunkBase(void) :
    Inherited(),
    _sfEnable                 (bool(true)),
    _sfFunc                   (GLenum(GL_LEQUAL)),
    _sfNear                   (Real32(-1.f)),
    _sfFar                    (Real32(-1.f)),
    _sfReadOnly               (bool(false))
{
}

DepthChunkBase::DepthChunkBase(const DepthChunkBase &source) :
    Inherited(source),
    _sfEnable                 (source._sfEnable                 ),
    _sfFunc                   (source._sfFunc                   ),
    _sfNear                   (source._sfNear                   ),
    _sfFar                    (source._sfFar                    ),
    _sfReadOnly               (source._sfReadOnly               )
{
}


/*-------------------------- destructors ----------------------------------*/

DepthChunkBase::~DepthChunkBase(void)
{
}


GetFieldHandlePtr DepthChunkBase::getHandleEnable          (void) const
{
    SFBool::GetHandlePtr returnValue(
        new  SFBool::GetHandle(
             &_sfEnable,
             this->getType().getFieldDesc(EnableFieldId)));

    return returnValue;
}

EditFieldHandlePtr DepthChunkBase::editHandleEnable         (void)
{
    SFBool::EditHandlePtr returnValue(
        new  SFBool::EditHandle(
             &_sfEnable,
             this->getType().getFieldDesc(EnableFieldId)));


    editSField(EnableFieldMask);

    return returnValue;
}

GetFieldHandlePtr DepthChunkBase::getHandleFunc            (void) const
{
    SFGLenum::GetHandlePtr returnValue(
        new  SFGLenum::GetHandle(
             &_sfFunc,
             this->getType().getFieldDesc(FuncFieldId)));

    return returnValue;
}

EditFieldHandlePtr DepthChunkBase::editHandleFunc           (void)
{
    SFGLenum::EditHandlePtr returnValue(
        new  SFGLenum::EditHandle(
             &_sfFunc,
             this->getType().getFieldDesc(FuncFieldId)));


    editSField(FuncFieldMask);

    return returnValue;
}

GetFieldHandlePtr DepthChunkBase::getHandleNear            (void) const
{
    SFReal32::GetHandlePtr returnValue(
        new  SFReal32::GetHandle(
             &_sfNear,
             this->getType().getFieldDesc(NearFieldId)));

    return returnValue;
}

EditFieldHandlePtr DepthChunkBase::editHandleNear           (void)
{
    SFReal32::EditHandlePtr returnValue(
        new  SFReal32::EditHandle(
             &_sfNear,
             this->getType().getFieldDesc(NearFieldId)));


    editSField(NearFieldMask);

    return returnValue;
}

GetFieldHandlePtr DepthChunkBase::getHandleFar             (void) const
{
    SFReal32::GetHandlePtr returnValue(
        new  SFReal32::GetHandle(
             &_sfFar,
             this->getType().getFieldDesc(FarFieldId)));

    return returnValue;
}

EditFieldHandlePtr DepthChunkBase::editHandleFar            (void)
{
    SFReal32::EditHandlePtr returnValue(
        new  SFReal32::EditHandle(
             &_sfFar,
             this->getType().getFieldDesc(FarFieldId)));


    editSField(FarFieldMask);

    return returnValue;
}

GetFieldHandlePtr DepthChunkBase::getHandleReadOnly        (void) const
{
    SFBool::GetHandlePtr returnValue(
        new  SFBool::GetHandle(
             &_sfReadOnly,
             this->getType().getFieldDesc(ReadOnlyFieldId)));

    return returnValue;
}

EditFieldHandlePtr DepthChunkBase::editHandleReadOnly       (void)
{
    SFBool::EditHandlePtr returnValue(
        new  SFBool::EditHandle(
             &_sfReadOnly,
             this->getType().getFieldDesc(ReadOnlyFieldId)));


    editSField(ReadOnlyFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void DepthChunkBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    this->execSync(static_cast<DepthChunkBase *>(&oFrom),
                   whichField,
                   oOffsets,
                   syncMode,
                   uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *DepthChunkBase::createAspectCopy(void) const
{
    DepthChunk *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const DepthChunk *>(this));

    return returnValue;
}
#endif

void DepthChunkBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<DepthChunk *>::_type("DepthChunkPtr", "StateChunkPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(DepthChunk *)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           DepthChunk *,
                           0);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           DepthChunk *,
                           0);

OSG_END_NAMESPACE
