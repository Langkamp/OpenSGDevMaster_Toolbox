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
 **     class Billboard!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILEBILLBOARDINST

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>




#include "OSGBillboardBase.h"
#include "OSGBillboard.h"

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::Billboard
    
 */

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

/*! \var Vec3f           BillboardBase::_sfAxisOfRotation
    
*/

/*! \var bool            BillboardBase::_sfFocusOnCamera
    
*/

/*! \var bool            BillboardBase::_sfAlignToScreen
    
*/

/*! \var Real32          BillboardBase::_sfMinAngle
    
*/

/*! \var Real32          BillboardBase::_sfMaxAngle
    
*/


void BillboardBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


#ifdef OSG_1_GET_COMPAT
    typedef const SFVec3f *(BillboardBase::*GetSFAxisOfRotationF)(void) const;

    GetSFAxisOfRotationF GetSFAxisOfRotation = &BillboardBase::getSFAxisOfRotation;
#endif

    pDesc = new SFVec3f::Description(
        SFVec3f::getClassType(),
        "axisOfRotation",
        "",
        AxisOfRotationFieldId, AxisOfRotationFieldMask,
        true,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&BillboardBase::editSFAxisOfRotation),
#ifdef OSG_1_GET_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFAxisOfRotation));
#else
        reinterpret_cast<FieldGetMethodSig >(&BillboardBase::getSFAxisOfRotation));
#endif

    oType.addInitialDesc(pDesc);

#ifdef OSG_1_GET_COMPAT
    typedef const SFBool *(BillboardBase::*GetSFFocusOnCameraF)(void) const;

    GetSFFocusOnCameraF GetSFFocusOnCamera = &BillboardBase::getSFFocusOnCamera;
#endif

    pDesc = new SFBool::Description(
        SFBool::getClassType(),
        "focusOnCamera",
        "",
        FocusOnCameraFieldId, FocusOnCameraFieldMask,
        true,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&BillboardBase::editSFFocusOnCamera),
#ifdef OSG_1_GET_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFFocusOnCamera));
#else
        reinterpret_cast<FieldGetMethodSig >(&BillboardBase::getSFFocusOnCamera));
#endif

    oType.addInitialDesc(pDesc);

#ifdef OSG_1_GET_COMPAT
    typedef const SFBool *(BillboardBase::*GetSFAlignToScreenF)(void) const;

    GetSFAlignToScreenF GetSFAlignToScreen = &BillboardBase::getSFAlignToScreen;
#endif

    pDesc = new SFBool::Description(
        SFBool::getClassType(),
        "alignToScreen",
        "",
        AlignToScreenFieldId, AlignToScreenFieldMask,
        true,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&BillboardBase::editSFAlignToScreen),
#ifdef OSG_1_GET_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFAlignToScreen));
#else
        reinterpret_cast<FieldGetMethodSig >(&BillboardBase::getSFAlignToScreen));
#endif

    oType.addInitialDesc(pDesc);

#ifdef OSG_1_GET_COMPAT
    typedef const SFReal32 *(BillboardBase::*GetSFMinAngleF)(void) const;

    GetSFMinAngleF GetSFMinAngle = &BillboardBase::getSFMinAngle;
#endif

    pDesc = new SFReal32::Description(
        SFReal32::getClassType(),
        "minAngle",
        "",
        MinAngleFieldId, MinAngleFieldMask,
        true,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&BillboardBase::editSFMinAngle),
#ifdef OSG_1_GET_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFMinAngle));
#else
        reinterpret_cast<FieldGetMethodSig >(&BillboardBase::getSFMinAngle));
#endif

    oType.addInitialDesc(pDesc);

#ifdef OSG_1_GET_COMPAT
    typedef const SFReal32 *(BillboardBase::*GetSFMaxAngleF)(void) const;

    GetSFMaxAngleF GetSFMaxAngle = &BillboardBase::getSFMaxAngle;
#endif

    pDesc = new SFReal32::Description(
        SFReal32::getClassType(),
        "maxAngle",
        "",
        MaxAngleFieldId, MaxAngleFieldMask,
        true,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&BillboardBase::editSFMaxAngle),
#ifdef OSG_1_GET_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFMaxAngle));
#else
        reinterpret_cast<FieldGetMethodSig >(&BillboardBase::getSFMaxAngle));
#endif

    oType.addInitialDesc(pDesc);
}


BillboardBase::TypeObject BillboardBase::_type(
    BillboardBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    (PrototypeCreateF) &BillboardBase::createEmpty,
    Billboard::initMethod,
    (InitalInsertDescFunc) &BillboardBase::classDescInserter,
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"Billboard\"\n"
    "\tparent=\"Group\"\n"
    "\tlibrary=\"Group\"\n"
    "\tpointerfieldtypes=\"both\"\n"
    "\tstructure=\"concrete\"\n"
    "\tsystemcomponent=\"true\"\n"
    "\tparentsystemcomponent=\"true\"\n"
    "    isNodeCore=\"true\"\n"
    ">\n"
    "\t<Field\n"
    "\t\tname=\"axisOfRotation\"\n"
    "\t\ttype=\"Vec3f\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"internal\"\n"
    "\t\tdefaultValue=\"0.f, 1.f, 0.f\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"focusOnCamera\"\n"
    "\t\ttype=\"bool\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"internal\"\n"
    "\t\tdefaultValue=\"true\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"alignToScreen\"\n"
    "\t\ttype=\"bool\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"internal\"\n"
    "\t\tdefaultValue=\"false\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"minAngle\"\n"
    "\t\ttype=\"Real32\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"internal\"\n"
    "\t\tdefaultValue=\"0.0f\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"maxAngle\"\n"
    "\t\ttype=\"Real32\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"internal\"\n"
    "\t\tdefaultValue=\"-1.0f\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    ""
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &BillboardBase::getType(void)
{
    return _type;
}

const FieldContainerType &BillboardBase::getType(void) const
{
    return _type;
}

UInt32 BillboardBase::getContainerSize(void) const
{
    return sizeof(Billboard);
}

/*------------------------- decorator get ------------------------------*/


SFVec3f *BillboardBase::editSFAxisOfRotation(void)
{
    editSField(AxisOfRotationFieldMask);

    return &_sfAxisOfRotation;
}

const SFVec3f *BillboardBase::getSFAxisOfRotation(void) const
{
    return &_sfAxisOfRotation;
}

#ifdef OSG_1_GET_COMPAT
SFVec3f             *BillboardBase::getSFAxisOfRotation (void)
{
    return this->editSFAxisOfRotation ();
}
#endif

SFBool *BillboardBase::editSFFocusOnCamera(void)
{
    editSField(FocusOnCameraFieldMask);

    return &_sfFocusOnCamera;
}

const SFBool *BillboardBase::getSFFocusOnCamera(void) const
{
    return &_sfFocusOnCamera;
}

#ifdef OSG_1_GET_COMPAT
SFBool              *BillboardBase::getSFFocusOnCamera  (void)
{
    return this->editSFFocusOnCamera  ();
}
#endif

SFBool *BillboardBase::editSFAlignToScreen(void)
{
    editSField(AlignToScreenFieldMask);

    return &_sfAlignToScreen;
}

const SFBool *BillboardBase::getSFAlignToScreen(void) const
{
    return &_sfAlignToScreen;
}

#ifdef OSG_1_GET_COMPAT
SFBool              *BillboardBase::getSFAlignToScreen  (void)
{
    return this->editSFAlignToScreen  ();
}
#endif

SFReal32 *BillboardBase::editSFMinAngle(void)
{
    editSField(MinAngleFieldMask);

    return &_sfMinAngle;
}

const SFReal32 *BillboardBase::getSFMinAngle(void) const
{
    return &_sfMinAngle;
}

#ifdef OSG_1_GET_COMPAT
SFReal32            *BillboardBase::getSFMinAngle       (void)
{
    return this->editSFMinAngle       ();
}
#endif

SFReal32 *BillboardBase::editSFMaxAngle(void)
{
    editSField(MaxAngleFieldMask);

    return &_sfMaxAngle;
}

const SFReal32 *BillboardBase::getSFMaxAngle(void) const
{
    return &_sfMaxAngle;
}

#ifdef OSG_1_GET_COMPAT
SFReal32            *BillboardBase::getSFMaxAngle       (void)
{
    return this->editSFMaxAngle       ();
}
#endif





/*------------------------------ access -----------------------------------*/

UInt32 BillboardBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (AxisOfRotationFieldMask & whichField))
    {
        returnValue += _sfAxisOfRotation.getBinSize();
    }
    if(FieldBits::NoField != (FocusOnCameraFieldMask & whichField))
    {
        returnValue += _sfFocusOnCamera.getBinSize();
    }
    if(FieldBits::NoField != (AlignToScreenFieldMask & whichField))
    {
        returnValue += _sfAlignToScreen.getBinSize();
    }
    if(FieldBits::NoField != (MinAngleFieldMask & whichField))
    {
        returnValue += _sfMinAngle.getBinSize();
    }
    if(FieldBits::NoField != (MaxAngleFieldMask & whichField))
    {
        returnValue += _sfMaxAngle.getBinSize();
    }

    return returnValue;
}

void BillboardBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (AxisOfRotationFieldMask & whichField))
    {
        _sfAxisOfRotation.copyToBin(pMem);
    }
    if(FieldBits::NoField != (FocusOnCameraFieldMask & whichField))
    {
        _sfFocusOnCamera.copyToBin(pMem);
    }
    if(FieldBits::NoField != (AlignToScreenFieldMask & whichField))
    {
        _sfAlignToScreen.copyToBin(pMem);
    }
    if(FieldBits::NoField != (MinAngleFieldMask & whichField))
    {
        _sfMinAngle.copyToBin(pMem);
    }
    if(FieldBits::NoField != (MaxAngleFieldMask & whichField))
    {
        _sfMaxAngle.copyToBin(pMem);
    }
}

void BillboardBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (AxisOfRotationFieldMask & whichField))
    {
        _sfAxisOfRotation.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (FocusOnCameraFieldMask & whichField))
    {
        _sfFocusOnCamera.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (AlignToScreenFieldMask & whichField))
    {
        _sfAlignToScreen.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (MinAngleFieldMask & whichField))
    {
        _sfMinAngle.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (MaxAngleFieldMask & whichField))
    {
        _sfMaxAngle.copyFromBin(pMem);
    }
}

//! create a new instance of the class
BillboardPtr BillboardBase::create(void)
{
    BillboardPtr fc;

    if(getClassType().getPrototype() != NullFC)
    {
        fc = dynamic_cast<Billboard::ObjPtr>(
            getClassType().getPrototype()-> shallowCopy());
    }

    return fc;
}

//! create an empty new instance of the class, do not copy the prototype
BillboardPtr BillboardBase::createEmpty(void)
{
    BillboardPtr returnValue;

    newPtr<Billboard>(returnValue);

    return returnValue;
}

FieldContainerPtr BillboardBase::shallowCopy(void) const
{
    BillboardPtr returnValue;

    newPtr(returnValue, dynamic_cast<const Billboard *>(this));

    return returnValue;
}



/*------------------------- constructors ----------------------------------*/

BillboardBase::BillboardBase(void) :
    Inherited(),
    _sfAxisOfRotation         (Vec3f(0.f, 1.f, 0.f)),
    _sfFocusOnCamera          (bool(true)),
    _sfAlignToScreen          (bool(false)),
    _sfMinAngle               (Real32(0.0f)),
    _sfMaxAngle               (Real32(-1.0f))
{
}

BillboardBase::BillboardBase(const BillboardBase &source) :
    Inherited(source),
    _sfAxisOfRotation         (source._sfAxisOfRotation         ),
    _sfFocusOnCamera          (source._sfFocusOnCamera          ),
    _sfAlignToScreen          (source._sfAlignToScreen          ),
    _sfMinAngle               (source._sfMinAngle               ),
    _sfMaxAngle               (source._sfMaxAngle               )
{
}


/*-------------------------- destructors ----------------------------------*/

BillboardBase::~BillboardBase(void)
{
}


#ifdef OSG_MT_CPTR_ASPECT
void BillboardBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    this->execSync(static_cast<BillboardBase *>(&oFrom),
                   whichField,
                   oOffsets,
                   syncMode,
                   uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainerPtr BillboardBase::createAspectCopy(void) const
{
    BillboardPtr returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const Billboard *>(this));

    return returnValue;
}
#endif

void BillboardBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


OSG_END_NAMESPACE

#include "OSGSFieldAdaptor.ins"
#include "OSGMFieldAdaptor.ins"

OSG_BEGIN_NAMESPACE

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<BillboardPtr>::_type("BillboardPtr", "GroupPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(BillboardPtr)

OSG_FIELD_DLLEXPORT_DEF2(SFieldAdaptor, BillboardPtr, SFFieldContainerPtr);
OSG_FIELD_DLLEXPORT_DEF2(MFieldAdaptor, BillboardPtr, MFFieldContainerPtr);

OSG_END_NAMESPACE
